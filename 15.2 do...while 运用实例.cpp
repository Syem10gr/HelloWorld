#include <iostream>
using namespace std;

int main(){
	//ˮ�ɻ�����һ����λ������ÿ��λ�ϵ�����������֮�͵��������� 
	//���磺  1^3 + 5^3 + 3^3 = 153 
	
	int num = 100 ;
	
	do
	{
		int a = 0; //��λ 
		int b = 0; //ʮλ 
		int c = 0; //��λ 
		a = num / 100 ;   //��λ 
		b = num/10 % 10 ; //ʮλ 
		c = num % 10 ;    //��λ 
		
		if(a*a*a + b*b*b + c*c*c == num) // "="Ϊ��ֵ��"=="Ϊ�Ƚ� 
		{
			cout << num << endl;	
		}
		num++;
	}
	while(num < 1000); 
	
	
	
	system("pause");
	return 0;
}
