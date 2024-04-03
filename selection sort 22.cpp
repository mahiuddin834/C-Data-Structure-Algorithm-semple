#include<iostream>
using namespace std;

void display(int *array, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<< array[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *array, int size)
{

    int i, j, imin;
    for(i=0; i<size-1; i++)
    {
        imin=i;
        for(j=i+1; j<size; j++)
        {
            if (array[j]< array[imin])
            {
                imin=j;
            }

        }

        swap(array[i], array[imin]);
    }


}

int main()
{
    int n;
    cout<<"Entre Number of Elements: ";
    cin >> n ;

    int arr[n];
    cout<<"Entre Your Elements"<< endl ;


    for (int i=0; i< n; i++)
    {
        cin>> arr[i];
    }

    cout<<"Array Before Sorting: ";
    display(arr, n);

    selectionSort(arr, n);
    cout<<"Array After Sorting: ";
    display(arr, n);


}
