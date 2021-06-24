#include<iostream>
#include<math.h>
#include<conio.h>
#include<string>
#include<cstdlib>
#include<cstring>
/*
PASSWORD IS awais
sSUBMITTED BY AWAIS MANSHA AND ABDULLAH
SOFTWARE ENGINEERING 
SECTION C
*/
using namespace std;
struct dob{
	int day;
	int month;
	int year;
};
struct personaldetail{
	string name;
	string fathername;
	string address;
};
struct equalitydetail{
	string gender;
	string ethincity;
	string nationality;
	string religion;
	string domicile;
};
bool check(string name);
void welcome();
void password();
void getequalitydetail(equalitydetail s[],int size);
void getpersonaldetail(personaldetail s1[],int size1,dob s2[],int size2);
void printpersonaldetail(personaldetail s1[],int size1,dob s2[],int size2,equalitydetail s[],int size);
const int size=10;
const int size1=10;
const int size2=10;
equalitydetail student[size];
personaldetail student1[size1];
dob student2[size2];
personaldetail s1[size1];
string name;
int main()
{equalitydetail student[size]; dob student2[size2]; personaldetail student1[size1];

password();

welcome();

getpersonaldetail(student1,size1,student2,size2);

getequalitydetail(student,size);

printpersonaldetail(student1,size1,student2,size2,student,size);

getch();
return 0;
}

void getpersonaldetail(personaldetail s1[],int size1,dob s2[],int size2)
{string m,fu;int c,f,a;
	for(int i=0;i<size1;i++)
	{
		c=1;f=1;a=1;
		system("color f1");
		cout<<"\n\n\t\tPlease Enter Personal Detail of "<<i+1<<" Student : \n\n";
		cout<<"\n  Please Enter Name            :    ";
		while(c==1)
		{getline(cin,s1[i].name);
		c=check(s1[i].name);
		}	
		cout<<"\n  Please Enter Father Name     :    ";
		while(f==1)
		{
		getline(cin,s1[i].fathername);
		f=check(s1[i].fathername);}
		cout<<"\n  Please Enter Address         :    ";
		while(a==1)
		{
		getline(cin,s1[i].address);
		a=check(s1[i].address);
		}
		while(s2[i].year<1000||s2[i].year>2018)
		{
        cout<<"\n  Please enter year  of Birth  :    ";
        cin>>s2[i].year;
        if(s2[i].year<1900||s2[i].year>2018)
        cout<<"\nInvalid year ";
        }
        while(s2[i].month<1||s2[i].month>12){
		cout<<"\n  Please Enter Month of Birth  :    ";
		cin>>s2[i].month;
		if(s2[i].month<1||s2[i].month>12)
		cout<<"\nInvalid month ";
		}
		cout<<"\n  Please Enter Day of Birth    :    ";
		cin>>s2[i].day;
		if((s2[i].day>=1&&s2[i].day<=31))
			{
				if(s2[i].month==1||s2[i].month==3||s2[i].month==5||s2[i].month==7||s2[i].month==8||s2[i].month==10||s2[i].month==12)
			{
			while(s2[i].day<1||s2[i].day>31)
			{
			cout<<"\nInvalid";
			cout<<"\n  Please Enter Day of Birth    :    ";	
			cin>>s2[i].day;
			}
			}
			else if(s2[i].month==4||s2[i].month==6||s2[i].month==9||s2[i].month==11)
			{
			while(s2[i].day<1||s2[i].day>30)
			{
			cout<<"\nInvalid";
			cout<<"\n  Please Enter Day of Birth    :    ";	
			cin>>s2[i].day;
			}	
			}
			else{
			
				if(s2[i].year%4==0&&s2[i].month==2)
				{
						while(s2[i].day<1||s2[i].day>29)
				{
					cout<<"\nInvalid";
					cout<<"\n  Please Enter Day of Birth    :    ";	
					cin>>s2[i].day;	
				}
				}
				else{
					while(s2[i].day<1||s2[i].day>28)
				{
					cout<<"\nInvalid";
					cout<<"\n  Please Enter Day of Birth    :    ";	
					cin>>s2[i].day;	
				}
				}	
				}
			}
		getline(cin,m);
		system("cls");
			}
		
			}

