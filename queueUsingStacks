#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef struct{
    int arr[MAX];
    int top, count;
}stack;

void push(stack * s, int val){
    if(s->count >= MAX){
        printf("Full\n");
    }
    else{
        s->arr[++s->top] = val;
        s->count++;
    }
}

int pop(stack *s){
    int x=-1;
    if(s->count==0){
        printf("Empty\n");
    }
    else{
        x = s->arr[s->top--];
        s->count--;
        }
    return x;
}

int deq(stack *s){
        stack *s1 =(stack *)malloc(sizeof(stack));
        s1->top=-1; s1->count =0;

        int x=-1;
        if(s->count!=0){
        while(s->count!=1){
            x =pop(s);
            push(s1,x);
        }

        x = pop(s);

        while(s1->count!=0){
            int y =pop(s1);
            push(s,y);
        }
        }

        return x;
}

void disp(stack *s){
  printf("FRONT--> ");
  for(int i=0;i<=s->top;i++){
      printf("%d  ",s->arr[i]);
 }
 printf("-->REAR\n");
}


int main(){
        stack *s =(stack *)malloc(sizeof(stack));
        s->top=-1; s->count =0;
        while(1){
            int c=1,x;
            printf("Choice:: ");
            scanf("%d",&c);

            switch(c){
                case 1: printf("Value:: ");
                        scanf("%d",&x);
                        push(s,x);
                        disp(s);
                        break;

                case 2: x=deq(s);
                        if(x!=-1)
                        printf("%d got deleted!\n",x);
                        break;

                case 3: disp(s);
                        break;

                default: printf("Invalid Choice\n\n");
                         break;
            }
        }
}
