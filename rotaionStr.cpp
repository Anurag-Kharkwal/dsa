#include<bits/stdc++.h>
using namespace std;
bool rotation(string s)
{
	int i,j=0;
	char s1[s.length()];
	for(i=s.length()-1;i>=0;i--)
	{
	    s1[j]=s[i];
	    j++;
    }
    cout<<s1;
    if(s1==s)
    return true;
    else
    return false;
}
int main()
{
	string s;
	cin>>s;
	if(rotation(s))
	cout<<"true";
	else
	cout<<"false";
	
}