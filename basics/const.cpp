#include<stdio.h>
#include<iostream>

using namespace std;

inline void fun(int a = 0, int b = 1, int c = 2);
inline void fun(double a, double b);

void fun(int a, int b, int c){
	cout << a << "," << b << "," << c << endl;
}
void fun(double a, double b){
	cout << a << "," << b << endl;
}

int main(){
	fun(0.01, 0.05);
	return 0;
}
