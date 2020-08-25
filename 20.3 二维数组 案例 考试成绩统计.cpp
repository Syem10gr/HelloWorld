#include <iostream>
using namespace std;

int main(){
	
	int arr[3][3] = {
	{100,100,100},
	{90,50,100},
	{60,70,80}
	} ;
	
	for(int i = 0; i<3; i++) 
	{
		for(int j = 0; j<3; j++) 
	    {
		    cout << arr[i][j] << " " ; 
    	} 
    	cout << endl;
	}
	
	
	
	
	system("pause");
	return 0;
}
