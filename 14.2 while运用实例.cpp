#include <iostream>
using namespace std;
#include <cstdlib>  //C++��ʹ��randҪ��� 

//srand(time(NULL)); /*���ݵ�ǰʱ�����á���������ӡ�*/

int main (){
	
	int a = rand() % 100 + 1 ; //���� 0 + 1 ~ 99 + 1 �������
//	cout<< a << endl;
	
	while (1) // "1" һֱѭ�� 
	{
	    int co = 0 ;
        cin >> co ;
	
    	if(co > a){
	    	cout << "���µ����ִ���" <<endl; 
    	}
    	else if(co < a)
    	{
    		cout << "���µ�����С��" <<endl; 
    	}
    	else
	    {
    		cout << "���¶���" << endl;
    		break;//�˳���ǰѭ�� 
    	}
	}
	
	system("pause");
	return 0;
}
