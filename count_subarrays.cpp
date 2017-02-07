#include<bits/stdc++.h>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T)
 {
     int N;
     cin>>N;
     int A[N];
     for(int i=0;i<N;i++)
        cin>>A[i];
        int result=0;
     for(int L=1;L<=N;L++)
     {
         for(int i=0;i<N-L+1;i++)
         {
          int j=i+L-1;
            int flag=0;
         for(int k=i;k<j;k++)
         {
             if(A[k]>A[k+1])
             {
                 flag=1;
                 break;
             }
         }
         if(flag==0)
            result++;

         }


     }




     cout<<result<<endl;

  T--;
 }





    return 0;
}
