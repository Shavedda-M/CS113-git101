//6210402461 Peeradon Achineethongkham
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

int find_position(struct node **head, struct node **tail, int input){
  int count, type;
  struct node *tmp = *head;
  for(count = 1; tmp; count++){
    if(tmp -> data >= input && count == 1){
      type = 1;
      return type;
    }else if(tmp -> data <= input && tmp -> next != NULL){
      tmp = tmp -> next;
      if (tmp -> data >= input){
        type = 2;
        return type;
      }else{
        continue;
      }
    }else if(tmp -> next == NULL){
      type = 3;
      return type;
    }
    tmp = tmp -> next;
  }
}

void push_node(struct node **head_ref, int input){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = input;
  new_node->next = *head_ref;
  *head_ref = new_node;
}

void insert_node(struct node *prev_node, int new_data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void append_node(struct node **head_ref, struct node **tail_ref, int input){
  (*tail_ref)->next = (struct node *)malloc(sizeof(struct node));
  *tail_ref = (*tail_ref)->next;
  (*tail_ref)->data = input;
  (*tail_ref)->next = NULL;
}

void queue_list(struct node **head, struct node **tail, int input){
  if (*head == NULL)
    *head = *tail = (struct node *)malloc(sizeof(struct node));
  else {
    (*tail)->next = (struct node *)malloc(sizeof(struct node));
    *tail = (*tail)->next;
   }
   (*tail)->data = input;
   (*tail)->next = NULL;
}

int main(){ 
  int input, i = 1, type;
  struct node *head=NULL, *tail=NULL, *tmp, *tmp2;
  while (scanf("%d", &input) == 1) {
    if(input <= -1){
      break;
    }
    if (i == 1){
    queue_list(&head, &tail, input);
    }else{
      type = find_position(&head, &tail, input);
      if (type == 1){
        push_node(&head, input);
      }else if(type == 2){
        for(tmp = head, tmp2 = head; tmp; tmp = tmp -> next){
          if (tmp -> data <= input && tmp -> next != NULL){
            tmp2 = tmp2 -> next;
            if (tmp2 -> data >= input){
              break;
            }
            continue;
          }
          tmp2 = tmp2 -> next;
        }
        if(tmp){
          insert_node(tmp, input);
        }
      }else if(type == 3){
        append_node(&head, &tail, input);
      }
    }
    i++;
  }
  for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}