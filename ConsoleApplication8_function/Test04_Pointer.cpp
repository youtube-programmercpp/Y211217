int add(int a, int b)
{
	return a + b;
}
int add_p(const int* a, const int* b)
{
	return *a + *b;
}

#include <stdio.h>
#include <array>
int main()
{
	printf("%d\n", add(1, 2));
	//int a = 1;
	//int b = 2;
	//printf("%d\n", add_p(&a, &b));
	printf("%d\n"
		, add_p
		( &std::array<int, 1> { 1 }.front()
		, &std::array<int, 1> { 2 }.front()
		));
}
