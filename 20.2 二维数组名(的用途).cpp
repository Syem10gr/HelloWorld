#include <iostream>
using namespace std;

int main(){
	
	// 一堆数组名称的用途：
	// 1.可以统计整个数组在内存中的长度；
    int arr[2][3]={
		{1,2,3}	,
		{4,5,6}
	} ;
	cout << sizeof(arr) << endl ;  // 整个数组 占用字节 
	cout << sizeof(arr[0]) << endl ;  // 第一行 占用字节 
	cout << sizeof(arr[0][0]) << endl ;  // 第一行第一列 占用字节
	cout << sizeof(arr)/sizeof(arr[0]) << endl ;  // 行数 
	cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl ;  // 列数 
	
	// 2.可以获取数组在内存中的首地址； 
	cout << arr << endl; // 16进制
	cout << &arr[1] << endl; // 数组内 第二行元素 的首地址 16进制 
	cout << &arr[1][2] << endl; // 数组内 第二行第三列元素 的首地址 16进制
	
	system("pause");
	return 0;
}
