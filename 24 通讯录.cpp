#include <iostream>
using namespace std;
#include <string>
#define MAX 1000 //������� 

void showMenu()
{
	cout<<"*****************************"<<endl;
	cout<<"*****   1�������ϵ��   *****"<<endl; 
	cout<<"*****   2����ʾ��ϵ��   *****"<<endl; 
	cout<<"*****   3��ɾ����ϵ��   *****"<<endl; 
	cout<<"*****   4��������ϵ��   *****"<<endl; 
	cout<<"*****   5���޸���ϵ��   *****"<<endl; 
	cout<<"*****   6�������ϵ��   *****"<<endl; 
	cout<<"*****   0���˳�ͨѶ¼   *****"<<endl; 
	cout<<"*****************************"<<endl;
}

struct person
{
	string name;
	int age;
	string phone;
	string addr;
};

struct addressbooks
{
    struct person personarr[MAX]; 
    int size; // ͨѶ¼����Ա�� 
};

// �����ϵ�� 
void addperson(addressbooks * abs)
{
	if(abs->size == abs) // �ж�ͨѶ¼�Ƿ����� 
	{
		cout<<"ͨѶ¼�������޷����"<<endl; 
		return;
	}
	else 
	{
		string name;
		cout<<"����������"<<endl;
		cin>>name; 
		abs->personarr[abs->size].name = name;
		
	} 
} 

int main(){
	
	addressbooks abs;
	abs.size = 0;
	
	
	while(true)
	{
		showMenu(); // �˵����� 
    
        int select = 0; // ����һ���û�ѡ������ı��� 
        cin>>select;
    
    	switch(select) 
        {
            case 1: // �����ϵ��
            addperson(&abs); // �õ�ַ��������ʵ�� 
    		break; 
    		
        	case 2: // ��ʾ��ϵ��
    		break; 
	    	
        	case 3: // ɾ����ϵ��
	    	break;
		
    		case 4: // ������ϵ��
			break;
			
    		case 5: // �޸���ϵ��
			break;
		
    		case 6: // �����ϵ��
			break;
			
    		case 0: // �˳�ͨѶ¼
	 	   system("pause");
	 	   return 0;
			break;
			
			default:
			break;
		}
	}
	
    
}
