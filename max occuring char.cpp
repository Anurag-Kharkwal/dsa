#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char res;
	int a,max=0, i,count[256]={0};
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		count[s[i]]++;
		if(count[s[i]]>max)
		{
		max=count[s[i]];
		res=s[i];

	   }
}
cout<<res;
}