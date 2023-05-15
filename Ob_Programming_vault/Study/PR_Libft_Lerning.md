
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

- ft_strdup --> Use copy functionen 
	- It is not so easy to copy -- You have to use Pointer! 
--> WRONG
```c
str = ret; // Wrong 
```
--> RIGHT Use the other function 
```c 
rtn = ft_memcpy(rtn, s1, len);
```
