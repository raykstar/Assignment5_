#include<stdio.h>

void display(int *A, int n){
 for(int i=0;i<n;i++){
  printf("%d  ",A[i]);
  }
  printf("\n");

}


void insertion(int *a,int n){
    int i,j,temp;

    for(i=0;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]!=temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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

insertion(A,n);
printf("The sorted array is: ");
display(A,n);
}
