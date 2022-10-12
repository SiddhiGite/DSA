#include <iostream>
using namespace std;

int firstOcc(int arr[] ,int size ,int key ){

    int start =0 ;
    int end = size -1;
    int ans = -1;

    int mid = start + (end-start)/2 ;

    while(start<= end){
        

        if (arr[mid] == key){
               ans = mid;
               end = mid-1; 
        }

         else if(key> arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        int mid = start + (end-start)/2 ;
    }

    return ans;
}

int LastOcc(int arr[] ,int size ,int key ){

    int start =0 ;
    int end = size -1;
    int ans = -1;

    int mid = start + (end-start)/2 ;

    while(start<= end){
        

        if (arr[mid] == key){
               ans = mid;
               start = mid+1; 
        }

        else if(key> arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        int mid = start + (end-start)/2 ;
    }

    return ans;
}

int main(){

    int even[6] = {2,3,6,6,6,18};

    cout<<"First occurence of 6 is "<< firstOcc(even ,6 ,3)<<endl;
    cout<<"Last occurence of 6 is "<<  LastOcc(even ,6 ,3)<<endl;

    return 0;
}