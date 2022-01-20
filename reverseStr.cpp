#include<bits/stdc++.h>
using namespace std;
string reverse(string s)
{
	int i,j=0;
	char s1[s.length()];
	for(i=s.length()-1;i>=0;i--)
	{
	    s1[j]=s[i];
	    j++;
    }
    return s1;
}
int main()
{
	string s;
	cin>>s;
	string ans=reverse(s);
	cout<<ans;	
}