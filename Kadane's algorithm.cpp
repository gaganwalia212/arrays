#include <iostream>
#include<climits>
using namespace std;
int main() {
    int a[1000];
    
    
    
    int n;
    cin>>n;
   int ms=0;
    int cs=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
          
        }
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        cs=0;
        ms=max(ms,cs);
    }
    cout<<"Maximum sum= "<<ms<<endl;
    
}
