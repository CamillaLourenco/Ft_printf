# ft_printf
 recode printf 
 ![ft_printfe](https://user-images.githubusercontent.com/18141491/213243920-6296a52f-b22f-4dbf-a00d-788e9d78dc23.png)




Those are the format identifier's I nedd to recode:

%  | type |
---|------|
%c | character				|
%s | string					|
%p | pointer				|
%d | decimal signed integer	|
%i | integer				|
%u | unsigned integer		|
%x | hex integer (lowercase)|
%X | hex integer (uppercase)|
%% | just the %				|

And those are the flags:

flag| ? |
----|---|
num	| (number between % and the identifier) minimum field width						|
'-' 	| left justify 																	|
'0' 	| field padded with 0's instead of blanks										|
'.' 	| precision															|
'*' 	| indicates that the maximum or minimum field width will be passed as parameter	|

**For %d and %i, the precision is the minimum number of digits to print.**

**For %s, the precision is the maximum field width.**

To be aware:

* flag '0' is ignored when flag '-' is present
* flag '0' is ignored when flag '.' is present (%d e %i)
* flag '0' results in undefined behavior with '%c', '%s' and '%p'
* flag '.' results in undefined behavior with '%c' and '%p'
