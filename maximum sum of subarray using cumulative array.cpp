#include <iostream>
#include<climits>
using namespace std;
int main() {
    int a[1000];
    int cum_sum[1000];
    int c=0;
    int sum,max_sum{INT_MIN},left,right;
    int n;
    cin>>n;
    cin>>a[0];
    cum_sum[0]=a[0];
    for(int i=1;i<n;i++)
        {
            cin>>a[i];
            cum_sum[i]=cum_sum[i-1]+a[i];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<++c<<".) ";
            if(i==0)
            sum=cum_sum[j];
            else
            sum=cum_sum[j]-cum_sum[i-1];
            cout<<"   "<<sum;
            cout<<endl;
            if(sum>max_sum)
            {
                max_sum=sum;
                left=i;
                right=j;
            }
        }
    }
    cout<<"\nMaximum sum= "<<max_sum<<endl;
    for(int i=left;i<=right;i++)
        cout<<a[i]<<" ";
}
