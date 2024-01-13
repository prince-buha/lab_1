#include<iostream>
using namespace std;
int addition(int x,int y){
	return x+y;
}
int subtraction(int x,int y){
	return x-y;
}
int Multiplication(int x,int y){
	return x*y;
}
int division(int x,int y){
	return x/y;
}
int modulo(int x,int y){
	return x%y;
}
int main(){
	int n1,n2,choice;
	cout<<"enter your number:-  ";
	cin>>n1;
	cout<<"enter your number:-  ";
	cin>>n2;
	cout<<"press 1 for +";
	cout<<"press 2 for -";
	cout<<"press 3 for *";
	cout<<"press 4 for /";
	cout<<"press 5 for %";
	cout<<"press 0 for exit";
 do{
 	cout<<"enter your choice :-";
 	cin>>choice;
 	 switch(choice){
 	 	case 1:
 	 		cout<<"the sum of two value are : "<<addition(n1,n2);
 	 		break;
 	 	case 2:
		    cout<<"the suntraction of two value are : "<<subtraction(n1,n2);
			break;
	    case 3:
		    cout<<"the Multiplication of two value are : "<<Multiplication(n1,n2);
		    break;
		 case 4:
		    cout<<"the division of two value are : "<<division(n1,n2);
		    break;
		 case 5:
		    cout<<"the modulo of two value are : "<<modulo(n1,n2);
			break;
		 case 6:
		    break;	
	  }
 }while(choice!=0);
 return 0;
}
