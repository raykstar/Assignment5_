#include<stdio.h>

void display(int * a,int n){
 int i;
 for(i=0;i<n;i++){
  printf("%d  ",a[i]);
 }
 printf("\n");
}

int search(int data,int *a,int size){
    for(int i=0;i<size;i++){

        if(a[i]==data){
            return i+1;
        }
       
    }
    return -1;
}

int main(){
     printf("Enter the size of the array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:  ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("You've  entered: ");
    display(a,n);

    printf("Enter data to serach:  ");
    int data;
    scanf("%d",&data);
    printf("Searching....\n");

    int pos=search(data,a,n);

    if(pos>=0)
    printf("%d was first found at position %d\n",data,pos);
    else
    printf("Data not found!!\n");

}
