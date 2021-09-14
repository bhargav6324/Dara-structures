#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    int num[n];
    for(i=0;i<n;i++)
        cin>>num[i];

        for(i=1;i<n;i++)
    {
       int  temp=num[i];
        j=i-1;
        while((temp<num[j])&&(j>=0))
        {
            num[j+1]=num[j];
            j=j-1;
        }
        num[j+1]=temp;
    }
    for(i=0;i<n;i++)
        cout<<num[i]<<endl;
        cout<<num[n-2];
    return 0;

}
