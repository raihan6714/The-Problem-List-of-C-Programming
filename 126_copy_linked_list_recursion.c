#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* newNode(int data) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = NULL;
    return n;
}

Node* copyList(Node *head) {
    if (head == NULL) return NULL;
    Node *n = newNode(head->data);
    n->next = copyList(head->next);
    return n;
}

void printList(Node *head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, x;
    scanf("%d", &n);
    Node *head = NULL, *tail = NULL;

    for (int i=0;i<n;i++) {
        scanf("%d", &x);
        Node *nn = newNode(x);
        if (!head) head = tail = nn;
        else { tail->next = nn; tail = nn; }
    }

    Node *copy = copyList(head);
    printList(copy);
    return 0;
}
