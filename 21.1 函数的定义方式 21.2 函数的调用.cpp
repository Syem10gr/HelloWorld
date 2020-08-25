#include <iostream>
using namespace std;
	
	// 函数的定义：
	// 返回值类型  函数名 （参数列表） 
	// {
    //     函数体语句
	//     return表达式 
	// }
	
	int add(int num1,int num2) 
	{
		int sum = num1 + num2 ;
		return sum; 
	}
	
	int main(){
	
	int a = add(1,2);
	int b = add(3,4);
	cout << a << endl ;
	cout << b << endl ;
	
	system("pause");
	return 0;
}
	
