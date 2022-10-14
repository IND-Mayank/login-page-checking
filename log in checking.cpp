#include<iostream>
using namespace std;
int main(){
	string email,pass,confirm;
	cout<<"Enter your email"<<endl;
	cin>>email;
	cout<<"Enter your password"<<endl;
	cin>>pass;
	cout<<"Enter your confirm password"<<endl;
	cin>>confirm;
	if(pass!=confirm){
		cout<<"please re enter your password";
		while(pass==confirm)
		
		string reenter;
		cin>>reenter;
		reenter=confirm;
	}
	else{
		cout<<"password is saved";
	}
	cout<<endl;
	cout<<"please log in "<<endl;
	string em;
	cout<<"Enter your email"<<endl;
	cin>>em;
	string pss;
	cout<<"Enter your pasword"<<endl;
	cin>>pss;
	if(em==email && pass==pss){
		cout<<"welcome to the page";
		}
		else{
			if(em!=email){
				cout<<"email is wrong"<<endl;
			}
			else{
				cout<<"password is wrong";
			}
		
	}
	
}
