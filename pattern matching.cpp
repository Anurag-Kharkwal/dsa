#include<bits/stdc++.h>
using namespace std;
int find(string str,string s)
{
	for(int i=0;i<=str.length()-s.length();i++)
	{
		int count = 0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]!=str[i+j])
			continue;
			else
			count++;
			
		}
		if(count==s.length())
		return 1;		
	}
	return 0;
}
int main()
{
	string str,s;
	cin>>str>>s;
	if(find(str,s))
	cout<<"yes";
	else
	cout<<"no";	
}