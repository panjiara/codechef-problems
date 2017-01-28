#include<bits/stdc++.h>
using namespace std;
string J;
string S;
int check(int x)
{
    int flag=0;
    for(int i=0;i<x;i++)
    {
        if(J[i]==J[x])
        {
          flag=1;
        }
    }
    if(flag==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int T;
    cin>>T;
    while(T)
    {

     cin>>J>>S;
     int countt=0;
     for(int i=0;i<J.length();i++)
     {
         for(int j=0;j<S.length();j++)
         {
             if(J[i]==S[j]&&countt<S.length())
             {
                 if(check(i)==0)
                 {
                     countt++;

               }
               else
                continue;

             }
         }

     }
     cout<<countt<<endl;




    T--;
    }

 return 0;
}
