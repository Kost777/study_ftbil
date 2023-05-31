#include "libft.h"

void printlst_aff(t_list *lst)
{
  int count;
  count = 1;

  while (lst != NULL && count < 16)
  {
    printf("Listeintrag ret: %d -- %s \n", count ,(char *)lst->content);
    count++;
    lst = lst->next;
  }
}

void ft_lstadd_back(t_list **lst, t_list *new)
{   
    if (new == NULL)
        return;

    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    t_list *temp = *lst;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new;
    new->next = NULL;
}
