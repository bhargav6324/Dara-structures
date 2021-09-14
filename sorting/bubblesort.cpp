#include<bits/stdc++.h>

using namespace std;

bubblesort(int a[],int n)
{
    int flag,i,j;
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag=0)
            break;
    }
}

int main()
{
    int n=8,i;
    int a[]={3,6,1,54,9,11,2,4};
    bubblesort(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<"  " ;
}
