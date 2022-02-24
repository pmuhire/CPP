#include <iostream>
using namespace std;

// THE ARRAY SHOULD BE SORTED
int binarySearch(int array[],int size,int searchKey,int big,int end){
       int midIndex=(big+end)/2;
       if (array[midIndex]==searchKey)
       {
           cout<<midIndex<<endl;
           return 1;
       }else if (array[midIndex]>searchKey)
       {
           binarySearch(array,size,searchKey,big,midIndex-1);
       }
        return binarySearch(array,size,searchKey,midIndex+1,end);
       
       
       
       







    // int start=0, end=size-1,pos=-1;
    // for (int i = start; i < end; i++)
    // while (start<=end)
    // {
        // int midIndex=(start+end)/2;
        // if (array[midIndex]==searchKey)
        // {
            // cout<<array[midIndex];
            // return midIndex;
        // }else if (array[midIndex]>searchKey)
        // {
            // end=midIndex-1;
        // }else{
            // start=midIndex+1;
        // }
    // }
    // return -1;
    
}
int main(){
    int array[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    int searchKey=4;
    cout<<binarySearch(array,size,searchKey,0,size-1);
}