#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void print_ds(vector<int>ds){
	for(auto i:ds){
		cout<<i<<" ";
	}cout<<endl;
}

void print_all_subsequence_with_sum_k(int ind,vector<int>ds,int s,int sum,int n,int arr[]){
	if(ind>=n){
		if(s==sum) print_ds(ds);
		return ;
	}

	ds.push_back(arr[ind]);
	s+=arr[ind];
	print_all_subsequence_with_sum_k(ind+1,ds,s,sum,n,arr);
	s-=arr[ind];
	ds.pop_back();
	print_all_subsequence_with_sum_k(ind+1,ds,s,sum,n,arr);

}

int main(){
	int n = 3;
	int arr[] = {3,1,2};
	vector<int>ds;
	int ind = 0;
	int s = 0;
	int sum = 3;
	print_all_subsequence_with_sum_k(ind,ds,s,sum,n,arr);
	return 0;
}

//Time complexity => It cost 2 recursive calls so it will be 2^n.
//Space complexity=>O(n)
