#include<vector>
#include<string>
#include<iostream>
using namespace std;

 int binary_search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

while (start<=end)
{
    int mid = (start + end)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
     else if (arr[mid]<key)
    {
        start= mid +1;
    }
    else {
        end = mid - 1;
    }    
}

    
    return -1;
    
 }



int main() {
     
     int arr[]= {0,1,2,3,4,5,6,7,8,9};
     int size = 10;
     int key = 6;
     int result = binary_search(arr,size,key);
      if(result!=-1){
        cout<<key<<" Found At Index "<< result<<endl;
      }else{
        cout<<"Key "<<key<<" Not Found in Array"<<endl;
      }

	return 0;
} 