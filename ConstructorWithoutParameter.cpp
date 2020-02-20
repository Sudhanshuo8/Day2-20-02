#include<iostream>

using namespace std;

class Cons
{
	int x;
	
	public:
		 Cons();
	void Show();
};
	
	Cons::Cons()

	{	
	  cout<<"Enter the integar"<<endl;
	  cin>>x;
	}
	
	void Cons::Show()
	{
		cout<<x;
	}
	
int main()
{
	Cons s1;
	s1.Show();
	
	
}
