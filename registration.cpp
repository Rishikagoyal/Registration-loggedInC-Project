#include<bits/stdc++.h>
using namespace std;

bool isLoggedIn()
{
	string user_name, password,un,pw;
	
	cout<<"Enter the user name ";
	cin>>user_name ;
	
	cout<<"Enter the password ";
	cin>>password;
	
	ifstream read;
	read.open("Registrationfile.data");
	getline(read,un);
	getline(read,pw);
	
	if(un==user_name && pw==password)
	{
		return true ;
	}
	
	else
	return false;
}

int main()
{
	int choice ;
	cout<<"1. for registration"<<endl;
	cout<<"2. To get login status "<<endl;
	cout<<"Enter your choice "<<endl;
	cin>>choice;
	if(choice==1)
	{
		string name, password;
	
		cout<<"Enter your name ";
		cin>>name;
		cout<<"\n Enter your password ";
		cin>>password ;
		
		ofstream write;
		write.open("Registrationfile.data");
		write<<name<<endl<<password;
		
		write.close();
		main();
	}
	
	else if(choice==2)
	{
		bool status= isLoggedIn();
		if(status==true)
		{
			cout<<"Successfully logged in"<<endl;
			system("PAUSE");
			return 0;
		}
		
		else
		{
			cout<<"Logged in failed"<<endl;
			system("PAUSE");
			return 1;
		}
	}
	
}
