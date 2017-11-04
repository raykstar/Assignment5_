#include<stdio.h>

void display(int *A, int n){
 for(int i=0;i<n;i++){
  printf("%d  ",A[i]);
  }
  printf("\n");

}

void selection(int *a, int n){
     int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min_idx])
            min_idx = j;


        int temp=a[i];a[i]=a[min_idx];a[min_idx]=temp;

        display(a,n);
    }
}


int main(){
int n;
printf("Enter the size of array:  ");
scanf("%d",&n);
printf("Enter the elements:  ");
int i, A[n];
for(i=0;i<n;i++){
   scanf("%d",&A[i]);
}

selection(A,n);
printf("The sorted array is: ");
display(A,n);
}
