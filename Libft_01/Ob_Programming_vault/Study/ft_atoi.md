## Descripion 

The C library function **int atoi(const char *str)** converts the string argument **str** to an integer (type int).

atoi konvertiert einen ASCII-String in eine (vorzeichenbehaftete) Integerzahl (ASCII to integer - atoi).
Zunächst werden sämtliche Whitespaces (Leerzeichen, Tabs) übersprungen, bis die ersten Ziffern gefunden werden. Es darf ein + bzw. - der Zahl vorangestellt sein.
Werden Zeichen gefunden, die nicht interpretiert werden können, so wird die Konvertierung abgebrochen und die bisher interpretierte Zahl zurückgegeben.
Gültige Strings wären z.B. „ 123“, „+1232“, „-42“.

## Declaration
```c 
	int atoi(const char *str)
```
## Return Value

This function returns the converted integral number as an int value. If no valid conversion could be performed, it returns zero.