#include<iostream>

using namespace std;

//taking input in array
void addNumber (int arr[],int size ){
    
    for(int i=0;i<size;i++){
         cin >> arr[i] ;
    }
}
 //sum Of Array 
int  sumNumber (int arr[],int size ){
    int sum = 0 ;
    for(int i=0;i<size;i++){
          sum += arr[i];
    }
    return sum;
}

int main(){

    int size;
    int num[100];
    cout << "How Many Element to Enter In Array : ";
    cin >> size;

    addNumber(num,size);
    cout << "Sum of Num : " << sumNumber(num,size) ;



    return 0;
}