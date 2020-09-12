#include<iostream>
using namespace std;

void Merge(int * a,int p,int q,int r)
{
    int L[100];
    int R[100];
    int n1=q-p+1;
    int n2=r-q;
    int i{0},j{0};

    for(i=0;i<n1;i++)
        L[i]=a[i+p];
    for(j=0;j<n2;j++)
        R[j]=a[j+q+1];

    int k;
    i=0;
    j=0;
    for(k=p;k<=r&&i<n1&&j<n2;k++)
    {
        if(L[i]<R[j])
            a[k]=L[i++];
        else a[k]=R[j++];
    }
    while(i<n1)
        a[k++]=L[i++];
    while(j<n2)
        a[k++]=R[j++];
}

void merge_sort(int a[],int p,int r)
{
    int q=(p+r)/2;
    if(p<r)
    {
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
    }
    Merge(a,p,q,r);
}
int main()
{
    int arr[]={9,2 ,0,2,3,6,2,9,10,0,1,-100};
    merge_sort(arr,0,11);
    for(auto x:arr)
        cout<<x<<" ";
}
