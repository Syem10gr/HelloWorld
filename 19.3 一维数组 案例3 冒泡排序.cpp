#include <iostream>
using namespace std;

int main(){
	
	// 冒泡排序：(升序 / 把最大的数 如同冒泡似的 冒到最后) 
	// 1.比较相邻的元素，若第一个比第二个大，则交换两个的位置 
	// 2.对每一对相邻元素做同样的工作，找到第一个最大值 
	// 3.循环执行，每次比较次数-1，直至不需要交换 
	int arr[] = {4,2,8,0,5,7,1,3,9}; 
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " " ;
	}
	
	for(int i = 0; i<9-1; i++)  //总排序轮数 = 元素个数 - 1 
	{
		for(int j = 0; j < 9-i-1; j++)  // 内层循环，对比次数 = 元素个数 - 当前轮数 - 1 
	    {
	    	if(arr[j] > arr [j+1])  // 比较，交换 
			{
	    		int temp = arr[j] ;
	    	    arr[j] = arr [j+1] ;
	    	    arr[j+1] = temp ;
			}
    	}
	}
	
	cout << endl ;
	
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " " ;
	}
	
	
	system("pause");
	return 0;
}
