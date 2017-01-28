#include <iostream>
using namespace std;

int main() {
	string s;
	cin>>s;
	string g;
	cin>>g;
	int flag=0;
	if(s.length()<g.length()||s.length()>g.length())
	{
	    cout<<"NO"<<"\n";
	    
	}
	else
	{
	    for(int i=0;i<s.length();i++)
        	{
        	  if(s[i]!=g[s.length()-1-i]) 
        	  {
        	      flag=1;
        	      break;
        	  }
        	    
        	    
	    
        	}
        	if(flag==0)
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
