#include<iostream>
using namespace std;
struct student{
	char name[20];
	int age;
	void get()
	{
		cout<<endl<<"enter name =";
		cin>>name;
		cout<<endl<<"enter age";
		cin>>age;
		
	}
	void display()
	{
		cout<<endl<<name;
		cout<<endl<<age;
	}
};
int main()
{
struct student s1,s2;
s1.get();
s1.display();
s2.get();
s2.display();
return 0;
}
