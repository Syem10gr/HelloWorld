#include <iostream>
using namespace std;

int main(){
	
	//数组定义的三种方式： 
	// 1.数据类型  数组名[数组长度]； 
	int arr[5];
	arr[1] = 10 ;
	arr[2] = 20 ;
	arr[3] = 30 ;
	arr[4] = 40 ;
	arr[5] = 50 ;
	// 2.数据类型  数组名[数组长度] = {值1，值2，...}； 
	int arr2[5] = {10,20,30,40,50}; //若未填充满则会以 0 填充数据 
	cout << arr2[0] <<endl; 
	cout << arr2[1] <<endl; 
	cout << arr2[2] <<endl; 
	cout << arr2[3] <<endl; 
	cout << arr2[4] <<endl; 
	// 可利用循环输出数组中元素
	for (int i = 0; i<5; i++) 
	{
		cout << arr2[i] <<endl;
	}
	// 3.数据类型  数组名 [ ] = {值1，值2，...}; 
	int arr3[] = {10,20,30,40,50,60,70,80,90}; 
	for (int i = 0; i<9; i++) 
	{
		cout << arr3[i] <<endl;
	}
	//定于数组时必须有初始长度，如： int arr4[]; 即为错误代码 
	
	// 数组：放在一块联系的空间中，每个元素为相同数据类型
	// array数组从 0 开始，如：arr[0]，arr[1]，... 
	//   []内数字称为下标，通过下标访问数组中的元素 
	
	
	
	
		
	system("pause");
	return 0;
}
