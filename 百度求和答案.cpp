using namespace std;

#include "iostream"

int main()

{

    int sum[3]={0,0,0};

    cout<<"��ͣ�������1+...+N:"; 

    cin>>sum[0];

    for(;sum[1]<=sum[0];sum[1]++)

    sum[2]+=sum[1];

    cout<<"��ͣ�1+...+"<<sum[1]-1<<"���:"<<sum[2]<<endl;

    return 0;

}
