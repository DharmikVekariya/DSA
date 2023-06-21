#include<iostream>

using namespace std;


bool isPossible(int arr[],int n,int m,int mid){
      int studentCount = 1;
      int pageSum = 0;
     
      for (int i = 0; i < n; i++)
      {
        if (arr[i]>mid)
        {
           return false;
        }
        
        if (pageSum + arr[i] > mid)
        {
            
            studentCount++;
           pageSum = arr[i];
           
            if (studentCount > m )
            {
                return false;
            }
            
        }
        else {

               pageSum += arr[i];
        }
        
      }
      return true;
      
}
int totelPage(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
      {
        sum += arr[i];
      }
    
    return sum;
}
int allocateBooks(int arr[],int n,int m){
    int s=0;
    int e= totelPage(arr,n);
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
       int mid = s + (e-s)/2;
      
        if(isPossible(arr,n,m,mid)){
            
            ans = mid;
          
             e = mid -1;
        }
        else{
            s = mid+1;
        }
      
    }
    

    return ans;
}

void  addPage(int arr[],int n){
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      
}


int main (){

   int arr[100];
   int No_Of_Books ;
   int No_Of_Student;

   cout << "Enter No. Of Books : ";
   cin >> No_Of_Books ;
   cout << "Allocate  Page Number : ";

   addPage(arr,No_Of_Books);

   

   cout << "Enter No. Of Student : ";
   cin >> No_Of_Student ;

   cout << allocateBooks(arr,No_Of_Books,No_Of_Student);
    

    return 0;
}