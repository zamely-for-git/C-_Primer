#include <iostream>
using namespace std;

#define PRINT_FUNC_NAME show_name(__FUNCTION__);
void show_name(const char* name)
{
	cout << name << endl;
}

// �ǳ���������Ҫ�����ϸ�ƥ�䣬���Ҳ��ܰ󶨵��������߱��ʽ���������ÿ��ԣ�
// �����ʼ���������޷��󶨵���������
// ���ò��Ƕ���û���������õ����á�
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

// ������������ʼ��������Ϊ���ܱ��޸ģ�
// ���������ֵ�����޸ģ�
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