#include<iostream>

using namespace std;

 class Addition
		{
			int a,b,c;
	
			public:
				int sum(int i,int j);
				int sum(int i,int j,float k);
		
        };

	int Addition::sum(int i,int j)
				{
	              return i+j;
	              
				}
				
	int Addition::sum(int i,int j,float k)
	            {
	            	return i*j*k;
			    }
			    
		int main()
		    {
			  Addition a1;
			  int r1=a1.sum(1,2,5);
			  
			  int r2=a1.sum(4,5,1);
			  
			  cout<<r1<<endl;
			  cout<<r2;
			  
			  return 0;
			}	    
			    
