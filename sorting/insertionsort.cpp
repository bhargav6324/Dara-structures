#include<bits/stdc++.h>
using namespace std;

void insertionsort(int n,int a[])
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1&&a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}

int main()
{
    int i;
    int a[10]={19,8,9,1,7};
    insertionsort(5,a);
    for(i=0;i<5;i++)
        cout<<a[i]<<endl;
}
