#include <bits/stdc++.h>
#include <math.h>
using namespace std;
  
// int main(){
//     // prints hello world
//     std :: cout << "Hello World";
  
//     return 0;
// }

// Bitwise Operator

// AND => &
// OR => |
// NOT => ~
// XOR => ^

// int main(){
//     int a = 4;
//     int b = 6;
//     cout<<(a&b)<<endl;
//     cout<<(a|b)<<endl;
//     cout<<(a^b)<<endl;
//     cout<<(~a)<<endl;

// left shift=> put two zero after binary =>genrally multiply by 2
// right shift=> shift  in the right by not considering the rightmost digits=>genrally divide by 2 

// cout<<(19<<1)<<endl;
// cout<<(21<<2);

    //Post Increment, Pre increment, Post decrement, Pre decrement
    // int i =7;
    // cout<<(i++)<<endl;
    // cout<<i<<endl;
    // cout<<(++i)<<endl;
    // cout<<i<<endl;
    // cout<<(i--)<<endl;
    // cout<<i<<endl;
    // cout<<(--i)<<endl;
    // cout<<i<<endl;

// }

//For Loop

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     for (;i<=n;){
//         cout<<i<<endl;
//         i++;
//     }
//     for(int a = 0,b=1;a<=0 && b>=1;a--,b--){
//         cout<<a<<" "<<b;
//     }

// }

// Sum till N numbers

// int main(){
//     int n;
//     cin>>n;
//     int i = 1,sum = 0;
//     for(;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;

// }


// Fibbonacci Series
// int main(){
//     int n;
//     cin>>n;
//     int a=0,b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i = 1; i<=n;i++){

//         int next = a+b;
//         cout<<next<<" ";
//         a = b;
//         b = next;

//         }
//     }

// int main(){
//     int n;
//     cin>>n;
//     double j = pow(n,0.5)+1;
//     cout<<j<<endl;
//     bool isprime = 1;
//     for (int i = 2;i<j;i++){
//         if(n%i==0){
//             cout<<"Not Prime";
//             isprime = 0;
//         }
//     }
//     if (isprime==1){
//         cout<<"Prime";   
//     }  
// }


//Decimal to binary

// int main()
// {
//     int n;
//     cin>>n;
//     int i = 1;
//     int ans=0;
//     while(n){
//         int bit = n&1;
//         ans = (pow(10,(i-1))*bit)+ans;
//         n = n>>1;
//         i++;
//     }
//     cout<<ans;
   
// }

//Binary to decimal

// int main()
// {
//     int n;
//     cin>>n;
//     int i = 0,ans = 0;
//     while(n!=0){
//         int digit = n%10;
//         if(digit==1){
//             ans = ans+pow(2,i);
//         }
//         i++;
//         n=n/10;
//     }
//     cout<<ans;

// }




























