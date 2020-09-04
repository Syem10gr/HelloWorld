#include <iostream>
using namespace std;


// 参数一：数组的首地址，参数二：数组长度 

void BubbleSort(int * arr,int len)
{
    for(int i=0;i<len -1;i++)
    {
    	for(int j = 0;j<len - 1;j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    			int temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
}

void printArray(int * arr,int len)
{
	for(int i = 0;i<len;i++)
	{
		cout<<arr[i]<<endl;
	}
}
    
    int main(){
	
	int arr[10]={4,3,6,9,1,2,8,7,5,10}; 
	
	int len = sizeof(arr) / sizeof(arr[0]); // 数组长度 
	
	BubbleSort(arr,len);
	
	printArray(arr,len);
	
	system("pause");
	return 0;
}
