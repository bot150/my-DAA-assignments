//TOWERS OF HANOI

#include <stdio.h>
#include <math.h>

void moveDisk(char fromPeg, char toPeg, int disk) {
    printf("Move disk %d from %c to %c\n", disk, fromPeg, toPeg);
}

void towersOfHanoiIterative(int n, char from, char aux, char to) {
    int totalMoves = pow(2, n) - 1;

    if (n % 2 == 0) {
        char temp = to;
        to = aux;
        aux = temp;
    }

    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1)
            moveDisk((i & i - 1) % 3 == 0 ? from : aux, (i | i - 1) % 3 == 0 ? to : aux, __builtin_ctz(i) + 1);
        else if (i % 3 == 2)
            moveDisk((i & i - 1) % 3 == 0 ? from : to, (i | i - 1) % 3 == 0 ? aux : to, __builtin_ctz(i) + 1);
        else
            moveDisk((i & i - 1) % 3 == 0 ? aux : to, (i | i - 1) % 3 == 0 ? from : from, __builtin_ctz(i) + 1);
    }
}

int main() {
    int n ;
    scanf("%d",&n);
    towersOfHanoiIterative(n, 'A', 'B', 'C');
    return 0;
}

//IMPLEMTATION OF STACK

#include<stdio.h>
#include<stdlib.h>
#define Max 100
int arr[Max];
int top=-1;
void push(){
    int n;
    printf("Enter the no. :");
    scanf("%d",&n);
    if(top==Max-1){
        printf("Stack is Full");
    }
    else{
        top++;
        arr[top]=n;
        printf("Element is pushed\n");
    }
}
void pop(){
   
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        printf("Element popped %d\n",arr[top]);
        top--;
    }
}
void peak(){
    printf("top element : %d",arr[top]);
}
void display(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main(){
    int n,choice;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("The operations:\n1.PUSH\n2.POP\n3.TOP\n4.DISPLAY\n5.EXIT\n");
    while(1){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    push();
                    break;
            case 2: pop();
                    break;
            case 3: peak();
                    break;
            case 4: display();
                    break;
            case 5: printf("Exiting the program");
                    exit(0);
            default: printf("Invalid Choice\n");
                     break;
                   
        }
    }
    return 0;
}
