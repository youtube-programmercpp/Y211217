#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <array>
struct YMD {
	int y, m, d;
	bool Read(FILE* fp)
	{
		return fscanf(fp, "%d/%d/%d", &y, &m, &d) == 3;
	}
	time_t AsEpochTime() const
	{
		return mktime(&std::array<tm, 1>
		{ /*int tm_sec  ;// seconds after the minute - [0,  60]*/0
		, /*int tm_min  ;// minutes after the hour   - [0,  59]*/0
		, /*int tm_hour ;// hours since midnight     - [0,  23]*/0
		, /*int tm_mday ;// day of the month         - [1,  31]*/d
		, /*int tm_mon  ;// months since January     - [0,  11]*/m - 1
		, /*int tm_year ;// years since 1900                   */y - 1900
		, /*int tm_wday ;// days since Sunday        - [0,   6]*/0
		, /*int tm_yday ;// days since January 1     - [0, 365]*/0
		, /*int tm_isdst;// daylight savings time flag         */0
		}.front());
	}
};
struct Record {
	YMD        date ;//日付
	int        n    ;//その時点でのチャンネル登録数
	bool Read(FILE* fp)
	{
		return date.Read(fp) && fscanf(fp, "%d", &n) == 1;
	}
};
int main()
{
	FILE* const fp = fopen("MonthlySubscriptions.txt", "r");
	if (fp) {
		Record to;
		if (to.Read(fp)) {
			constexpr auto a_day_in_seconds = 60 * 60 * 24;
			for (;;) {
				(void)fscanf(fp, "%*[^\n]%*c");
				Record from;
				if (from.Read(fp)) {
					const auto d = static_cast<int>((to.date.AsEpochTime() - from.date.AsEpochTime()) / a_day_in_seconds);
					const auto a = to.n - from.n;//増えた人数
					printf("%d 日間 %d 人増... %.2f\n", d, a, static_cast<double>(a) / d);
					to = from;
				}
				else
					break;
			}
		}
		fclose(fp);
	}
}
