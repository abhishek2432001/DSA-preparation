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

void print_all_subsequence(int ind,vector<int>ds,int n,int arr[]){
	if(ind>=n){
		if(ds.size()==0) cout<<"{}"<<endl;
		else print_ds(ds);

		return ;
	}

	ds.push_back(arr[ind]);
	print_all_subsequence(ind+1,ds,n,arr);
	ds.pop_back();
	print_all_subsequence(ind+1,ds,n,arr);

}

int main(){
	int n = 3;
	int arr[] = {3,1,2};
	vector<int>ds;
	int ind = 0;
	print_all_subsequence(ind,ds,n,arr);
	return 0;
}

//Time complexity => It cost 2 recursive calls so it will be 2^n.
//Space complexity=>O(n)
