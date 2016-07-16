#include<iostream>
#include<stdlib.h>
using namespace std;

int fun(int &a, int &b){
	cout << a << endl;
	cout << &a << endl;
	int c = a;
	a = b;
	b = c;
	return 0;
}

int main(){
	int a = 1, b = 2;
	fun(a, b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}