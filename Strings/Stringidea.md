
# String in C 

In C string is array of the character ending with null character(`\0`).

#### Initializing a String : 

```c
char str[] = 'Hello world';
``` 
Another way to initializing string .
```c
char str[] = {'H','e','l','l','o',' ','w','o','r','l','d'};
``` 
#### How is String is stored in Memory
| Character | H | e | l | l | o | | w | o | r | l | d |\n |
|-----------|---|---|---|---|---|-|---|---|---|---|---|----|
| Index | 0|1|2|3|4|5|6|7|8|9|10|11|

## Taking String input from user in C 

We can take input in C using `scanf()` and `gets()` .


```c
#include<stdio.h>

int main(){
    char name[30];
    printf("Enter your name : ");
    scanf("%s", &name);

    printf("Hello %s",name);
    return 0;
}
```
We can also specify number of character that can be enter in scanf.

```C
scanf('%4s',&name); // It will enter only 4 character
```

But in the above code if we enter our **Full Name** . For Example :

```c
Enter your name : Rohan Das
```
It will consider only **Rohan** not **Rohan Das**.

To solve this problem we use `gets()`.

```c
#include<stdio.h>

int main(){
    char name[30];
    printf("Enter your name : ");
    gets(name);

    printf("Hello %s",name);
    return 0;
}
```
But with this function we have one more problem that is it will try to store the value in the variable even if the length is longer than that of given lenght of an array which will cause the situation of **OverFlow**.

## Print the String

We can print the string in C throught `printf()` and `puts()`.

```c
#include<stdio.h>

int main(){
    char name[30] = 'My name is Vidya';
    
    printf("Hello %s \n",name);
    printf("Hello %2s \n",name);
    printf("Hello %s \n",&name[3]);
    printf("Hello %10.5s \n",name);
    printf("Hello %2.5s \n",name);
    return 0;
}
```
If we just have to print string on the console.

```c
#include<stdio.h>

int main(){
    char name[30] = 'My name is Harry';

    puts(name);
    return 0;
}
```
## Finding Length of string 

***Let check your understanding about string. WAP to calculate the length of the string using while loop***

-----

We can find length of a string by using `strlen()` in `string.h` header file.

```c
#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    printf("Enter your name : ");
    scanf("%s", &name);
    int count = strlen(name);
    printf("The length of the string : ",count);
    return 0;
}
```

## Adding two strings

***Let check your understanding about string. WAP to add two strings in C.***

---

We can add two string using `strcat()` in `string.h` header file.

```c
#include<stdio.h>
#include<string.h>

int main(){
    char destinationString[30];
    printf("Enter your name : ");
    scanf("%s", &name);
    char sourceString = ' Add';
    strcat(name);
    printf("The new string is : ",destinationString);
    return 0;
}
```

