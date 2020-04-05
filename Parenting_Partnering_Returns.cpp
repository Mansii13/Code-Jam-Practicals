#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int TestCase = t;

	char condition []={'C','J'};
	while(t--)
    {
		int n;
		cin>>n;
		vector< pair < int,int > >v1,v2;
		map<pair<int,int>,int>store;
		for(int i=0;i<n;i++)
        {
			int x,y;
			cin>>x>>y;
			v2.push_back({x,y});
			v1.push_back({x,y});
			store[{x,y}] = i;
		}
		sort(v1.begin(),v1.end());
		char arr[n];

		for(int i=0;i<n;i++)
        {
			arr[i]=condition[0];
		}

		arr[store[{v1[0].first,v1[0].second}]]=condition[0];

		int JMax=v1[0].second,CMax=0,flag1=0,flag2=0;

		for(int i=1;i<n;i++)
        {
			if(v1[i].first>=JMax)
			{
				arr[store[{v1[i].first,v1[i].second}]] = condition[0];
				JMax = v1[i].second;
			}
			else if(flag2==0)
			{
				arr[store[{v1[i].first,v1[i].second}]] = condition[1];
				CMax = v1[i].second;
				flag2++;
			}
			else if(v1[i].first>=CMax)
			{
				arr[store[{v1[i].first,v1[i].second}]] = condition[1];
				CMax = v1[i].second;
			}
			else
			{
				flag1++;
				break;
			}
		}

		cout<<"Case #"<<(TestCase-t)<<": ";
		if(flag1!=0)
        {
			cout<<"IMPOSSIBLE"<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
                cout<<arr[i];
			cout<<endl;
		}
	}
	return 0;
}
