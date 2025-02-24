#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert_node(int x);
void PrintAll();

int main() {
    head = NULL;
    printf("How many Nodes? : \n");
    int n, x;
    scanf("%d \n", &n);
    for (int i=0; i<n; i++){
        printf("Enter the node data: \n");
        scanf("%d", &x);
        insert_node(x);
    }
    PrintAll();
    return 0;
}

void insert_node(int x) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = NULL;
    new_node->next = head;
    head = new_node;

}

void PrintAll() {

    struct Node* temp = head;

    while( head != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

}