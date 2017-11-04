#include<stdio.h>

void display(int *A, int n){
 for(int i=0;i<n;i++){
  printf("%d  ",A[i]);
  }
  printf("\n");

}

void bubble(int *a, int n){
    int i,j,temp;

    for(i=0;i<n-1;i++){

        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
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
printf("Sorting...");

bubble(A,n);
display(A,n);
}
