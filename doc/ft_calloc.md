## Description
The C library function **void *calloc(size_t nitems, size_t size)** allocates the requested memory and returns a pointer to it. The difference in **malloc** and **calloc** is that **malloc does not set the memory to zero where as calloc sets allocated memory to zero**.


## Declaration
```c
	void * calloc (size_t num, size_t size);
```

## Return Value

This function returns a pointer to the allocated memory, or NULL if the request fails.

