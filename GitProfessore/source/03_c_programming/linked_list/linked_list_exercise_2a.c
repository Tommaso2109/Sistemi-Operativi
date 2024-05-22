#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked_list.h"
#include "float_list.h"
#include "list_list.h"

int main(int argc, char** argv) {
  int rows=10;
  int cols=20;
  
  // we populate the matrix
  ListHead head;
  List_init(&head);
  for (int r=0; r<rows; ++r) {
    ListListItem* row_item = (ListListItem*) malloc(sizeof(ListListItem));
    row_item->list.prev=0;
    row_item->list.next=0;
    List_init(&(row_item->head));
    for (int c=0; c<cols; ++c) {
      FloatListItem* col_item = (FloatListItem*) malloc(sizeof(FloatListItem));
      col_item->list.prev=0;
      col_item->list.next=0;
      col_item->info=drand48();
      ListItem* result=
        List_insert(&row_item->head, row_item->head.last, (ListItem*) col_item);

    }
    ListItem* result=
      List_insert(&head, head.last, (ListItem*) row_item);

  }

  ListList_print(&head);

  ListHead marg;
  ListList_marginalize(&marg, &head);
  FloatList_print(&marg);
}
