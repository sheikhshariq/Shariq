//my_id bc180203775
//Dear Sir! please check becarefull because thats my own hardwork thankyou!


#include<iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;
void myMenu();
void Display_Books();
void Add_Book();
void Book_Author();
struct book
{
int id;
char title[30];
char author[30];
int price;
};
const int noofBooks = 5;
int arrayIndex = 0;
book books[noofBooks];
main()
{
myMenu();
}
void myMenu()
{
char ch;
do
{
int a;
cout<<".....*****Library Book Records System*****....."<<endl;
cout<<" Press 1 To Enter A Book Record."<<endl;
cout<<" Press 2 To Display All Records Of Books Available In Library."<<endl;
cout<<" Press 3 To Search Books By Author Name"<<endl;
cout<<" Press 4 To Count Total Books In Library"<<endl;
cout<<" Press 5 To Exit From The System "<<endl;
cout<<" Please Enter The Choice"<<endl;
cin>>a;
switch(a)
{
case 1:
Add_Book();
break;
case 2:
Display_Books();
break;
case 3:
Book_Author();
break;
case 4:
cout <<" Total Number Of Books In Library Are :"<<arrayIndex<<endl;
break;
case 5:
exit(0);
break;
default :
cout <<" An Invalid Choice!\n";
}
cout << " Do You Want To Continue? Please Press y or Y."<<endl;
cin>>ch;
}while(ch=='Y'||ch=='y');
}
void Add_Book()
{

char ch;
if(arrayIndex<noofBooks)
{
cout<<" Enter The Details Of Book****"<<endl;
cout<<" Enter The Book Id ";
cin>>books[arrayIndex].id;
cout<<" Enter The Book Title:";
cin>>books[arrayIndex].title;
cout<<" Enter The Name Of Author:";
cin>>books[arrayIndex].author;
cout<<" Enter The Cost Of Book:";
cin>> books[arrayIndex].price;
arrayIndex++;
}else{
cout<<" Do You Want To Continue? Please Press y or Y."<<endl;
cin>>ch;
if(ch=='Y'||ch=='y')
{
myMenu();
}
}
}
void Display_Books()

{
for(int i=0;i<arrayIndex; i++)
{
cout <<endl;
cout<<"Book Id:"<<books[i].id<<endl;
cout<<"Book Title:"<<books[i].title<<endl;
cout<<"Author Name:"<<books[i].author<<endl;
cout<<"Cost Of Book:"<<books[i].price<<endl;
}
}
void Book_Author()
{
char s1[30];
cout<<"\n Enter The Name Of Author:";
cin>>s1;
for (int i=0;i<arrayIndex;i++)
{
if(strstr(s1,books[i].author))
{
cout<<endl;
cout<<"Bookd Id:"<<books[i].id<<endl;
cout<<"Book Title:"<<books[i].title<<endl;
cout<<"Author Name:"<< books[i].author<<endl;
cout<<"Cost Of Book:"<<books[i].price<<endl;
}
else
{
cout<<"No Found Record."<<endl;

}
}
}
