#include <iostream>
using namespace std;

int main(){
	
	// 声明一个有五个元素的数组，并将元素逆置
	int arr[5] = {1,3,2,5,4};
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl ;
	}
	
	int start = 0 ;     // 首元素下标 
	int end = sizeof(arr[0]) ;    // 末元素下标 
	
	cout << endl;
	
	while(start < end){
	// 用一个临时变量 
	int temp = arr[start] ;
	arr[start] = arr[end] ;
	arr[end] = temp ;
	start++ ;
	end-- ;	
	}
	
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl ;
	}
	
	system("pause");
	return 0;
}
