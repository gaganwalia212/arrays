#include <iostream>
using namespace std;
int main() {
    int a[1000];
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
            for(int k=i;k<=j;k++)
            cout<<a[k]<<" ";
            cout<<endl;
        }
    }
}
