#include<bits/stdc++.h>
using namespace std;

selectionsort(int a[],int n)
{
    int i=0,j=0,k;
    for(i=0;i<n;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        swap(a[i],a[k]);
    }
}

int main()
{
    int i,n=4;
    int a[]={7,4,2,9};
    selectionsort(a,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
