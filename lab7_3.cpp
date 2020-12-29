#include<iostream>
using namespace std;
int main(){
	int ages,pp;
	string states;
	double hights;
	cout<<"Enter your age: ";
	cin>>ages;
	if(ages<=20){
		cout<<"Enter your height: ";
		cin>>hights;
		if(hights<160){
			states="UNFRIEND";
		}else if(hights<175){
			states="FRIEND";
		}else{
			cout<<"Enter your property: ";
		     cin>>pp;
		     if(pp>69000000){
		     	states="MARRIED";
			 }else{
			 	states="ONE-NIGHT-STAND";
			 }
		}
	}else if(ages<30){
		cout<<"Enter your property: ";
		cin>>pp;
	      if(pp>10000000){
	      	states="BEST FRIEND";
		  }else{
		  	states="UNFRIEND";
		  }
	}else{
		states="UNFRIEND";
	}
	cout<<"Your status = "<<states;
	return 0;
}
