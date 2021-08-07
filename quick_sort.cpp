#include<bits/stdc++.h>

using namespace std;

int partition_array(int a[], int low, int high)
{
    int pivot = a[high];
    int i, j, t;
    for(i = low - 1, j = low; j < high; j++){
        if(a[j] < pivot){
            i++;
            t = a[j];
            a[j] = a[i];
            a[i] = t;
        }
    }

    t = a[high];
    a[high] = a[i + 1];
    a[i + 1] = t;

    return i + 1;
}

void quick_sort(int a[], int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int p;
    p = partition_array(a, low, high);

    quick_sort(a, low, p - 1);

    quick_sort(a, p + 1, high);
}

int main()
{
    int i, n = 8;
    int a[] = {1,5,6,3,5,8,7,2,9};

    quick_sort(a, 0, n);

    for(int i = 0; i <= n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