void getequalitydetail(equalitydetail s[],int size)
{int p,q,r,v,w;
	for(int i=0;i<size;i++)
	{
		p=1;q=1;r=1;v=1;w=1;
		system("color f2");
		cout<<"\n\n\t\tEnter the Equality Detail of "<<i+1<<" Student : \n\n";
		cout<<"\n  Please Enter Gender          :    ";
		while(p==1){
		getline(cin,s[i].gender);
		p=check(s[i].gender);
		}
		cout<<"\n  Please Enter Ethincity       :    ";
		while(q==1)
		{
		getline(cin,s[i].ethincity);
		q=check(s[i].ethincity);
		}
		cout<<"\n  Please Enter Religion        :    ";
		while(r==1){
		getline(cin,s[i].religion);
		r=check(s[i].religion);
		}
		cout<<"\n  Please Enter Nationality     :    ";
		while(v==1)
		{
		getline(cin,s[i].nationality);
		v=check(s[i].nationality);
		}
		cout<<"\n  Please Eneter Domicile       :    ";
		while(w==1)
		{
		getline(cin,s[i].domicile);
		w=check(s[i].domicile);
		}
		system("cls");
}
}

void printpersonaldetail(personaldetail s1[],int size1,dob s2[],int size2,equalitydetail s[],int size)
{
	for(int i=0;i<size1;i++)
	{
		cout<<"\n=================================================================\n";
		cout<<"\n\t\tPERSONAL DETAILS Of "<<i+1<<" Student : \n\n";
		cout<<"=================================================================\n";
		cout<<"\n\t  Name               :    "<<s1[i].name;
		cout<<"\n\t  Fathername         :    "<<s1[i].fathername;
		cout<<"\n\t  Address            :    "<<s1[i].address;
		cout<<"\n\t  Date of Birth is   :    "<<s2[i].day<<"-"<<s2[i].month<<"-"<<s2[i].year;
		cout<<"\n=================================================================\n";
		cout<<"\n\t\tEQUALITY DETAILS Of "<<i+1<<" Student : \n\n";
		cout<<"=================================================================\n";
		cout<<"\n\t  Gender             :    "<<s[i].gender;
		cout<<"\n\t  Ethincity          :    "<<s[i].ethincity;
		cout<<"\n\t  Religion           :    "<<s[i].religion;
		cout<<"\n\t  Nationality        :    "<<s[i].nationality;
		cout<<"\n\t  Domicile           :    "<<s[i].domicile;
		cout<<"\n\n\n";
		cout<<"\n*****************************************************************\n";
		cout<<"*****************************************************************\n";
	}
}
bool check(string name)
{
	int b=0;

		for(int i=0;i<name.size();i++)
		{
			if(name[i]<'A'||name[i]>'Z')
			{
				if(name[i]<'a'||name[i]>'z')
				  if(name[i]!=' '&&name[i]!='-')
			      	     b=b+1;	
			}
			
		}
		if(b!=0){
		cout<<"\n\t\tInvalid\n\tTry Again\t:\t";
		return true;}

}
void welcome()
{
system("color 3A");
cout<<"\n\n\n\n";
cout<<"\t $$      $$ $$$$$$$$$$ $$$$$$$$$\n";
cout<<"\t $$      $$ $$      $$ $$       \n";
cout<<"\t $$      $$ $$      $$ $$      \n";
cout<<"\t $$      $$ $$      $$ $$    $$$\n";
cout<<"\t $$      $$ $$      $$ $$     $$\n";
cout<<"\t $$$$$$$$$$ $$$$$$$$$$ $$$$$$$$$\n";
cout<<"\n\n\n\n\t\t\t\t PROJECT BY : AWAIS MANSHA & ABDULLAH\n\n";
cout<<"\n\n\tpress enter to start .....process !";
getch();
system("cls");
}
void password()
{
	char pass[6]="awais";
	int test,passcount=0;
	char b[6];
	system("color f2");
	again:
			cout<<"\n\n\n\n\n\t\t# ALL RIGHTS RESERVED #";
			cout<<"\n\n\t\t\t\t*PROTECTED BY PASSWORD*";
			cout<<"\n\n\n\n\n\t\tplease enter your password : ";
			for(int i=0;i<5;i++)
			{
				b[i]=getch();
				cout<<"*";
			}
			test=strcmp(pass,b);
			while(test!=0)
			{
				passcount++;
				cout<<"\n\n\t\t\tpassword incorrect ! \n";
				system("pause");
				if(passcount>=3)
				{
					cout<<"\n\t\t LOGIN FAILED \n";
					exit(0);
				}
				cout<<"\t\t\tTRY AGAIN: \n\t\t\t";
				system("cls");
				goto again;
			}
			//	cout<<"\n \password accepted \n press any key too continue ....";
				system("cls");
}
