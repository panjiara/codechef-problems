#include <iostream>
using namespace std;

int main()
{
    string s;
    string p;
    cin>>s;
    cin>>p;
    int flag;
    for(int i=0;i<s.length();i++)
    {
        char c,d;
        c=s[i];
        d=p[i];
        
        if(toupper(c)>toupper(d))
        {
            flag=1;
            break;
        }
        if(toupper(c)==toupper(d))
        {
            flag=0;
        }
        if(toupper(c)<toupper(d))
        {
            flag=-1;
            break;
        }
        
        
    }
    cout<<flag<<"\n";
    
	return 0;
}
