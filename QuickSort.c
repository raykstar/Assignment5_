#include<stdio.h>

int n=10;
int A[10];


void array(){
 for(int i=0;i<n;i++)
 scanf("%d",&A[i]);
}

void display(){
 for(int i=0;i<n;i++){
  printf("%d  ",A[i]);
  }
  printf("\n");

}
int quick(int beg, int end){
 int left=beg;
 int right=end;
 int loc=beg;
 while(1){
 while(A[loc]<=A[right] && loc!=right){
  right--;
 }
 if(right==loc)
  return loc;
 else if(A[loc]>A[right]){
       int temp=A[loc];
       A[loc]=A[right];
       A[right]=temp;
       loc=right;
 }

 while(A[left]<=A[loc] && loc!=left){
  left++;
 }
 if(left==loc)
   return loc;
 else if(A[left]>A[loc]){
  int temp=A[left];
  A[left]=A[loc];
  A[loc]=temp;
  loc=left;
 }
 }

}

int main(){
 printf("Enter the elements: ");
 array();
 display();

 int top,beg,end,loc,lower[12],upper[12];
 top=-1;
 if(n>1){
  top++;
  lower[0]=0;
  upper[0]=n-1;
 }
 while(top!=-1){
  beg=lower[top];
  end=upper[top];
  top--;

  loc=quick(beg,end);

  if(beg<loc-1){
   top++;
   lower[top]=beg;
   upper[top]=loc-1;
  }
  if(end>loc+1){
   top++;
   lower[top]=loc+1;
   upper[top]=end;
  }
}
  printf("The sorted array is:  ");
  display();
}
