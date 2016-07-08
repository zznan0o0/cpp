#include<stdlib.h>
#include<iostream>
using namespace std;

int main(void) {
	int a = 111;
	int *b = &a;
	int *&c = b;
	cout << &a << endl;
	cout << b << endl;
	cout << *b << endl;
	cout << c << endl;
	cout << &c << endl;
	cout << *c << endl;
	cout << *&c << endl;
	*c = 10;
	cout << a << endl;
	system("pause");
	return 0;
}