#include <iostream>
using namespace std;
  
// int main(){
//     int a  = 123;
//     cout<< a <<endl;

//     char b = 'b';
//     cout<< b <<endl;
    
//     bool  b1  = 1;
//     cout<< b1<<endl;
    
//     float f = 1.5;
//     cout<<f<<endl;
    
//     double d = 7.809;
//     cout<<d<<endl;

//     int size = sizeof(d);
//     cout<<"Size of d is "<<size;

// }

// Datatypes and variables
// Integer
// int a => 4 byte=32 bits(genrally may take 2 bytes also)
// char ch = 'a' =>1 byte(4bits)
// bool b = 1 =>1  1byte(4bits) 
// float f =  =>1.2  8byte(64bits) 
// double d =  =>1.23  8byte(64bits)


//Type casting
// int main(){

// int a ='a';
// cout<<a<<endl;

// char ch = 98;
// cout<<ch<<endl;

// char ch1 = 123456;
// cout<< ch1<<endl;
// }

// int main(){
//     unsigned int a = -112;
//     cout<<a<<endl;
// }

//Operators

// int main()
// {
//     int a = 2/5;
//     cout<<a<<endl;

//     float f = 2.0/5;
//     cout<<f<<endl;

//     double d= 2.0345/5;
//     cout<<d<<endl;
// }

// Relational Operators

// int main()
// {
//     int a = 2;
//     int b =3;

//     bool first = (a==b);
//     cout<<first<<endl; 

//     bool second = (a<=b);
//     cout<<second<<endl; 

//     bool third = (a>=b);
//     cout<<third<<endl; 
// }

//Logical Operators
// int main(){
//     int a = 21;
//     cout<< !a<<endl;
// }


// Conditional and loops

// int main(){

//     int a,b;
//     cin>>a>>b;

//     if (a>b){
//         cout<<"Answer is a";
//     }

//     if(b>a){
//         cout<< "Answer is b";
//     }

// }

// a=cin.get() identifies character, tab, enter and space.



//if-else-if
// int main()
// {
//     int a,b;
//     cout<<"Enter a"<<endl;
//     cin>>a;
//     cout<<"Enter b"<<endl;
//     cin>>b;

//     if (a>b){
//         cout<<"A is greater";
//     }
//     else if (b>a){
//         cout<<"B is greater";
//     }
//     else{
//         cout<<"Both are equal";
//     }

// }

//Looping

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         cout<<i<<" ";
//         i++;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int sum;
//     int i = 2;
//     while(i<=n){
//         cout<<i<<" ";
//         sum+=i;
//         i = i+2;
//         cout<<i<<" ";
//     }
//     cout<<sum<<" ";
// }

//Prime number

// int main(){
//     int N;
//     cin>>N;
//     int i = 2;
//     int n = (N/2)+1;
//     cout<<n<<endl;
//     while (i<n){
//         cout<<i<<endl;
//         if(N%i==0){
//             cout<<"Not prime"<<endl;
//             return 0;
//         }

//         i=i+1;
//     }
//     cout<<"Prime"<<endl;
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i = 0;
//     while(i<n){
//         int j = 0;
//         while(j<n){
//             cout<<"*";
//             j = j+1;
//         }
//         cout<<endl;
//         i = i+1;
//     }
// }



//For output 12345
// 12345
// 12345
// 12345
// 12345//

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j =1;
//         while (j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// 1 2 3 
// 4 5 6 
// 7 8 9

// int main()
// {   
//     int n;
//     cin>>n;
//     int i =0;
//     while (i<n){
//         int j = 1;
//         while (j<=n){
//             cout<<j+(n*i)<<" ";
//             j++;
//         }   
//         cout<<endl;
//         i++;
//     }
// }


// *
// **
// ***

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin>>n;
//     int i = 1;
//     while (i<=n){
//         int j = 1;
//         while (j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;

//         i++;
//     }
// }


//1
// 22
// 333

// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// int main(){
//     int n;
//     cin>>n;
//     int i;
//     int val = 1;
//     while (i<=n){
//         int j = 1;
//         while (j<=i){
//             cout<<val;
//             j++;
//             val++;
//         }
//         cout<<endl;
//         i++;

//     }
// }

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
    
//     while (i<=n){
//         int j = 1;
//         while (j<=i){
//             cout<<i+j-1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 1
// 2 1 
// 3 2 1 
// 4 3 2 1

// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while(i<=n){
//         int j =1;
//         while(j<=i){
//             cout<< i-j+1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// A A A 
// B B B
// C C C

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A'+i-1;
//         while (j<=n){
//            cout<<ch;
//            j++; 
//         }
//         cout<<endl;
//         i++;
//     }

// }


// A B C 
// A B C 
// A B C 

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while (j<=n){
//             char ch = 'A'+j-1;
//             cout<<ch;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }

// A B C
// D E F 
// G H I 


// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     char ch = 'A';
//     while (i<=n){
//         int j =1;
//         while (j<=n){
//             cout<<ch;
//             j++;
//             ch = ch + 1;
//         }
//         i++;
//         cout<<endl;
//     }

// }

// A B C
// B C D 
// D E F
 // int main(){
 //    int n;
 //    cin>>n;
 //    int i = 1;
 //    char ch = 'A';
 //    while(i<=n){
 //        int j = 1;
 //        while(j<=n){
 //            cout<<char (ch+j-1)<<" ";
 //            j++;
 //        }
 //        i++;
 //        ch=ch+1;
 //        cout<<endl;
 //    }
 // }


// A 
// B B 
// C C C

// int main(){
//     int n;
//     cin>>n;
//     int i =1;
    
//     while (i<=n){
//         int j = 1;
//         char ch = 'A' + i - 1;
//         while(j<=i){
//             cout<<ch;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     char ch  = 'A';
//     while (i<=n){
//         int j =1;
//         while(j<=i){
//             cout<<char(ch+i+j-2);
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int i =1;
    
//     while (i<=n){
//         char ch  = 'A'+n-i;
//         int j =1;
//         while(j<=i){
//             cout<<char(ch+j-1);
//             j++;
//         }
//         i++;
//         cout<<endl;

        
//         }
//     }


 //   *
 //  **
 // ***
// ****


// int main(){
//     int n;
//     cin>>n;
//     int i =1;
//     while (i<=n){
//         int j = 1;
//         while(j<=n){
//             if (j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//             j++;
//         }
//         i++;
//         cout<<endl;

//     }
// }


// ****
// ***
// **
// *

// int  main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = n-i+1;
//         while (j){
//             cout<<"*";
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }


//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int val = 1;
//         int j = 1;
//         while(j<=n-i){
//             cout<<" ";
//             j++;
//         }
//         while(j>n-i && j<=n){
//             cout<<val;
//             j++;
//             val++;
        
//         }
//         val = val-1;
//         int start = i-1;
//         while(start){
//             cout<<start;
//             start--;
//         }

//         cout<<endl;
//         i++;

//     }

// }

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main(){
    int n; 
    cin>>n;
    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        j--;
        int start = i-1;
        while(start){
            cout<<"**";
            start--;
        }
        while(j){
            cout<<j;
            j--;
        }


        cout<<endl;
        i++;
    }

}
