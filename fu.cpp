#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <stdio.h>

using namespace std;

class Date
{
public:
	Date(int year, int month, int day)//���캯��
		:_year(year),
		_month(month),
		_day(day)
	{}
	Date(const Date& d)//��������
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

class A
{
public:
	A(int a)
		:_a(a)
	{}
private:
	int _a;
	static int N;
};

//����������ȫ�ֵģ�������������������
int A::N = 0;

int main()
{
	Date d1(2002,11,10);
	Date d2(d1);
	d1.print();
	d2.print();
	return 0;
}
