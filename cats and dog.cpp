#include <iostream>
using namespace std;
//enjoy coding :)
int main() {
	int T;
	cin>>T;
	while(T>0)
	{
	    int flag=0;
	  long long int C,D,L;
	   cin>>C>>D>>L;
	   if(D*4+C*4>=L&&D*4<=L&&L%4==0)
	   {
	       L=L-D*4;
	       if(C*4>=L)
	       {
	        if(C-2*D<=L/4)
	        {
	            flag=0;
	            
	        }
	        else
	        {
	            flag=1;
	            //cout<<"2";
	            
	        }
	       }
	       else
	       {
	           flag=1;
	          // cout<<"3";
	           
	       }
	       
	   }
	   else
	   {
	      flag=1;
	      //cout<<"1";
	      
	   }
	   
	  if(flag==0)
	  {
	      cout<<"yes"<<"\n";
	  }
	  else
	  {
	      cout<<"no"<<"\n";
	  }
	    
	    
	    
	    
	T--;
	    
	}
	return 0;
} 