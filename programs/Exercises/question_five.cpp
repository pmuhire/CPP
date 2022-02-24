#include <iostream>
using namespace std;

int* returnCommonElement(int a[],int b[],int length1,int length2){
    if (!a||!b)
    {
        return NULL;
    }
    int min,s1,s2;
    int* outerArray;
    int* innerArray;
    if (length1<length2)
    {
        s1=length1;
        s2=length2;
    }else{
        outerArray=a;
        innerArray=b;
    }
    int *cArray;
    int k=0;
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j<s2; j++)
        {
            if (outerArray[i]==innerArray[j])
            {
                *(cArray+k)=outerArray[i];
                break;
            }
            
        }
        
    }
    
}
int main(){
   int array1[]={4, 2, 6, 1};
   int array2[]={1, 8, 3, 2};
   int size1=sizeof(array1)/sizeof(array1[0]);
   int size2=sizeof(array2)/sizeof(array2[0]);
   cout<<returnCommonElement(array1,array2,size1,size2);
}