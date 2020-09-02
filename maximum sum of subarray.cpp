#include <iostream>
#include<climits>
using namespace std;
int main() {
    int a[1000];
    int sum,max_sum{INT_MIN},left,right;
    int n;
    cin>>n;
    int c{0};
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<++c<<".) ";
            sum=0;
            for(int k=i;k<=j;k++)
            {cout<<a[k]<<" ";
            sum=sum+a[k];}
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
