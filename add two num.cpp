#include<iostream>
#include<stdio.h>
#include<conio.h>
class EMPLOYEE
{
	public:
		
		int Emp_id;
		char name[20];
      void getdata()
      {
         cout<<"Enter name: ";
         gets(name);
         cout<<"Enter Employee Number: ";
         cin>>Emp_id;
      }
      void putdata()
      {
         cout<<"Name: "<<name<<"\t";
         cout<<"Emp. No: "<<Emp_id<<"\t";
         cout<<"Basic Salary: "<<basic;
      }
      void main()
{
   clrscr();
   MANAGER m;
   cout<<"Manager 1\n";
   m.getdata();
   cout<<"\n\t\tManager 2 Details\n";
   m.putdata();
   getch();
}
}
