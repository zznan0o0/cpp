### stdlib.h

```c++
#include<stdlib.h>
#include<stdlib.h>
//任意键以继续
system("pause");
```

### iostream
```c++
#include<iostream>
//声明调用命名空间
using namespace std;
cin >> 输入流;
cout << 输出流 << endl;
//声明调用命名空间
std :: cin >> 输入流;
std :: cout << 输出流 << endl;
```

### 基本数据类型引用

```c++
#include<iostream>
using namespace std;

int main(void){
	int a = 0;
	//b引用a,被引用对象必须存在
	int &b = a; 
	//当引用变量改变时被引用变量也会改变
	b = 10;
	cout << a << endl;
	return 0;
}
```
### 结构体类型

```c++
typedef struck{
	int x;
	int y;
}Coor;
```
### 结构体类型引用

```c++
#include <iostream>
using namespace std;
int main(){
	Coor c1;
	Coor &c = c1;
	c.x = 10;
	c.y = 20;
	cout << c1.x << endl;
	return 0;
}
```
### 指针引用
```c++
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(void) {
	int a = 111;
	int *b = &a;
	int *&c = b;

	//0x28ff44
	cout << &a << endl;
	//0x28ff44
	cout << b << endl;
	//111
	cout << *b << endl;
	//0x28ff44
	cout << c << endl;
	//0x28ff40
	cout << &c << endl;
	//0x28ff44
	cout << *&c << endl;
	*c = 10;
	cout << a << endl;
	system("pause");
	return 0;
}
```
### c 交换函数

```c
void fun(int *a, int *b){
	int c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

int function main(){
	int x = 10, y = 20;
	fun(&x, &y);
	return 0;
}
```

### 引用做函数参数 c++
```c++
void fun(int &a, int &b){
	int c = 0;
	c = a;
	a = b;
	b = c;
}

int main(){
	int x = 10, y = 20;
	fun(x, y);
	return 0;
}
```
### 内存管理
```c++
//c
void *malloc(size_t size);
void free(void *memblock);
//c++
new;
delete;

int *p = new int[1000];

if(NULL == p){
	//失败
}

int *p = new int;
if(NULL == p){
	//失败
}
delete p;
//设置null防止重复回收出现异常
p = NULL;

int *p = new int[1000];
if(NULL == p){
	//
}

delete []p;
p = NULL;
```
```c++
```