#include<iostream>
#include<vector>
using namespace std;


void  Decreasingrecursion(int number) {
         if( number == 0){
            cout<<number<<endl;
            return;
         }

    cout<< number <<endl;
    Decreasingrecursion(number-1);
    return;
    
    
}
void  Increasingrecursion(int number) {
     

         if( number == 0){
            cout<<number<<endl;
            return;
         }

         Increasingrecursion(number-1);

    cout<< number <<endl;
    
    return;
    
    
}



int main(){

	
   Decreasingrecursion(100);
   Increasingrecursion(100);


	return 0;
}