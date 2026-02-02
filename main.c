#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"

int main(int argc, const char * argv[]) {
    NodePtr head = NULL;
    NodePtr temp = NULL;
    NodePtr tail = NULL;

    
    for (int i = 1; i < argc; i += 2) {
        if (i + 1 >= argc) break;
        temp = (NodePtr)malloc(sizeof(Node));
        if (temp) {
            temp->id = atoi(argv[i]);     
            strcpy(temp->name, argv[i+1]); 
            temp->next = NULL;

            
            if (head == NULL) {
                head = temp;
            } else {
                tail->next = temp;
            }
            tail = temp;
        }
    }

   
    temp = head;
    while (temp != NULL) {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->next;
    }

   
    temp = head;
    while (temp != NULL) {
        NodePtr nextNode = temp->next;
        
        free(temp);
        temp = nextNode;
    }
    head = NULL;

    return 0;
}