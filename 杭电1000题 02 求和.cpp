#include <iostream>
using namespace std;

int main(){
	
	int a = 0 ;
	int i = 0 ;
	while(cin >> a)
	{
		cout << a <<endl;
		cout << endl;
		while(cin >> i) 
	        {
	    	int A = 0;
		    for(; a <= i; a++)
		    {
	    	A = A + a;
		    }
		    cout << A <<endl;
	    }
    }
    
	system("pause");
	return 0;
}
