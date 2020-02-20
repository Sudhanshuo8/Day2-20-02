#include<iostream>

using namespace std;

 class Addition
		{
			int a,b,c;
	
			public:
				void sum(int i,int j);
				void sum(int i,int j,int k);
		
        };

	void Addition::sum(int i,int j)
				{
	              cout<<i+j<<endl;
	              
				}
				
	void Addition::sum(int i,int j,int k)
	            {
	            	cout<<i+j+k;
			    }
			    
		int main()
		    {
			  Addition a1;
			  a1.sum(8,9);
			  
			  a1.sum(5,7);
			  
			 // cout<<"sum is"<<r1<<endl;
			  //cout<<"sum is"<<r2<<endl;
			  
			  return 0;
			}	    
			    
