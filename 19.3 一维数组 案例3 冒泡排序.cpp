#include <iostream>
using namespace std;

int main(){
	
	// ð������(���� / �������� ��ͬð���Ƶ� ð�����) 
	// 1.�Ƚ����ڵ�Ԫ�أ�����һ���ȵڶ������򽻻�������λ�� 
	// 2.��ÿһ������Ԫ����ͬ���Ĺ������ҵ���һ�����ֵ 
	// 3.ѭ��ִ�У�ÿ�αȽϴ���-1��ֱ������Ҫ���� 
	int arr[] = {4,2,8,0,5,7,1,3,9}; 
	for(int i = 0; i < 9; i++)
	{
		cout << arr[i] << " " ;
	}
	
	for(int i = 0; i<9-1; i++)  //���������� = Ԫ�ظ��� - 1 
	{
		for(int j = 0; j < 9-i-1; j++)  // �ڲ�ѭ�����Աȴ��� = Ԫ�ظ��� - ��ǰ���� - 1 
	    {
	    	if(arr[j] > arr [j+1])  // �Ƚϣ����� 
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
