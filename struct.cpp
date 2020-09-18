#include<iostream>
using namespace std;
struct student{
	char  name[20];
	int age;
};
int main()
{
struct student s1,s2;
cout<<"enter name :";
cin>>s1.name;
cout<<"enter age :";
cin>>s1.age;
cout<<endl<<"name is:"<<s1.name;
cout<<endl<<"age is:"<<s1.age;
}
