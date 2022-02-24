#include <iostream>
using namespace std;

int linearSearch(int array[],int size,int x){
    for (int i = 0; i < size; i++)
    {
        if (array[i]==x)
        {
            cout<<array[i];
            return i;
        }
        
    }
    return -1;
}
int main(){
    int array[8]={1,2,3,4,5,6,7,8};
    int size=sizeof(array)/sizeof(array[0]);
    int searchKey=7;
    cout<<linearSearch(array,size,searchKey);
}