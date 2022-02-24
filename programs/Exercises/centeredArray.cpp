#include <iostream>

using namespace std;

int centeredArray(int arr[],int size){
    int midTerm,midIndex;
    midIndex=size/2;
    midTerm=arr[midIndex];
    if (size%2!=0|| arr==NULL){
        return 0;
    }else{
        for (int i = 0; i < midIndex; i++)
        {
            if ((i!=midIndex&&midTerm>=arr[i]))
            {
                return 0;
            }
            
        }
        
    }
    
}