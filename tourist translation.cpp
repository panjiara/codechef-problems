#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	string M;
	cin>>M;
	while(T>0)
	{
	   string AL="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	   string al="abcdefghijklmnopqrstuvwxyz";
	   string S;
	   cin>>S;
	   for(int i=0;i<=S.length();i++)
	   {
	       int x=(int)S[i];
	       for(int j=0;j<=M.length();j++)
	       {
	           if(S[i]=='_')
	           {
	               cout<<" ";
	               break;
	           }
	           if(x<97&&x>=65)
	           {
	               if(S[i]==AL[j])
	               {
	                 char t=M[j]-32;
	                 cout<<t;
	                 break;
	               }

	           }
	           if(x>=97)
	           {
	               if(S[i]==al[j])
	               {
	                   cout<<M[j];
	                   break;

	               }
	           }
	           if(x<65)
	           {
	               cout<<S[i];
	               break;
	           }
	       }
	   }
	   cout<<endl;





	T--;

	}
	return 0;
}
