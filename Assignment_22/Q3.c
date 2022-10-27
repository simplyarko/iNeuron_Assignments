#include<stdio.h>
#include<stdlib.h>

int* declare(int n){
    int *ptr = (int*)malloc(n*sizeof(int));

    return ptr;
}

int main(){
    int n;
    printf("Enter number of data values you would like to enter: ");
    scanf("%d", &n);
    int *arr = declare(n);

    int sum = 0;
    for(int i=0; i<n; i++){
        printf("Enter data value %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    free(arr);

    printf("Sum of %d data values = %d", n, sum);

    return 0;

}