#include <iostream>
using namespace std;

int main(){
	//�����ӣ�1 ~ 100���� 7 ������� �� 7�ı��� 
	 
	for(int num = 1; num < 101; num++)
	{
		if(num & 7 == 0 || num / 10 == 7 || num % 10 == 7)
		{
			cout << "������" << endl; 
		} 
		else
		{
		    cout << num << endl; 
	    }
	}
	
	system("pause");
	return 0;
} 
