#include<stdio.h>

void display(int *A,int size){
 for(int i=0;i<size;i++){
  printf("%d  ",A[i]);
  }
  printf("\n");

}

void merge(int l, int m, int r,int* a){
    int i,j,k, temp[r-l+1];

    i=l;j=m+1;k=0;

   while (i <= m && j <= r)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= m)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= r)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	for (i = l; i <= r; i++)
	{
		a[i] = temp[i-l];
	}
}
void mergesort(int l,int r,int* a){
    if(l<r){
    int m= (l+r)/2;

    mergesort(l,m,a);
    mergesort(m+1,r,a);

    merge(l,m,r,a);
    }
}

int main(){
    int a[] = {20,5,63,1,82}; //Might not be hard coded. Use a for loop to enter values dynamically
    int size=5;

    printf("The given array is: ");
    display(a,size);

    mergesort(0,size-1,a);
    display(a,size);
}
