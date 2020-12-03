#include <stdio.h>
#include <stdlib.h>

struct cvor{
int broj;
struct cvor* next;
};

void insertNodeAtEnd(int data,struct cvor** head)
{
    struct cvor *newNode, *temp;

    newNode = (struct cvor*)malloc(sizeof(struct cvor));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    if(*head==NULL){
         newNode->broj = data;
        *head=newNode;
        (*head)->next = NULL;
        return;
    }
    else
    {
        newNode->broj = data;
        newNode->next = NULL;

        temp = *head;


        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}
void deleteNode(struct cvor** head_ref, int key)
{


  struct  cvor* temp = *head_ref;
  struct  cvor* prev = NULL;


    if (temp != NULL && temp->broj == key)
    {
        *head_ref = temp->next;
       free(temp);
        return;
    }


    while (temp != NULL && temp->broj != key)
    {
        prev = temp;
        temp = temp->next;
    }


    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}

int main(){
struct cvor* lista;
insertNodeAtEnd(4, &lista);
insertNodeAtEnd(2, &lista);
deleteNode(&lista, 4);
}

