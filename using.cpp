// using.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLength
{
private:
	int foot;
	int inch;
	double meter;
public:
	CLength()
	{
		foot = 0;
		inch = 0;
	}
	void set(int f, int i)
	{
		foot = f;
		inch = i;
	}
	void setvalue()
	{
		if (inch > 11)
		{
			foot = foot + 1 * (inch / 12);
			inch = inch - (inch / 12) * 12;
		}
	}
	void value(int ft, double in)
	{
		foot = foot + ft;
		inch = inch + in;
	}

	void display()
	{
		cout << "foot=" << foot << "  inch=" << inch << endl;
	}
};

int main()
{
	CLength c;
	c.set(8, 8);
	c.value(9, 4);
	c.setvalue();
	c.display();
	return 0;
}