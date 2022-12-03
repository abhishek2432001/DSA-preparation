#include <bits/stdc++.h>
#include <math.h>
using namespace std;


//Switch case
// int main(){
// 	char ch='a';
// 	switch(ch){
// 		case 1: cout<<"first"<<endl;
// 		break;

// 		case '1':cout<<"character"<<endl;
// 		break;

// 		default: cout<<"default"<<endl;
// 		break;
// 	}
// }


//Calculator

// int main(){
// 	int a,b;
// 	cout<<"a enter kr"<<endl;
// 	cin>>a;
// 	cout<<"b enter kr"<<endl;
// 	cin>>b;
// 	char op;
// 	cout<<"Enter operation"<<endl;
// 	cin>>op;
// 	switch(op){
// 		case '+':cout<<a+b;
// 		break;
// 		case '-':cout<<a-b;
// 		break;
// 		case '*':cout<<a*b;
// 		break;
// 		case '/':cout<<a/b;
// 		break;
// 		case '%':cout<<a%b;
// 		break;
// 		default:cout<<"Non operable command";

// 	}

// 	return 0;

// }


// int main(){
// 	int rs100,rs50,rs20,rs1;
// 	int rs;
// 	cin>>rs;
// 	switch(1){
// 		case 1:	rs100 = rs/100;
// 				cout<<"100 notes required are"<<rs100<<endl;
// 				rs -=(100*rs100);
// 		case 2: rs50 = rs/50;
// 				cout<<"50 notes required are"<<rs50<<endl;
// 				rs -=(50*rs50);
// 		case 3: rs20 = rs/20;
// 				cout<<"20 notes required are"<<rs20<<endl;
// 				rs -=(20*rs20);
// 		case 4: rs1 = rs;
// 				cout<<"50 notes required are"<<rs1<<endl;
				
// 	}
// }


//Functions=> Readbility,Reduce bulkiness, Reduce Bugginess
// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	int ans =1;
// 	for(int i =1;i<=b;i++){
// 		ans = ans*a;
// 	}
// 	cout<<"answer is"<<ans<<endl;
// 	return 0;

// }


// int power(int a, int b){
// 	cin>>a>>b;
// 	int ans = 1;
// 	for (int i=1;i<=b;i++){
// 		ans = ans*a;
// 	}
// 	return ans;
// }


//Checking even or odd
// bool iseven(int a){

// 	bool ans;
// 	if(a%2){
// 		ans = false;
// 	}
// 	else{
// 		ans = true;
// 	}
// 	return ans;
// }

//ncr
// int ncr(int n, int r){
// 	int ans = 1;
// 	int rfactor=1;
// 	while(r){
// 		ans = ans*n;
// 		rfactor = rfactor*r;
// 		n--;
// 		r--;
// 		}
// 	return ans/rfactor;
// }


//isprime

// bool isprime(int n){
// 	int i =2;
// 	int x = (pow(n,0.5))+1;
// 	for (;i<=x;i++){
// 		if(n%i==0){
// 			return 0;
// 		}

// 	}
// 	return 1;
// }


//3n+7

// int ap(int n){
// 	return (3*n+7);
// 


//count setbits in a and b
// int  countsetbit(int a, int b){
// 	int ans=0;
// 	if(a>b){
// 		int temp=a;
// 		a=b;
// 		b=temp;
// 	}
// 	while(b){
// 		if(a&1){
// 			ans++;
// 		}
// 		if(b&1){
// 			ans++;
// 		}
		
// 		b=b>>1;
// 		a=a>>1;

// 	}
// 	return ans;
// }



//return nth fibbonacci term

// int fib(int n){
// 	int a =0;
// 	int b =1;
// 	int ans;
// 	if (n==1){
// 		return a;
// 	}
// 	if (n==2){
// 		return b;
// 	}
// 	for (int i=0;i<=n-2;i++){
// 		int temp = a;
// 		a = b;
// 		b = temp+b;
// 	}
// 	return a;
// }

void  dummy(int n){
	n++;
	cout<<n<<endl;
}

int main(){
	int n;
	cin>>n;
	dummy(n);
	cout<<n;
	return 0;
}


