#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;    //we could do (start+end)/2 but it can go out of range so this is like s/2 + e/2;
         while(start <= end){
         
         if(arr[mid] == key){
             return mid;
         }
         if(key > arr[mid]) {   //go to right wala part
         start = mid +1;
         }
         else{ // left part when arr[mid] > key
         end=  mid -1;
         }
        mid = start + (end-start)/2;   
         
    }
    return -1;
}


  int main(){
    int even[6] = {2, 5, 8, 12, 16, 22};
    int odd[9] = {-2 , 0, 5, 7, 9, 12, 24 , 32, 45};

    int evenIndex = binarysearch(even , 6, 16);
    cout<<"The index at which 16 is present is "<<evenIndex<<endl;

    int oddIndex = binarysearch(odd ,9 , 32);
    cout<<"The index at which 32 is present is "<<oddIndex<<endl;
    
  
  return 0;
 }