#include <iostream>
using namespace std;

int main(){
	//敲桌子：1 ~ 100中有 7 这个数字 或 7的倍数 
	 
	for(int num = 1; num < 101; num++)
	{
		if(num & 7 == 0 || num / 10 == 7 || num % 10 == 7)
		{
			cout << "敲桌子" << endl; 
		} 
		else
		{
		    cout << num << endl; 
	    }
	}
	
	system("pause");
	return 0;
} 
