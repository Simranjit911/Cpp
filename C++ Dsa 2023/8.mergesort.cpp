#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
    // We have low to mid and mid+1 to high already sorted.
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;

    // Merge the two parts into temp[].
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    // Insert all the remaining values from i to mid into temp[].
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }

    // Insert all the remaining values from j to high into temp[].
    while (j <= high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    // Assign sorted data stored in temp[] to a[].
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}

// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        // Split the data into two half.
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);

        // Merge them to get sorted output.
        Merge(a, low, high, mid);
    }
}

int main()
{
    cout << "\n\n8.W.A.P to sort elements using Merge sort\n";
    int n, i;
    cout << "\nEnter the size: ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        // cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
     cout<<"\nArray before Merge Sort:"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    MergeSort(arr, 0, n - 1);

    // Printing the sorted data.
    cout << "\nSorted Data:\n ";
    for (i = 0; i < n; i++)
        
          cout<< arr[i]<< " ";

    cout << "\n\nThis program is developed by:\nSimranjit Singh\nBCA-Semester-4\nRoll No.219922";
    return 0;
}
