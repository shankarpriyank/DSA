#include<iostream>
#include<vector>
using namespace std;


int maxSumSubarray(vector<int> A) {
    int size = A.size();
    int currrentSum = 0;
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        currrentSum = A[i] + currrentSum;
         
         if (  currrentSum < 0  )
         {
        currrentSum= 0;
         }

         largest = max(largest, currrentSum);
         
       
    }
    return largest;
    
    
}



int main(){

	vector<int> arr = {5 ,0, -1 ,0 ,1, 2, -1};
	



	cout<<maxSumSubarray(arr)<<endl;


	return 0;
}