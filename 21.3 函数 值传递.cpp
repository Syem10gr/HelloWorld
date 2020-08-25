#include <iostream>
using namespace std;

// 定义一个实现两个数字进行交换的函数 
// 如果函数不需要返回值，声明的时候可以写 void 
void swap(int num1, int num2)
{
	cout << "交换前：num1 = " << num1 << " ，num2 = " << num2 << endl ; 
	
	int temp = num1 ;
	num1 = num2 ;
	num2 = temp ; 
	
	cout << "交换后：num1 = " << num1 << " ，num2 = " << num2 << endl ;
	
	return; // 不需要返回值时，可以不写 return 
}

int main(){
	
	int a = 10 ;
	int b = 20 ;
	
	swap(a,b);
	
	system("pause");
	return 0;
}
