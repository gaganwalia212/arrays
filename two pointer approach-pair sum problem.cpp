#include <iostream>
using namespace std;
//finding pair of a sum with two pointer approach
//we need a sorted array for implementation of this program
int main() {
    int a[1000];
    int n;
    cin>>n;
    int c{0};
    for(int i=0;i<n;i++)
    cin>>a[i];
    int no;
    cin>>no;
    int i=0;
    int j=n-1;
    int flag=0;
    while(i<j)
    {
      int sum=a[i]+a[j];
       if(sum<no)
       i++;
       else if (sum>no)
       j--;
       else 
       {
           cout<<a[i]<<" , "<<a[j]<<endl;
           j--;
           i++;
           flag=1;
       } 
    }
    if(!flag)cout<<"No pair found\n";

}
