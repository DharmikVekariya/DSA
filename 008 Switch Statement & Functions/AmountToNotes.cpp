#include<iostream>

using namespace std;

int main(){

   int amount ;

   cout << "Enter Amount : " ;
   cin >> amount;
   
   switch (1)
   {
    case 1: cout << "Number Of 100 Notes : " << amount/100 << endl;
            amount = amount%100;

    case 2: cout << "Number Of 50 Notes : " << amount/50 << endl;
            amount = amount%50;

    case 3: cout << "Number Of 20 Notes : " << amount/20 << endl;
            amount = amount%20;

    case 4: cout << "Number Of 1 Notes : " << amount << endl;
                  
   }

    return 0;
}