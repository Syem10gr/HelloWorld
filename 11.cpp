#include <iostream>
using namespace std;

int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "��������������" <<endl;
	cin >> a; 
	cin >> b;
	cin >> c;
	
	if (a>b && a>c)
	{
		cout << "������Ϊ" << a <<endl;
	}
	else if(c>a)
	{
		cout << "������Ϊ" << c <<endl;
	}
	else
	{
		cout << "������Ϊ" << b <<endl;
	}
	
	system("pause");
	return 0;
} 
