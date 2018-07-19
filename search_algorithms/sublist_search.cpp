// searches for one linked list inside other
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void push(struct Node** head_ref, int key)
{
  struct Node* temp = NULL;
  temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = key;
  temp->next = *head_ref;

  *head_ref = temp;
}

bool searcher(struct Node* l1, struct Node* l2)
{
  struct Node* ptr1;
  struct Node* ptr2;

  ptr1 = l1;
  ptr2 = l2;

  if(ptr1 == NULL && ptr2 == NULL)
    return true;

  if(ptr1 == NULL || ptr1 != NULL && ptr2 == NULL)
    return false;

  while(l2 != NULL)
  {
    ptr2 = l2;

    if(ptr2 == NULL)
      return false;

    while(ptr1 !=  NULL)
    {
      if(ptr2 == NULL)
        return false;

      else if(ptr1->data == ptr2->data)
      {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
      }

      else
        break;
    }

    if(ptr1 == NULL)
      return true;

    ptr1 = l1;
    l2 = l2->next;
  }
}

int main(void)
{
  struct Node* head1 = NULL;

  push(&head1, 1);
  push(&head1, 2);
  push(&head1, 3);
  push(&head1, 4);
  push(&head1, 5);

  struct Node* head2 = NULL;

  push(&head2, 1);
  push(&head2, 2);
  push(&head2, 4);

  cout<<searcher(head2, head1)<<'\n';

  return 0;
}
