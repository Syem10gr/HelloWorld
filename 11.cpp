#include <iostream>
using namespace std;

int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "请输入三个数字" <<endl;
	cin >> a; 
	cin >> b;
	cin >> c;
	
	if (a>b && a>c)
	{
		cout << "最大的数为" << a <<endl;
	}
	else if(c>a)
	{
		cout << "最大的数为" << c <<endl;
	}
	else
	{
		cout << "最大的数为" << b <<endl;
	}
	
	system("pause");
	return 0;
} 
