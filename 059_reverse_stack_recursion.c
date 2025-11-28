#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void insertAtBottom(int x) {
    if (isEmpty()) {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack() {
    if (isEmpty()) return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

int main() {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        push(x);
    }

    reverseStack();

    // print stack from top to bottom
    while (!isEmpty()) {
        printf("%d ", pop());
    }
    return 0;
}
