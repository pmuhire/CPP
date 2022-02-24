#include <iostream>
using namespace std;

int isOddValent(int arr[],int size){
    if (size<=1){
        return 0;
    }
    bool isOdd=false;
    int counter=1;
     for (int i = 0; i < size; i++){
         if (!isOdd && arr[i]%2!=0){
             isOdd=true;
         }
         for (int j = i+1; j < size; j++){
            if (arr[i]==arr[j] && counter<2){
                counter++;
            }  
        }
        if ( counter>1 && isOdd==true){
            return 1;
        }
     }
    return 0;    
}
int main(){
    int arr[]={1,2,3,4,3,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=isOddValent(arr,size);
    cout<<result<<endl;
}