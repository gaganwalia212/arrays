#include <iostream>
using namespace std;
//insertion sort using recursion
//O(n^2) 
void insert_in_array(int a[],int p,int r,int key)
{
    int j=r;
    while(j>=p&&a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}

void insert_sort(int a[],int p,int r)
{
    if(p<r)
        insert_sort(a,p,r-1);
    insert_in_array(a,p,r-1,a[r]);

}

int main()
{
    int arr[]={1,2,4,5,2,3,6,4};
    insert_sort(arr,0,7);
    for(auto x:arr)
        cout<<x<<" ";
}
