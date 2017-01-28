#include <iostream>
using namespace ::std;
void dis(int x);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int z;
   cin>>z;
   int array[200];
   int count=0;
   int copy=z;
   if(z==0)
   {
       cout<<"1"<<"\n";
   }
   else
    {
        while(copy!=0)
   {
    array[count]=copy%10;
    copy=copy/10;
    count++;


   }
   for(int i=z-1;i>=1;i--)
   {
       int carry=0;
       for(int j=0;j<count;j++)
       {
           int l;
           l=array[j]*i+carry;
           carry=(l/10);
           array[j]=l%10;
           int f=1;
           if(j==count-1&&carry>0)
           {

               while(carry>0)
               {
                   array[j+f]=carry%10;
                   carry=carry/10;
                   f++;
                   count++;
               }
               break;
           }
        }

   }
   for(int i=count-1;i>=0;i--)

    {

        cout<<array[i];
    }
cout<<"\n";

    }

    }



    return 0;
}

