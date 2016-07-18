#include<stdlib.h>
#include<iostream>

using namespace std;

class DOG{
public:
	string name;
	int year;
};

int main(){
	DOG *a = new DOG[2];
	a[0].name = "a1";
	cout << a[0].name << endl;
	return 0;
}