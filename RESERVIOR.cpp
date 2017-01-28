#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0)
	{
	   int N,M;
	   cin>>N>>M;
	   char A[N][M];
	   int flag=0;
	   for(int i=0;i<N;i++)
	   {
	       string c;
	       cin>>c;
	       for(int j=0;j<M;j++)
	       {
	           A[i][j]=c[j];
	       }
	   }
	  for(int i=0;i<N;i++)
	   {
	       
	       for(int j=0;j<M;j++)
	       {
	           if(A[i][j]=='W')
	           {
	                if(A[i+1][j]=='A'||A[i][j+1]=='A'||A[i][j-1]=='A')
	                 {
	                   flag=1;
	                   break;
	                 }
	                if(j==0||j==M-1||i==N-1)
	                 {
	                  flag=1;
	                  break;
	                }
	           }
	           if(A[i][j]=='B')
	           {
	             if(A[i+1][j]=='A')
	               {
	                   flag=1;
	                   break;
	               }
	           }
	               
	               
	       }
	       if(flag==1)
	       {
	           break;
	       }
	   }
	   if(flag==1)
	   {
	       cout<<"no"<<"\n";
	       
	   }
	   else
	   {
	       cout<<"yes"<<"\n";
	   }
	   T--;
	       
	       
	   }
	   
	   return 0;
}
