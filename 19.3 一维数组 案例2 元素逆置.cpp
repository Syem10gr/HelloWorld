#include <iostream>
using namespace std;

int main(){
	
	// ����һ�������Ԫ�ص����飬����Ԫ������
	int arr[5] = {1,3,2,5,4};
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl ;
	}
	
	int start = 0 ;     // ��Ԫ���±� 
	int end = sizeof(arr[0]) ;    // ĩԪ���±� 
	
	cout << endl;
	
	while(start < end){
	// ��һ����ʱ���� 
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
