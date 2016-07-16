#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	int *a = new int;
	if(a == NULL){
		cout << "申请内存失败" << endl;
		system("pause");
		return 0;
	}

	*a = 20;
	cout << *a << endl;

	delete a;
	a = NULL;

	int *b = new int[1000];

	if(b == NULL){
		cout << "失败" << endl;
		system("pause");
		return 0;
	}

	b[0] = 1;
	b[1] = 2;
	cout << b[0] << endl;

	delete []b;
	b = NULL;

	system("pause");
	return 0;
} 