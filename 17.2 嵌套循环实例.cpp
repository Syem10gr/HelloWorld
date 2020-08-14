#include <iostream>
using namespace std;

int main(){
	
	for(int a = 1; a < 10; a++)
	{
		//cout << a << endl;
		for(int b = 1; b <= a; b++)
		{
			cout << b << " * " << a << " = " << b*a << "  ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
