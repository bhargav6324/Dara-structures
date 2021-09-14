#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int t;//test cases
	cin>>t;
	int ans=0;

	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>x)
	       ans++;
	   }
	   }

	cout<<ans;
	return 0;
}
