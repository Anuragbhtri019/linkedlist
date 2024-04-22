#include <stdio.h>
#include <stdlib.h>

struct sll {
    int data;
    struct sll *next;
};

struct sll *head = NULL;

void addbeg() {
    struct sll *newnode ;
    int num;
    newnode = (struct sll*) malloc(sizeof(struct sll));
     printf("Enter the number: ");
    scanf("%d", &num);
    newnode->data = num;
    newnode->next= null;
    if (head == NULL) {
        head=newnode;
        
    }
    else{
        newnode->next=head;
        head=newnode;
    }
   
}

void addend() {
    struct sll *newnode ,*temp;
    int num;
     printf("Enter the number: ");
    scanf("%d", &num);
    newnode = (struct sll*) malloc(sizeof(struct sll));
newnode->data=num;
 newnode->next = NULL;
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
   
   
    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void addsp() {
    struct sll *newnode,*temp;
    int num, pos, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    newnode = (struct sll*) malloc(sizeof(struct sll));
   newnode->data=num;
   newnode->next=NULL;
   if(head==NULL)
   {
    head=newnode;
   }
   else{
    temp=head;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

   }

}

void delbeg() {
     struct sll *temp;
    if (head == NULL) {
        printf("Linked list doesn't exist\n");
        return;
    }
   
    else{
    temp=head;
    head = head->next;
    printf("The deleted item is %d\n", temp->data);
    free(temp);
}
}

void delend() {
    struct sll *temp;
    if (head == NULL) {
        printf("Linked list doesn't exist\n");
        
    }
    else 
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        printf("the deleted item is %d",temp->data);
        free(temp);
    }
    
}

void delsp() {
     struct sll *temp;
       int pos,i;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (head == NULL) {
        printf("Linked list doesn't exist\n");
        return;
    }
    else{
        temp=head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        printf("the deleted item is %d",temp->data);
        free(temp);
    }
   
  

  
    
}

void display() {
    if (head == NULL) {
        printf("Linked list doesn't exist\n");
        return;
    }
    struct sll *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;
     printf("Menu:\n");
        printf("1. Add at beginning\n");
        printf("2. Add at end\n");
        printf("3. Add at specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from specific position\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");
    while(1) {
       
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addbeg();
                break;
            case 2:
                addend();
                break;
            case 3:
                addsp();
                break;
            case 4:
                delbeg();
                break;
            case 5:
                delend();
                break;
            case 6:
                delsp();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
                break;
           
        }
    }
    return 0;
}