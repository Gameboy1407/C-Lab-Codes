#include <stdio.h>

int stack[10], top=-1;

void push(int x){
    stack[++top]=x;
}

void pop(){
    printf("Popped = %d", stack[top--]);
}

int main(){
    push(10);
    push(20);
    pop();
}