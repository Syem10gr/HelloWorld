#include <iostream>
using namespace std;

// 函数的声明:
int max(int a,int b) ; 

// 函数的定义:
int max(int a, int b)
{
    return a > b ? a : b ;
} 

// 函数可以有多次声明，但只能有一次定义 
// 若函数的定义在后面，则需要在前面声明有这么一个函数 

int main(){
	
	int a = 10 ;
	int b = 20 ;
	
	cout << max(a,b) << endl ;
	
	system("pause");
	return 0;
}
