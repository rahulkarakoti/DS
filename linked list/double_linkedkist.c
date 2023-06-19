// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next, *prev;
// };
// struct node *head;

// void linkedlist_view()
// {
//     struct node *front;
//     front = head;
//     if (front == NULL)
//     {
//         printf("List is Empty\n");
//         return;
//     }

//     else
//     {
//         printf("\nprinting elements of queue\n");
//         while (front != NULL)
//         {
//             printf("elemnt:%d\n", front->data);
//             front = front->prev;
//         }
//     }
// }

// void enqueue_begining(int val)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = val;
//     if (temp == NULL)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         if (head == NULL)
//         {
//             temp->next = NULL;
//             temp->prev = NULL;
//             head = temp;
//         }
//         else
//         {
//             temp->prev = NULL;
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
// }

// void enqueue_last(int val)
// {
//     // int item;
//     struct node *ptr;
//     // ptr=head;
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = val;
//     if (temp == NULL)
//     {
//         printf("overflow");
//     }
//     else
//     {
//         if (head == NULL)
//         {
//             temp->next = NULL;
//             temp->prev = NULL;
//             head = temp;
//         }
//         else
//         {
//             ptr = head;
//             while (temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = ptr;
//             ptr->prev = temp;
//             ptr->next = NULL;
//         }
//     }
// }

// void dequeue()
// {
//     if (head == NULL)
//     {
//         printf("Underflow\n");
//     }
//     else
//     {
//         struct node *temp = head;
//         if (temp->prev == NULL)
//         {
//             head = NULL;
//         }
//         else
//         {
//             head = temp->next;
//             head->prev = NULL;
//         }
//         free(temp);
//     }
// }

// int main()
// {
//     // head = NULL;
//     enqueue_begining(11);
//     enqueue_begining(121);
//     enqueue_begining(141);
//     enqueue_begining(116);
//     enqueue_begining(131);
//     // enqueue_last(22);
//     // enqueue_last(222);
//     // enqueue_last(2292);
//     linkedlist_view();
//     // dequeue();
//     // linkedlist_view();
// }



#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
};

struct node *head;


void linkedlist_view() {
    struct node *front;
    front = head;

    if (front == NULL) {
        printf("List is Empty\n");
        return;
    } else {
        printf("\nPrinting elements of the queue\n");
        while (front != NULL) {
            printf("Element: %d\n", front->data);
            front = front->prev;
        }
    }
}

void enqueue_begining(int val) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (temp == NULL) {
        printf("Overflow\n");
    } else {
        if (head == NULL) {
            temp->next = NULL;
            temp->prev = NULL;
            head = temp;
        } else {
            temp->prev = NULL;
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
}

void enqueue_last(int val) {
    struct node *ptr;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (temp == NULL) {
        printf("Overflow\n");
    } else {
        if (head == NULL) {
            temp->next = NULL;
            temp->prev = NULL;
            head = temp;
        } else {
            ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }

            ptr->next = temp;
            temp->prev = ptr;
            temp->next = NULL;
        }
    }
}

int main() {
    head = NULL;

    enqueue_begining(11);
    enqueue_begining(121);
    enqueue_begining(141);
    enqueue_begining(131);
    enqueue_begining(116);
    enqueue_last(222);

    linkedlist_view();

    return 0;
}
