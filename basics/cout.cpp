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
	cout << "��������" << endl;
	int x = 0;
	cin >> x;
	cout << "�������:" << endl;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	cout << "���벼��ֵ(0,1)" << endl;
	bool y = false;
	cin >> y;
	cout << "����ֵ:" << endl;
	cout << boolalpha << y << endl;

	system("pause");
	return 0;
}
