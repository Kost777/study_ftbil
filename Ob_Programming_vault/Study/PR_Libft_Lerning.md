
# KW 19


## Thuesday - 6h 
- What ist need to '#include <stddef.h>'
```c
size_t
```
- memset -- load a void variable 
```c
..... memset (void *str, ...)
{
unsigned char *buc;
buc = (unsigned char *)str;
}
```

## Wensday 
I have been creating the makefile 
- My goal was it to seperate it in a extra file -- the object files 
- I not really understand the part 
- ```
```makefile
$(OBJS_DIR)%.o : %.c libft.h
@mkdir -p $(OBJS_DIR)
@echo "Compiling: $<"
$(CC) $(CC_FLAGS) -c $< -o $@
```
- !!! for EXAM make it easyer 
	- try to create your make file 
- Important to no 'ar -rcs ...' make the arcive file
- *.a is normal the arcive file 

### What i does't understand in the makefile
-> cleaning Object in the dictonary 
	why i could not use 'rm -f %.c'
```
clean:
	rm -rf $(OBJS_DIR)
	rm -f $(SRCS_P1:%.c=%.o)
```
-> Why i need the *.a


## Friday
- I want test the function ft_memset():
```c
void *ft_memset(void *str, int ch, size_t n)
```
-> but i give back to variale so i need this way to test it 
```c
char str2[] = "42Berlin";
ft_memset(str2, '$', 2);
printf("Test: \"42Berlin\"; char: $; size: 2 |%s| \n", str2);
```

- bzero i have'n t seen anysing of the resulat during printing out 
	```c
	bzero(buffer, 2);
	printf("%s\n", buffer);
```
-> The solution was *buffer + 2*
```c
	bzero(buffer, 2);
	printf("%s\n", buffer + 2);
```
 Becouse it was write down the a *\0* at the first byte of Charter and so the stopped durring printing out. 

- Using 
  ```c
  mem = (unsigned char *)dest;
```
-> declaration must be pointed:
```c
unsigned char *mem;
```

- ft_memcpy i using 
	```c
	mem = (unsigned char *)dest;
```
    and i get a error during comparing 
```c
	mem[count] = src[count];
```
-> ft_memcpy is declarated 
```C
	void *ft_memcpy(void *dest, const void *src, size_t n)
```
 so i needed also to use a second variable 
 ```c
	unsigned char *mem_dest;
	const unsigned char *mem_src;
	mem_dest = (unsigned char *)dest;
	mem_src = (const unsigned char *)src;
