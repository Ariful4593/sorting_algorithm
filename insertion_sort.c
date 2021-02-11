#include<stdio.h>
void insertion_sort(int A[])
{
    int i,j,item;
    for(i = 0; i < 5; i++){
        item = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > item){
            A[j+1] = A[j];
            j = j - 1;
        }
        A[j+1] = item;
    }
}
int main()
{
    int ara[] = {5,2,3,1,4};
    insertion_sort(ara);
    for(int i = 0; i < 5; i++){
        printf(" %d ", ara[i]);
    }
    return 0;
}
