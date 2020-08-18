#include <iostream>
using namespace std;

int main(){
	
	cout << "goto语句直接跳转到标记的位置" << endl; 
	
	cout << "1.XXXX" << endl; 
	cout << "2.XXXX" << endl;
	goto FLAG;
	cout << "3.XXXX" << endl;
	cout << "4.XXXX" << endl;
	FLAG:    //  这  里  是  冒  号 
	cout << "5.XXXX" << endl;
	cout << "6.XXXX" << endl;
	
	//听说尽量不要用？ 
	
	system("pause");
	return 0;
}
