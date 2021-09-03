#include<bits/stdc++.h>
using namespace std;
int registeration();
int logged_in();

int main(){
	int select;
	cout<<" WELCOME\n press 1 to login\n press 2 to register"<<endl<<" ";
	cin>>select;
	if(select==1)
	logged_in();
	else
	registeration();
	return 0;
}
int registeration(){
	string username,password;
cin.ignore();
	cout<<" Enter username :  ";
	getline(cin,username);
	cout<<" Enter password :  "; cin>>password;
	ofstream file;

	file.open("sample.txt",ios::app);
	file<<username<<"\n"<<password<<endl;
	file.close();
	cout<<"SUCCESSFULLY REGISTERED"<<endl<<endl;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
	cout<<"press 0 to exit and 1 to continue"<<endl;
	int flag;
	cin>>flag;
	if(flag==0){
		return 0;
	}
	else
	main();

}
int logged_in(){
	string username,password,check_name,check_pass;
	cin.ignore();
	cout<<"Enter username :  ";
	getline(cin,username);
	cout<<"Enter password :  "; cin>>password;
	ifstream read("sample.txt");
	getline (read,check_name);
	getline (read,check_pass);
	read.close();
	(check_name==username)?(check_pass==password)?cout<<"SUCCESSFULLY LOGGED IN"<<endl<<endl:cout<< "INCORRECT PASSWORD"<<endl<<endl:cout<<" INVALID LOGIN"<<endl<<endl;	
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl<<endl;
	return 0;
	
}


