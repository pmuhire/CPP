#include <iostream>
using namespace std;

// THE ARRAY SHOULD BE SORTED
int interpolationSearch(int array[],int size,int searchKey){
    int start=0, end=size-1,pos=-1;
    // for (int i = start; i < end; i++)
    while (start<=end)
    {
        int index=start +  ((searchKey-array[start])*(end-start)) / (array[end]-array[start]) ;
        if (array[index]==searchKey)
        {
            // cout<<array[index];
            return index;
        }else if (array[index]>searchKey)
        {
            end=index-1;
        }else{
            start=index+1;
        }
    }
    return pos;
    
}
int main(){
    int array[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    int searchKey=4;
    cout<<interpolationSearch(array,size,searchKey);
}