#include<iostream>
using namespace std;

void allPairs(int arr[],int n){

for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {  cout<<"[";
        for (int k = i; k <= j; k++)
        {
            cout<<arr[k]<<",";
        }
        cout<<"]";
    }
    
}


}


int main(){

	int arr[] = {10,20,30,40,60,80,90};
	int n = sizeof(arr)/sizeof(int);



	allPairs(arr,n);


	return 0;
}