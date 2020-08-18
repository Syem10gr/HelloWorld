#include <iostream>
using namespace std;

int main(){
	
	// 一堆数组名称的用途：
	// 1.可以统计整个数组在内存中的长度；
		int arr[5] = {1,2,3,4,5};
	 
	cout << sizeof(arr) <<endl;
	for(int i=0; i<5; i++)
	{
		cout << sizeof(arr[i]) <<endl;
	} 
	// 2.可以获取数组在内存中的首地址； 
	

	
	
	
	system("pause");
	return 0;
}
