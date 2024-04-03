#include<iostream>
using namespace std;

void display(int *array, int size)
{

    for(int i=0; i< size; i++)
    {
        cout<<array[i]<<"\t";
    }

}
void heapify(int *array, int size, int i)
{

    int largest= i;
    int left = 2*i +1;
    int right = 2*i +2;

    if(left< size && array[left] > array[largest])
    {

        largest=left;

    }

    if
    (right < size && array[right] > array[largest])
    {
        largest=right;
    }

    if(largest != i)
    {
        swap(array[i], array[largest]);

        heapify(array, size, largest);
    }

}
void heapSort(int *array, int size)
{

    for(int i = size / 2 - 1; i >=0; i--)
    {

        heapify(array, size, i);
    }


    for(int i = size-1; i>=0; i--)
    {
        swap(array[0], array[i]);
        heapify(array,i, 0);
    }


}
int main()
{
    int n;
    cout<<"Entre Number of Elements: ";
    cin>> n;

    int arr[n];
    cout<<"Entre Your All Element: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before Sorting: ";
    display(arr, n);

    heapSort(arr, n);

    cout<<"After Sorting : ";
    display(arr, n);



}
