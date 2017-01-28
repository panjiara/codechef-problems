#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	string g="hello";
	int checker=-1;
	int count=0;
	if(s.length()<g.length())
	{
	    cout<<"NO"<<"\n";
	    
	}
	else
	{
	    for(int i=0;i<g.length();i++)
        	{
        	    
        	    for(int j=0;j<s.length();j++)
        	    {
        	        if(g[i]==s[j]&&j>checker)
        	        {
        	          checker=j;
        	          count++;
        	          break;
        	        }
        	    }
        	    
	    
        	}
        	if(count==5)
        	{
        	    cout<<"YES"<<"\n";
        	}
        	else
        	{
        	    cout<<"NO"<<"\n";
        	}
	    
	}
	
	return 0;
}
