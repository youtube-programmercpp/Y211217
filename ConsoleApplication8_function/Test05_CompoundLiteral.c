void f(int* p)
{
	++* p;
}
int main()
{
	f(&(int) { 255 });
}
