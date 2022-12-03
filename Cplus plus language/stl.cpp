#include<bits/stdc++.h>
using namespace std;

//Vector
// int main(){
// 	vector<int> v(5,1);//vector of size 5with ones
// 	vector<int>last(v);//copies  vector a
// 	cout<<v.capacity()<<endl;
// 	v.push_back(1);
// 	v.push_back(2);
// 	v.push_back(3);
// 	// cout<<v.capacity()<<endl;
// 	// cout<<v.size()<<endl;
// 	cout<<v.front()<<endl;
// 	cout<<v.back()<<endl;
// 	//v.clear();//clears the array
	

// 	}


//Deque

// int main(){

// 	deque<int> d;//vector of size 5with ones
// 	d.push_back(1);
// 	d.push_back(2);
// 	d.push_front(3);
// 	// cout<<v.capacity()<<endl;
// 	// cout<<v.size()<<endl;
// 	cout<<d.front()<<endl;
// 	cout<<d.back()<<endl;
// 	for(int i :d){
// 		cout<<i<<" ";
// 	}	
// 	cout<<endl;
// 	cout<<d.at(1)<<endl;//Element at given index

// 	}


// int main(){

// 	stack<int>s;
// 	s.push(1);
// 	s.push(3);
// 	s.push(2);
// 	s.pop();
// 	cout<<s.top()<<endl;
// 	cout<<s.empty()<<endl;
// 	}


// int main(){

// 	queue<int>q;
// 	q.push(1);
// 	q.push(3);
// 	q.push(2);
// 	cout<<q.front()<<endl;
// 	q.pop();
// 	cout<<q.front()<<endl;
// 	cout<<q.empty()<<endl;
// 	}



//Heap

int main(){

	priority_queue<int>maxi;//max heap
	// priority_queue<int,vector<int>,greater<int> >mini;//min heap
	maxi.push(1);
	maxi.push(3);
	maxi.push(2);
	maxi.push(0);
	int n = maxi.size();
	for(int i = 0;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}cout<<endl;

	// mini.push(5);
	// mini.push(3);
	// mini.push(1);
	// mini.push(0);
	// int m = mini.size();
	// for(int i = 0;i<m;i++){
	// 	cout<<mini.top()<<" ";
	// 	mini.pop();
	// }cout<<endl;
	
	}


//Set
// int main(){
// 	set<int>s;
// 	s.insert(1);
// 	s.insert(3);
// 	s.insert(7);
	
// 	for(auto i:s){
// 		cout<<i<<" ";
		
// 	}cout<<endl;

// 	set<int>::iterator it = s.begin();
// 	it++;
// 	s.erase(it);
// 	for(auto i:s){
// 		cout<<i<<" "<<endl;
		
// 	}cout<<endl;
// 	cout<<s.count(7);


	
// 	}




//Hash

// int main(){
// 	map<int,string>m;
// 	m[1]="abhi";
// 	m[2]="kumar";
// 	m[3]="pandey";
// 	for(auto i:m){
// 		cout<<i.first<<" "<<i.second<<endl;
// 	}

// 	m.erase(2);
// 	for(auto i:m){
// 		cout<<i.first<<" "<<i.second<<endl;
// 	}
// }