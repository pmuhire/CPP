#include <iostream>
using namespace std;

int idx(int *arr, int size)
{
    if (size < 3)
        return -1;
    int leftIndex = 0;
    int rightIndex = size - 1;
    int idx;
    int lSum = arr[leftIndex];
    int rSum = arr[rightIndex];
    for (int k = 1; k < size - 1; k++)
        if (lSum < rSum)
            leftIndex++;
            lSum += arr[leftIndex];
            idx = leftIndex + 1;
        rightIndex--;
        rSum += arr[rightIndex];
        idx = rightIndex - 1;
}
int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << idx(arr, arr_size);
    return 0;
}