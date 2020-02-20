/*use of string*/

#include<iostream>
#include<string>//change

using namespace std;


    class student
	{
	
	int roll;
	float marks;
	char grade;
	string name;//change
	
	public:
		void get();
		void show();		
	};
	
	void student::get()
	{
		cout<<"Enter the "<<"roll marks grade name"<<endl;
		cin>>roll>>marks>>grade;
		getline(cin,name);
	}
	
	void student::show()
	{
		cout<<roll<<endl<<marks<<endl<<grade<<endl<<name<<endl;
	}
	
	int main()
	{
		student s1;
		s1.get();
		s1.show();
		
		return 0;
		
	}
	
	
