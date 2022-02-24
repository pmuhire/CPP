#include <iostream>

int binarySearch(int array[],int n,int key){
    int start=0,end=n-1,searchKey=key;
    for (int i = start; i < end; i++)
    {
        int midIndex=(start+end)/2;
        if (array[midIndex]==searchKey)
        {
            return midIndex;
        }else if(array[midIndex]>searchKey){
             end=midIndex-1;
        }else{
            start=midIndex+1;
        }
        
    }
    return -1;
    
}
int linearSearch(int array[],int n,int key){
    int pos=-1,i=0;
    while (i<n)
    {
        if (array[i]==key)
        {
            return 1;
        }
        i++;
    }
    return -1;
    
}