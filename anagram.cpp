#include<bits/stdc++.h>
using namespace std;

int anagram(string s1,string s2)
{
	int i,count[256]={0},a=0;
	for(i=0;i<s1.length();i++)
	{
	count[s1[i]]++;
    }
    for(i=0;i<s2.length();i++)
    {
    count[s2[i]]--;
    }
    for(i=0;i<s1.length();i++)
    {
    	if(count[i]==0)
    	a++;
	}
	if(a==s1.length())
	cout<<"yes";
	else
	cout<<"no";
}
int main()
{
string s1="abbcd";
string s2="cbadb";
anagram(s1,s2);
}