## Description
The C library function **void *calloc(size_t nitems, size_t size)** allocates the requested memory and returns a pointer to it. The difference in **malloc** and **calloc** is that **malloc does not set the memory to zero where as calloc sets allocated memory to zero**.

calloc() reserviert eine Array von Speicherblöcken. Hierbei wird die Größe eines einzelnen Speicherblocks angegeben, sowie die Anzahl der benötigten Speicherblöcke. Die Speicherblöcke liegen entsprechend eines Arrays direkt hintereinander. Es wird also die Anzahl der Blöcke mit der Größe eines einzelnen Blocks multipliziert und entsprechend Speicher mit malloc() angefordert. Zusätzlich wird der Speicherbereich initialisiert, so dass alle Bytes auf 0 gesetzt sind. Der Zeiger auf das erste Byte wird zurückgegeben oder NULL, falls kein Speicher alloziiert werden konnte.

## Declaration
```c
	void * calloc (size_t num, size_t size);
```

## Return Value

This function returns a pointer to the allocated memory, or NULL if the request fails.

## Example
```c
#include <stdlib.h>
int main( void )
{
  int * integers;
  integers = (int *)calloc( 10, sizeof( int ) ); // Ein Array von 10 Datensätzen in der Größe von jeweils einem Integers anfordern
  if( integers )
  {
    /* .... */
    free( integers );
    return EXIT_SUCCESS; 
  }
  return EXIT_FAILURE;
}
```
