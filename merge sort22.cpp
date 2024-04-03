#include<iostream>
using namespace std;

//for think
void swapping(int &a, int &b)       //swap the content of a and b
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int *array, int size)
{
    for(int i=0; i<size ; i++)
    {

        cout<<array[i]<< " ";

    }
    cout<<endl;
}


void merge( int *array, int left, int main, int right)
{

    int i, j, k, nleft, nright;

    nleft= main-left+1;
    nright =right - main;

    int left_arr[nleft], right_arr[nright];

    for( i=0; i<nleft; i++)
    {
        left_arr[i]= array[left+i];

    }

    for (j=0; j<nright; j++)
    {

        right_arr[j]= array[main+1+j];
    }

    i=0;
    j=0;
    k=left;

    while(i < nleft && j < nright)
    {
        if(left_arr[i]<=right_arr[j])
        {
            array[k]= left_arr[i];
            i++;
        }
        else
        {
            array[k]=right_arr[j];
            j++;

        }
        k++;
    }

    while(i<nleft)
    {
        array[k]= left_arr[i];
        i++;
        k++;
    }

    while(j<nright)
    {
        array[k]= right_arr[j];
        j++;
        k++;
    }

}

void mergeSort(int *array, int l, int r)
{
    int m;
    if(l < r)
    {
        int m = l+(r-l)/2;
        // Sort first and second arrays
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        merge(array, l, m, r);
    }
}

int main()
{

    int n;
    cout << "Entre the number of element: ";
    cin >> n;
    int arr[n];

    cout << "Entre your"<< n << "elemrnts:"<< endl;

    for(int i=0; i<n; i++)
    {

        cin >> arr[i];
    }

    cout<<"Array before Sorting:  ";

    display(arr, n);

    mergeSort(arr, 0, n-1);

    cout<<"Array after Sorting : ";
    display(arr, n);


}