```

Becouse of the void declaration of the function is also important to use it in a special way with declaration of varialbe before 

```c
const char src_memcpy[50] = "42Berlin";
char dest_memcpy[50] = "EVALUATION!!";
ft_memcpy(dest_memcpy, src_memcpy, 2);
printf("Test: \"42Berlin\"; src:\"EVALUATION\" size: 2 |%s| \n", dest_memcpy);
```

- Difference between memmove an memcopy 
	--> memcopy save the memoryblock before and there is no Problem with overlapping? 
    - Overlapping means 
    ```c
    char str[] = "Start Stop";
	memcpy(str, str + 2, 3 * sizeof(char);
	//Dest: "Strart Stop";
	//Mem: [--]
	//src: "art"
	//Mem:    [--]
```
[Look the YT movie](https://www.youtube.com/watch?v=nFl1cNXk85s)

Compare it both are the same Code 
```c
if (s < d)
{
	while(n--)
		d[n] = s[n];
	return (dest);
}
while (count < n)
{
	d[count] = d[count];
	count++;
}
```

--
```c
if (s < d)
{
while (len--)
	*(d + len) = *(s + len);
return (dst);
}
while (len--)
	*d++ = *s++;
```

- git VS github 
	- git is at your local maschine 
	- github is a cloudservice
	-


## Saturday
- *strlcpy*
	- Cut at the End forgotten 
```c
if (size < len_src)  //Abbruchbediungen 
	dest[size - 1] = '\0';
else if (size != 0)  //Allgemeine Bedingung
	dest[count] = '\0';
return (len_src);	
```
- strchr ()
	- Rueckgabe beachten einfach von da wo es los geht! Keine komplizierten konstruckte 
```c
mem = (char *)str + count;
```

- While 
	- Mache solange etwas nicht erfuelt ist ! 

- ft_memchr 
	- function declaration return void! so you have to set void for return 
```c
void *memchr(const void *str, int c, size_t n)
```

RETURN 
```c
return ((void *)(s + i))
```
If is given 'const' -> i have to use 'const' ! 
```c
mem = (const char *)str;
```

# KW 20 
## Monday 
- strnstr Diese Zeilen  
```c
while (ret[count_src + count_search] != '\0' && search[count_src] != '\0' && (count_src + count_search) < size_cmp)
{
	if (ret[count_src + count_search] == search[count_search]
	&& search[count_search] != '\0')
	{
		count_search++;
		if (size_search == count_search && search[count_search] == '\0')
			return (ret + count_src);
		}
	else
		break;
}
```
Können auch so aussehen --> Einsparung der Codezeilen
```c
while (ret[count_src + count_search] != '\0' && search[count_src] != '\0' && (count_src + count_search) < size_cmp
&& ret[count_src + count_search] == search[count_search])
{
count_search++;
if (size_search == count_search && search[count_search] == '\0')
	return (ret + count_src);
}
```

- ft_atoi --> use your functions --> ex. ft_isdigit()
```c
while (str[count] != '\0' && ft_isdigit(str[count]))
```


- ft_calloc --> use your functions --> ex. ft_bzero() --> for setting all Bytes to 0
```c
ft_bzero (ret, num);
``` 
## Thusday
- ERROR - „free(): invalid pointer“ 
	- Die angezeigte Fehlermeldung „free(): invalid pointer“ tritt normalerweise auf, wenn Sie versuchen, einen Speicherblock freizugeben, der nicht dynamisch zugewiesen wurde oder bereits freigegeben wurde.
	- You initially allocate memory for `mem` using `strdup`, but then later modify it using `memchr`. This modification changes the original pointer, causing the invalid pointer error when you try to free it.
```c
free(mem);
```

The issue with freeing `mem` at the end of the `ft_split` function is that you're freeing a pointer that has been modified and is no longer pointing to the dynamically allocated memory.

- Grossen misst habe ich bei strlcpy gebaut --> Anschauen vor 17.05. --> selbst fixen des Problemes 

# KW21
## Monday

- Francinette wollte nicht ft_strchr und ft_strrchr compilen 
- Fehler lag im *const* -> Weglasen -> Definition von Const!
```c
const char ft_strchr(...)
```

- ft_strncmp 
--> War so weit richtig aber es war wichtig das ich die Variablen einme Memory Übergeben habe ***mem1 = (unsigned char *)str1;***  ansttt alles mit ***str*** zu tun.
```c
int ft_strncmp(const char *str1, const char *str2, size_t size_cmp)

{
	unsigned char *mem1;
	unsigned char *mem2;
	size_t count;
	mem1 = (unsigned char *)str1;
	mem2 = (unsigned char *)str2;
	count = 0;
	while ((mem1[count] != '\0' || mem2[count] != '\0') && count < size_cmp)
	{
		if (mem1[count] == mem2[count])
			count++;
		else
		{
			return ((mem1[count]) - (mem2[count]));
		}
	}
	return (0);
}
```

- memset --> Compiler fehler da ich noch eine notfall abfrage zur Sicheheit mit intrgriert hatte die musste weg. 
```c
if (n <= 0 || (!mem))
	return (0);
```

- ft_strdup using ***ft_memcpy*** was wrong becouse it is no '\0' at the end 
```c

```
- Calloc Vergessen alle auf '\0' zu setzen -> 'size' bei bzero 
```c 
ft_bzero (ret, num * size);
```

## Wensday 
- itoa 
	- Anzahl der digit Zaheln lassen 
	- malloc das ergebniss 
	- Vorzeichen beachten 
	- recurion function benutzen einfacher als mein Weg
--> 
```c
static void ft_putnbr_stock(long n, char *str, int *count)
{
	if (n > 9)
	{
		ft_putnbr_stock(n / 10, str, count);
		ft_putnbr_stock(n % 10, str, count);
	}
	else
		str[(*count)++] = n + '0';
}
```

Beim Zählen ist die Negative Betrachtung auch wichtig! 
```c
if (n < 0)
{
	n *= -1;
	i++;
}
```

- Strmapi Function to Function 
Example 
```c
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int main()
	{
	int(*fp)(int, int);
	
	fp = add;
	printf("%d\n", fp(10, 20)); //30
	fp = mul;
	printf("%d\n", fp(10, 20)); //200
}
```

Verinfache die malloc nicht erst bilden und dann abfragen? 

```c
if (!(ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
	return (NULL);
```

Ich hattte einen Fehler da ich statt Count eine Zahl eingestzt hatte. 
```c 
ret[count] = f(count, s[count]); // Richtig 
ret[count] = f(1, s[count]); // Falsch
```

- Beim Test von ft_striteri -> Fehler : Speicherzugriffsfehler (Speicherauszug erstellt)
	- Bei ft_strmapi war das kein Problem! 
```c
*str_striteri = "Das ist ein Test"; // Falsch
str_striteri[] = "Das ist ein Test"; // Richtig
 ```


# KW 22
## Thusday 
- Rechericher genau nach warum es nicht ging mit dem fd file 
- Struct Ohne Pointer 
```c
#include <stdio.h>
// Declare a struct called "Person"
struct Person {
    char name[50];
    int age;
    float height;
};
int main() {
    // Declare a variable of type "Person"
    struct Person person1;

    // Assign values to the struct members
    strcpy(person1.name, "John");
    person1.age = 25;
    person1.height = 1.75;
    // Access and print the struct members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);
    return 0;
}
```
- Struckt mit Pointer 
```c 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declare a struct called "Person"
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a pointer to struct "Person"
    struct Person* personPtr;
    // Allocate memory for the struct using malloc
    personPtr = (struct Person*)malloc(sizeof(struct Person));
    // Assign values to the struct members using arrow operator
    strcpy(personPtr->name, "John");
    personPtr->age = 25;
    personPtr->height = 1.75;
    // Access and print the struct members using arrow operator
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);
    printf("Height: %.2f\n", personPtr->height);
    // Free the dynamically allocated memory
    free(personPtr);
    return 0;
}

```

- ft_lstadd_front () Richtig Anweden 
```c
while (count_lstadd_front != 0)
{
new_lstadd_front = ft_lstnew(content_ft_lstadd_front);
ft_lstadd_front(&lst_lstadd_front, new_lstadd_front);
count_lstadd_front--;
}
```

FALSCH 

```c
new_lstadd_front = ft_lstnew(content_ft_lstadd_front);
while (count_lstadd_front != 0)
{
ft_lstadd_front(&lst_lstadd_front, new_lstadd_front);
count_lstadd_front--;
}
```
ERLAERUNG, 

In deinem ursprünglichen Code hattest du folgende Zeile innerhalb der Schleife:

cCopy code

`ft_lstadd_front(&lst_lstadd_front, new_lstadd_front);`

Hier ist `new_lstadd_front` ein Zeiger auf denselben Knoten, der außerhalb der Schleife erstellt wurde. Die Funktion `ft_lstadd_front` fügt diesen Knoten am Anfang der Liste `lst_lstadd_front` hinzu. Jedoch übergibst du in jeder Iteration der Schleife denselben Zeiger `new_lstadd_front` an `ft_lstadd_front`.

Innerhalb der Funktion `ft_lstadd_front` hast du die Zeile:

cCopy code

`new->next = *lst;`

Diese Zeile setzt den `next`-Zeiger des `new`-Knotens auf den aktuellen Kopf der Liste. In der ersten Iteration, wenn die Liste leer ist (`lst_lstadd_front` ist `NULL`), wird `new->next` korrekt zu `NULL`. Jedoch wird in den folgenden Iterationen `new->next` auf dieselbe Adresse wie `new_lstadd_front` gesetzt, was der vorherige Knoten ist, der zur Liste hinzugefügt wurde.

Als Ergebnis zeigt jeder Knoten in der Liste auf denselben `new_lstadd_front`-Knoten, was eine zirkuläre Referenz erzeugt. Diese zirkuläre Referenz führt zu einer Endlosschleife beim Durchlaufen der Liste, da die `next`-Zeiger weiterhin auf denselben Knoten zeigen anstatt mit `NULL` zu enden.

Um dieses Problem zu lösen, musst du innerhalb jeder Schleifeniteration einen neuen Knoten mit `ft_lstnew` erstellen. Dadurch wird sichergestellt, dass jeder Knoten eine eindeutige Speicheradresse hat und das Problem der zirkulären Referenz vermieden wird.


--- 
Function lstlast -> meine Funktion funktioniert nicht
```c
t_list *ft_lstlast(t_list *lst) 
{ 
void *content; 
t_list *ret; 

ret = NULL; 
if (!lst) 
	return(0); 
while (lst->next != NULL) 
{ 
	content = lst->content; 
	lst = lst->next; 
} 
content = lst->content; 
ret->content = content; 
return (ret); }
```

---> Antwort ChatGPT -> Bedenke die Strukt ist ein Verschachtetlte Objekt mit mit jewile eine Struckt so kann ich das Strukt um Ende auslesen 
```c
#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    t_list *ret;
    if (!lst)
        return NULL;
    ret = lst;
    while (ret->next != NULL)
    {
        ret = ret->next;
    }
    return ret;
}
```