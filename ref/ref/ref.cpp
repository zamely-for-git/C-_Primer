#include <iostream>
using namespace std;

#define PRINT_FUNC_NAME show_name(__FUNCTION__);
void show_name(const char* name)
{
	cout << name << endl;
}

// 非常量引用需要类型严格匹配，并且不能绑定到常量或者表达式（常量引用可以）
// 必须初始化；后面无法绑定到其他对象
// 引用不是对象，没法定义引用的引用。
void test2_15()
{
	PRINT_FUNC_NAME
	int ival = 1.01;
	//int &rval1 = 1.01; // error
	int &rval2 = ival;
	//int &rval3; .// error
	//int &rval4 = 1; // error
}

void test2_16()
{
	PRINT_FUNC_NAME
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.1415;
	r2 = r1;
	i = r2;
	r1 = d;

	cout << i << r1 << d << r2 << endl;
}

void test2_17()
{
	PRINT_FUNC_NAME
	int i, &ri = i;
	i = 5; ri = 10;
	cout << i << " " << ri << endl;
}

// 常量对象必须初始化；（因为不能被修改）
// 常量对象的值不能修改；
void test2_26()
{
	PRINT_FUNC_NAME
	//const int buf;
	int cnt = 0;
	const int sz = cnt;
	++cnt;
	//++sz;
	cout << cnt << " " << sz << endl;
}

int main()
{
	test2_15();
	test2_16();
	test2_17();
	test2_26();

	return 0;
}