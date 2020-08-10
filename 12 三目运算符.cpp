#include <iostream>
using namespace std;

int main(){
	
	int a = 10;
	int b = 20;
	int c = 0;
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	cout << "c = " << c <<endl;
	
	cout << endl;
	
	//三目运算符  ( ) ? ( ) : ( )  ，返回的是变量 
	c = (a > b ? a : b);
	cout << "c = " << c <<endl;
	
	(a > b ? a : b) = 100 ;
	cout << "a = " << a <<endl;
	cout << "b = " << b <<endl;
	
	system("pause");
	return 0;
} 
