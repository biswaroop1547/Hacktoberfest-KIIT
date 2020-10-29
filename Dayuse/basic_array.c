#include<stdio.h>
#include<stdlib.h>
void insert(int [], int, int);
void delete(int [], int, int);
int toSearch(int [], int, int);
void sort(int [], int );


int main() {
    int i, n, pos, element, search, arr[10];
    printf("Give array size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Given array is: \n");
    for(i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    insert(arr, n, pos);
    delete(arr, n, pos);
    printf("\nEnter element you want to search: ");
    scanf("%d",&search);
    int z = toSearch(arr, search, n);
    printf("\nElement found at position %d\n", z);
    sort(arr, n);
    return 0;

}
void insert(int a[], int n, int pos) {
    int new_element, max = 10;
    printf("\nEnter element and its position: ");
    scanf("%d %d", &new_element, &pos);
    if(pos > max) {
        printf("Overflow");
    }
    for(int i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
        a[pos - 1] = new_element;
        printf("New array is: \n");
        for(int i = 0; i < n + 1; i++){
            printf("%d\t", a[i]);
        }
}
void delete(int a[], int n, int pos) {
    printf("\nEnter position from where to delete element: ");
    scanf("%d", &pos);
    if(pos >= n +1){
        printf("\nCannot perform deletion\n");
    }
    else{
        for(int i = pos - 1 ; i < n; i++ ){
            a[i] = a[i + 1];
        }
        printf("Resultant array is \n");
        for(int i = 0; i < n; i++){
            printf("%d\t", a[i]);
        }
    }
}
int toSearch(int a[], int element, int n){
    int i, found = 0;
    for(i = 0; i < n; i ++){
        if(a[i] == element){
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
    return  i + 1;
    }
    else
    {
        printf("\nElement not found");
    }
           
}
void sort(int a[], int n) {
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a [j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nThe sorted array is: \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
}