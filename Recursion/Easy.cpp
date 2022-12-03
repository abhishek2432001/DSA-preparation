#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void print_one_to_n(int n){
	if(n==1){
	cout<<n<<endl;
	return ;
	}
	print_one_to_n(n-1);
	cout<<n<<endl;
}
void print_n_to_one(int n){
	if(n==1){
	cout<<n<<endl;
	return ;
	}
	cout<<n<<endl;
	print_one_to_n(n-1);
	
}

// int height_of_bst(Node * root){
// 	if(!root) return 0;
// 	int lh = height_of_bst(root.left);
// 	int rh = height_of_bst(root.right);
// 	return 1+max(lh,rh);
// }

int fact(int n){
	if(n==1||n==0)return 1;
	return n*fact(n-1);
}

//Parametrized way to ind the sum of n numbers
void sumofnumbers(int n,int sum){
	if(n<1){
		cout<<sum<<endl;
		return ;
	}
	sumofnumbers(n-1,sum+n);
}

//Functional way to find sum of n numbers
int sumofnnumbers(int n){
	if(n==0)return 0;
	return n+sumofnnumbers(n-1);
}

//parametrized way
void reversearray(int arr[],int l,int r){
	if(l>=r) return;
	swap(arr[l],arr[r]);
	reversearray(arr,l+1,r-1);
}

//Functional way
void reversearrayfun(int arr[],int n,int i){
	if(i>=n/2)return;
	swap(arr[i],arr[n-i-1]);
	reversearrayfun(arr,n,i+1);
}
bool ispallindrome(string s,int i){
	if(i>=s.size()/2)return 1;
	if(s[i]!=s[s.size()-i-1]) return 0;
	return ispallindrome(s,i+1);
}

int fib(int n){
	if(n<=1)return n;
	return fib(n-1)+fib(n-2);
}


int main(){
	int arr[] = {2,5,6,9,12};
	int n;
	cin>>n;
	print_one_to_n(n);
	cout<<endl;
	print_n_to_one(n);
	cout<<endl;
	cout<<fact(6)<<endl;
	cout<<endl;
	sumofnumbers(5,0);
	cout<<endl;
	cout<<sumofnnumbers(5)<<endl;
	cout<<endl;
	// reversearray(arr,0,4);
	reversearrayfun(arr,5,0);
	printarray(arr,5);
	cout<<endl;
	cout<<ispallindrome("MADAM",0)<<endl;
	return 0;
}