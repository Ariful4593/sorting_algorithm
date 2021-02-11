#include<stdio.h>
void selection_sort(int A[])
{
    int i,j,index_min,temp;
    for(i = 0; i < 6; i++){
        index_min = i;
        for(j = i+1; j < 6; j++){
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }

        if(index_min != i){
            temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}
int main()
{
    int ara[] = {9,4,5,2,6,8};
    selection_sort(ara);
    for(int i = 0; i < 6; i++){
        printf(" %d ",ara[i]);
    }
}
