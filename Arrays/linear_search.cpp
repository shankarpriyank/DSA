#include<vector>
#include<string>
#include<iostream>
using namespace std;

 int linear_search(int arr[], int size, int key){
    for (int i = 0; i <size;  i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
    
 }



int main() {
     
     int arr[]= {0,1,2,3,4,5,6,7,8,9};
     int size = 10;
     int key = 10;
     int result = linear_search(arr,size,key);
      if(result!=-1){
        cout<<key<<" Found At Index "<< result<<endl;
      }else{
        cout<<"Key "<<key<<" Not Found in Array"<<endl;
      }

	return 0;
} 