#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n, k=0, A[100], i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(i=0; i<n; i++){
        if(A[i]==0){
            swap(&A[i], &A[k]);
            k++;
        }
    }
    for(i=k; i<n; i++){
        if(A[i]==1){
            swap(&A[i], &A[k]);
            k++;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
