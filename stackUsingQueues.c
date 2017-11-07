#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct{
    int arr[MAX];
    int front, rear, count;
}queue;

void enq(queue * q, int val){
    if(q->count >= MAX){
        printf("Full\n");
    }
    else{
        if(q->front == -1) q->front++;
        q->arr[++q->rear] = val;
        q->count++;
    }
}

int deq(queue *q){
    int x=-1;
    if(q->count==0){
        printf("Empty\n");
    }
    else{
        x = q->arr[q->front++];
        q->count--;
        if(q->front>q->rear){
            q->front=-1;
            q->rear=-1;
        }
    }
    return x;
}

int pop(queue* q){
        queue *q1 =(queue *)malloc(sizeof(queue));
        q1->front =-1;
        q1->rear =-1;
        q1->count =0;

        int x;

        while(q->count!=1){
            x =deq(q);
            enq(q1,x);
        }

        x = deq(q);

        while(q1->count!=0){
            int y =deq(q1);
            enq(q,y);
        }

        return x;
}

void disp(queue *q1){
  for(int i=q1->front;i<=q1->rear && q1->rear!=-1;i++){
      printf("%d  ",q1->arr[i]);
 }
 printf("-->TOP\n");
}


int main(){
        queue *q =(queue *)malloc(sizeof(queue));
        q->front =-1;
        q->rear =-1;
        q->count =0;
        while(1){
            int c=1,x;
            printf("Choice:: ");
            scanf("%d",&c);

            switch(c){
                case 1: printf("Value:: ");
                        scanf("%d",&x);
                        enq(q,x);
                        disp(q);
                        break;

                case 2: x=pop(q);
                        printf("%d got deleted!\n",x);
                        break;

                case 3: disp(q);
                        break;

                default: printf("Invalid Choice\n\n");
                         break;
            }
        }
}
