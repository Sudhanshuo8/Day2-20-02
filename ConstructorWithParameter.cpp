
#include<iostream>

using namespace std;

	class Demo
	{
		int a;
		
	  public:	
		  void show();
		  Demo(int i);
		
	};
	
		Demo::Demo(int i)
		{   
		    a=i;
		}
		
		void Demo::show()
		{
			cout<<a;
		}
		
	int main()
	{
		
	  Demo obj1(3);
	  obj1.show();
	  
	  return 0;	
	}	
