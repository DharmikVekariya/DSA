#include<iostream>

using namespace std;

int setBits(int n){

    int Bits = 0;
    while (n!=0)
    {
        if(n&1){
           Bits = Bits +1;
        }
         n = n>>1;
      
    }
    return Bits;
}

int sumOfBits(int a, int b){

    return (setBits(a) + setBits(b)) ;
}

int main() {
   
    int a,b;
    
    cout << "Enter value Of A : ";
    cin >> a;
    cout << "Enter value Of b : ";
    cin >>b;
   
    cout << "Totel Number Of Set Bits : " << sumOfBits(a,b) ;

    return 0;
}