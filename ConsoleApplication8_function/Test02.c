#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
struct YMD {
	int y, m, d;
};
bool YMD_Read(struct YMD* p, FILE* fp)
{
	return fscanf(fp, "%d/%d/%d", &p->y, &p->m, &p->d) == 3;
}
time_t YMD_AsEpochTime(const struct YMD* p)
{
	return mktime(&(struct tm)
	{ /*int tm_sec  ;// seconds after the minute - [0,  60]*/0
	, /*int tm_min  ;// minutes after the hour   - [0,  59]*/0
	, /*int tm_hour ;// hours since midnight     - [0,  23]*/0
	, /*int tm_mday ;// day of the month         - [1,  31]*/p->d
	, /*int tm_mon  ;// months since January     - [0,  11]*/p->m - 1
	, /*int tm_year ;// years since 1900                   */p->y - 1900
	, /*int tm_wday ;// days since Sunday        - [0,   6]*/0
	, /*int tm_yday ;// days since January 1     - [0, 365]*/0
	, /*int tm_isdst;// daylight savings time flag         */0
	});
}
struct Record {
	struct YMD date ;//日付
	int        n    ;//その時点でのチャンネル登録数
};
bool Record_Read(struct Record* p, FILE* fp)
{
	return YMD_Read(&p->date, fp) && fscanf(fp, "%d", &p->n) == 1;
}
int main()
{
	FILE* const fp = fopen("MonthlySubscriptions.txt", "r");
	if (fp) {
		struct Record to;
		if (Record_Read(&to, fp)) {
			const int a_day_in_seconds = 60 * 60 * 24;
			for (;;) {
				(void)fscanf(fp, "%*[^\n]%*c");
				struct Record from;
				if (Record_Read(&from, fp)) {
					const int d = (int)((YMD_AsEpochTime(&to.date) - YMD_AsEpochTime(&from.date)) / a_day_in_seconds);
					const int a = to.n - from.n;//増えた人数
					printf("%d 日間 %d 人増... %.2f\n", d, a, (double)a / d);
					to = from;
				}
				else
					break;
			}
		}
		fclose(fp);
	}
}
