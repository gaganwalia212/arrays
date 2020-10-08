#include<iostream>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>e1,pair<int,int>e2)
{
    //sort according to the ending time
    if(e1.second<e2.second)
        return true;
    //if ending times are same then sort according to the starting time
    else if(e1.second==e2.second)
        return e1.first<e2.first;
        else return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        //array of pair
        //first-starting point
        //second-ending point
        pair<int,int>* event=new pair<int,int>[n];
        for(int i=0;i<n;i++)
        cin>>event[i].first>>event[i].second;
         //sorting the events according to their ending times
       sort(event,event+n,compare);
        int count=1;//first event is always counter..since it is the first one to be finished
        int index=0;//lastly selected event
        for(int i=1;i<n;i++)
        {
            //if enevt starting point>=ending point of previously selected event
            if(event[i].first>=event[index].second)
            {
                index=i;//select this event now
                count++;
            }
        }
        
        cout<<count<<endl;
        delete[]event;

	}
	return 0;
}
