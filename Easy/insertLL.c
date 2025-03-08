#include <stdio.h>

#define MAX_VAL 4

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int val);

int main () {

    head = NULL;
    printf("Enter Node: \n");
    int val;

    for(int i=0; i<MAX_VAL; i++){
        scanf("%d", &val);
        insert(val);
    }
    return 0;
}

void insert(int val) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node*));
    node->data = val;
    node->next = NULL;
}