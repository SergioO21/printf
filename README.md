[![](https://www.holbertonschool.com/holberton-logo.png)](https://www.holbertonschool.com/)

# Printf Proyect
This is the first group project at holberton school.

## Objective. ##
This project creates our own version, _printf, of the C library function printf. 



## Description. ##

Print arguments according to a format type.
the formats are as follows.

```
       %c: Prints the character passed as parameter.

       %s: Prints text string finished with null character.

       %d: Converts argument to signed decimal notation and print it.

       %i:  Converts  argument  to unsigned decimal notation and print it.

       %% Prints a single '%' character

       %b Convert the unsigned argument to a binary and print it.

       %u Prints the integer unsigned decimal conversion.

       %o Prints the integer unsigned octal conversion.

       %x Unsigned hexadecimal conversion in lowercase form.

       %X Unsigned hexadecimal conversion uppercase  form.
       
       %R print a string in ROT13.
       
       %r prints the reversed string.
       
```
## Compilations: ##
  You can compile the project "printf" by do the following command:

       gcc -Wall -Werror -Wextra -pedantic * . c (all together) 
       
       
## Examples: ##
```
       1:) _printf("Number:[%d]\n", 762534);
       $ Number:[762534]
       
       2:) _printf("Unsigned:[%u]\n", 2004);
       $ Unsigned:[2004]
       
       3:) _printf("Character:[%c]\n", 'H');
       $ Character:[H]
       
       4:) _printf("String:[%s]\n", "I am a string !");
       $ String:[I am a string !]
```
## Manual. ##
To enter the manual use the following code:
```
man -l man_3_printf
```
## Authors: ##

* **Juan José Arteta Maury** - [*GitHub*](https://github.com/jj131204)   -[*Twitter*](https://twitter.com/jarteta2004)
* **Sergio Orejarena Rueda** - [*GitHub*](https://github.com/SergioO21)  -[*Twitter*](https://twitter.com/SergioOR21)

## Flowchart: ##
<details>
       <summary>Click to view the flowchart</summary>
       <img src= "https://github.com/SergioO21/printf/blob/main/Flowchart.png" />
</details>

#### Finished in 16 / 03 / 2021. ####
