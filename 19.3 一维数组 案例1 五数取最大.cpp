#include <iostream>
using namespace std;

int main(){
	
	//����������ÿ��Ԫ�أ����������ֵ 
	int arr[5] = {30,50,60,40,50}; 
	int max = 0 ;
	
	for (int i = 0; i <5; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i]; 
		}
	}
	cout << max << endl;
	
	
	system("pause");
	return 0;
}
