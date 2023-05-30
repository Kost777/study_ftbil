## Description
Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

## Declaration 
```c
	t_list *ft_lstnew(void *content);
```

## Parameter 
- content: The content to create the node with.
## Return
The new node
