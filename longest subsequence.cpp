#include<bits/stdc++.h>
using namespace std;
int maxx(int x,int y)
{
    if(x>=y)
     return x;
     else
        return y;

}
int main()
{
  cout<<"Enter the two string"<<endl;
  string C,D;
  cin>>C>>D;
int A[C.length()+1][D.length()+1]={};
for(int i=1;i<=C.length();i++)
{
    for(int j=1;j<=D.length();j++)
    {
        if(C[i-1]==D[j-1])
        {
          A[i][j]=1+A[i-1][j-1];
          cout<<A[i][j]<<"  ";
        }
        else
        {
            int x=A[i][j-1],y=A[i-1][j];
         A[i][j]=maxx(x,y);
         cout<<A[i][j]<<"  ";
        }
    }
    cout<<endl;
}
cout<<A[C.length()][D.length()] <<endl;
return 0;
}
