#include <stdio.h>
#include <stdlib.h>
 
int main( void )
{
  int i,n;
  char * buffer;
 
  printf ("Wieviele Sterne? ");
  scanf ("%d", &i);
 
  buffer = (char*) malloc( 1 + i );  // Am Ende des C-Strings wird zusätzlich 
                                     // ein Nullbyte als Endmarkierung benötigt
  if( buffer != NULL )
  {
    buffer[i]='\0';                  // Nullbyte setzen
 
    while( i-- )
      buffer[i] = '*';
 
    printf( "%s\n", buffer );
    free( buffer );                  // Wichtig! Speicher wieder freigeben
 
    return EXIT_SUCCESS;
  }
 
  return EXIT_FAILURE;
}

