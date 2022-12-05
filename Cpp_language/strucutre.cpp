#include<iostream>
using namespace std;
struct P
{
	int x;
	int y;
};


// -----Structure Pointer--
// """
// int main(){
// 	P p = {10,20};
// 	P *ptr = &p;
// 	cout<<ptr->x<<" ";
// 	ptr->x=30;
// 	cout<<p.x;

// 	return 0;
// } """



///-----Array of structures---//
// int main(){
// 	P arr[5];
// 	for(int i = 0;i<5;i++){
// 		arr[i].x=i;
// 		arr[i].y = i*10;

// 	}
// 	for(int i = 0;i<5;i++){
// 		cout<<arr[i].x<<" "<<arr[i].y<<endl;
// 	}
// 	return 0 ;
// }


// struct vs class=>
class BaseClass
{
    public: 
    //make private variables public
    int x;
};

//make derivation public also
class DerivedClass : public BaseClass {};

struct BaseStruct
{
    int x;
};
// Need not specify public keyword
struct DerivedStruct : BaseStruct {};

int main()
{
    {
        DerivedStruct d;
        d.x = 20;    
        cout << d.x << '\n';
    }
    
    {
        DerivedClass d;
        d.x = 20;
        cout << d.x << '\n';
    }
    
    return 0;
}
