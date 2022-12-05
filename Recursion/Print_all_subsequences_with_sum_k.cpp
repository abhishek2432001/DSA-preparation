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

bool print_one_susequence_with_sum_k(int ind,vector<int>ds,int s,int sum,int n,int arr[]){
	if(ind>=n){
		if(s==sum) {
			print_ds(ds);
		return true;
		}
		else return false;
	}

	ds.push_back(arr[ind]);
	s+=arr[ind];
	if (print_one_susequence_with_sum_k(ind+1,ds,s,sum,n,arr)) {
		return true;
	}
	s-=arr[ind];
	ds.pop_back();
	if (print_one_susequence_with_sum_k(ind+1,ds,s,sum,n,arr)) return true;
	return false;
}

int count_all_subsequence_with_sum_k(int ind,int s,int sum,int n,int arr[]){
	if(ind>=n){
		if(s==sum) return 1;
		else return 0;
	}
	s+=arr[ind];
	int l = count_all_subsequence_with_sum_k(ind+1,s,sum,n,arr);
	s-=arr[ind];
	int r = count_all_subsequence_with_sum_k(ind+1,s,sum,n,arr);
	return l+r;

}

int main(){
	int n = 4;
	int arr[] = {3,1,2,1};
	vector<int>ds;
	int ind = 0;
	int s = 0;
	int sum = 2;
	cout<<count_all_subsequence_with_sum_k(ind,s,sum,n,arr);	
	return 0;
}

//Time complexity => It cost 2 recursive calls so it will be 2^n.
//Space complexity=>O(n)
