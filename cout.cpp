#include<iostream>
#include<stdlib.h>
using namespace std;

namespace A {
	int x = 0;
	void fun() {
		cout << "A" << endl;
	}
}

namespace B{
	int x = 1;
	void fun() {
		cout << "B" << endl;
	}
}
int main(void)
{
	cout << A::x << endl;
	B::fun();
	cout << "输入数字" << endl;
	int x = 0;
	cin >> x;
	cout << "输出数字:" << endl;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	cout << "输入布尔值(0,1)" << endl;
	bool y = false;
	cin >> y;
	cout << "布尔值:" << endl;
	cout << boolalpha << y << endl;

	system("pause");
	return 0;
}
