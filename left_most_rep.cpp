#include<bits/stdc++.h>
using namespace std;
int leftmost(string s)
{
	int i,count[256]={0};
	for(i=0;i<s.length();i++)
	count[s[i]]++;
	for(i=0;i<s.length();i++)
	{
	if(count[s[i]]==1)
	return i;
    }
    return -1;
}
int main()
{
	string s="graphic grad";
	cout<<leftmost(s);
}
