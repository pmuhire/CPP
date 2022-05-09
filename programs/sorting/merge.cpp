#include<iostream>
using namespace std;

void merge(int arr[], int begin,int mid, int end) {
	int sizeOfLeftArr = mid - begin + 1;
	int sizeOfRightArr = end - mid;
	int leftArr[sizeOfLeftArr];
	int rightArr[sizeOfRightArr];
	for(int i = 0; i < sizeOfLeftArr; i++) {
		leftArr[i] = arr[begin + i];
	}
	for(int j = 0; j < sizeOfRightArr; j++) {
		rightArr[j] = arr[mid + 1 + j];
	}
	int leftIndexCounter = 0;
	int rightIndexCounter = 0;
	int mergedIndexCounter = begin;
	//merge when both halves have elemens
	while(leftIndexCounter < sizeOfLeftArr && rightIndexCounter < sizeOfRightArr) {
		if(leftArr[leftIndexCounter] <= rightArr[rightIndexCounter]) {
			arr[mergedIndexCounter] = leftArr[leftIndexCounter];
			leftIndexCounter++;
		}else{
			arr[mergedIndexCounter] = rightArr[rightIndexCounter];
			rightIndexCounter++;
		}
		mergedIndexCounter++;
	}
	//merge when there are some remaining in leftArray
    while (leftIndexCounter<sizeOfLeftArr)
    {
        arr[mergedIndexCounter]=leftArr[leftIndexCounter];
        leftIndexCounter++;
        mergedIndexCounter++;
    }
    // Merge when there are some remaining in right

    while (rightIndexCounter<sizeOfRightArr)
    {
        arr[mergedIndexCounter]=rightArr[rightIndexCounter];
        rightIndexCounter++;
        mergedIndexCounter++;
    }
}
void mergeSort(int arr[],int begin,int end){
    if (begin>=end)
    {
        return;
    }
    int mid=(begin+end)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
    
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={11,10,3,7,5,6};
    cout<<"Unsorted is: "<<endl;
    print(arr,6);
    mergeSort(arr,0,5);
    cout<<"Sorted is : "<<endl;
    print(arr,6);

    return 0;
}