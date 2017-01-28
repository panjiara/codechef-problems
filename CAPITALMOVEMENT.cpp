#include <iostream>
using namespace std;
//happy coding:)

int main() {
	int T;
	cin>>T;
	while(T>0)
	{
	   int N;
	   cin>>N;
	  long long int A[N];
	  int CC[N-1][2];
	   for(int i=0;i<N;i++)
	        cin>>A[i];
	   for(int f=0;f<N-1;f++)
	        {
	         cin>>CC[f][0]>>CC[f][1];   
	        }
	   for(int i=0;i<N;i++)
	   {
	       long long int B[N];
	            for(int j=0;j<N;j++)
	                 B[j]=A[j];
	           for(int x=0;x<N-1;x++)
	           {
	               if(CC[x][0]==i+1)
	               {
	                   B[(CC[x][1]-1)]=0;
	               }
	               if(CC[x][1]==i+1)
	               {
	                   B[(CC[x][0]-1)]=0;
	               }
	           }
	           B[i]=0;
	           long long int max=0;
	           int index=0;
	           int v;
	           for( v=0;v<N;v++)
	           {
	               if(B[v]>=max)
	               {
	                   max=B[v];
	                   index=v;
	               }
	           }
	           cout<<index+1<<" ";
	       }
	       cout<<"\n";
	     T--;
	    
	}
	return 0;
}
