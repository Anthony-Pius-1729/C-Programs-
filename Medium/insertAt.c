#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert_Node(int n);
void insert_NodeAt(int x, int y);
void Print();

int main() {
    head = NULL;
    int n, x;
    printf("Enter Number of nodes \n");

    scanf("%d", &n);

    for (int i= 0; i<n; i++){
            printf("Enter Node: \n");
            scanf("%d", &x);
            insert_Node(x);
    }
    insert_NodeAt(100, 4); //data, pos
    Print();
    return 0;
}

void insert_Node(int n) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
    head = temp;
}

void insert_NodeAt(int x, int y) {
    int count = 1;
    struct Node* ptr = head;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    while( ptr != NULL) {

        ptr = ptr->next;
        count++;

        if (count == y) {
            ptr->next = new_node;
            new_node->data = x;
            new_node->next= NULL;  
        }
        // if (count < y) {
        //     count++;
        // }
        // else if (count > y){
        //     count--;
        // }
        // else{

        //     ptr->next = new_node;
        //     new_node->data = x;
        //     new_node->next= NULL;  
        // }

    }

}

void Print() {

    struct Node* temp2 = head;
    while(temp2 != NULL){
        printf("%d->", temp2->data);
        temp2 = temp2->next;
    }
    printf("NULL");

}

