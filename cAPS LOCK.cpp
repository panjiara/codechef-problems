#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if((int)s[0]<97&&(int)s[1]<97)
    {
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            cout<<(char)tolower(c);
        }
        cout<<"\n";
        
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            {
                char c;
                c=s[i];
                cout<<(char)toupper(c);
            }
            else
            {
                char c;
                c=s[i];
                cout<<(char)tolower(c);
                
            }
        }
        cout<<"\n";
    }
    
	return 0;
}
