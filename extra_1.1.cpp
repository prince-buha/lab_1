#include<iostream>
using namespace std;

int main(){
	int i,n,fact=1;
	
	cout<<"enter your number you want a factorial of :-";
	cin>>n;
	
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"the factorial number is :"<<n<<fact;
	return 0;
	
}
