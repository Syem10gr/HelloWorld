#include <iostream>
using namespace std;

int main(){
	//水仙花数：一个三位数，他每个位上的数的三次幂之和等于它本身 
	//例如：  1^3 + 5^3 + 3^3 = 153 
	
	int num = 100 ;
	
	do
	{
		int a = 0; //百位 
		int b = 0; //十位 
		int c = 0; //个位 
		a = num / 100 ;   //百位 
		b = num/10 % 10 ; //十位 
		c = num % 10 ;    //个位 
		
		if(a*a*a + b*b*b + c*c*c == num) // "="为赋值，"=="为比较 
		{
			cout << num << endl;	
		}
		num++;
	}
	while(num < 1000); 
	
	
	
	system("pause");
	return 0;
}
