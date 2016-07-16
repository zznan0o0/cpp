#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int a = 0;
	int &b = a;
	cout << b << endl;

	system("pause");
	return 0;
}