#  Introduction

## Keywords and Indentifiers 

keywords are reserved words that have a predefined meanings and cannot be used as indentifiers.
 
| Keyword   | Keyword   | Keyword   | Keyword   |
| --------- | --------- | --------- | --------- |
| auto      | double    | int       | struct    |
| break     | else      | long      | switch    |
| case      | enum      | register  | typedef   |
| char      | extern    | return    | union     |
| const     | float     | short     | unsigned  |
| continue  | for       | signed    | void      |
| default   | goto      | sizeof    | volatile  |
| do        | if        | static    | while     |
    
### Escape Sequences:

\n - Newline <br>
\t - Tab <br>
\b - Backspace <br>
\\" - Double quote <br>
\\\ - Backslash <br>

## 1.2)Variables and Arithmetics Expressions

### Comments:
/* Any characters between these are ignored by c compiler */

### Variables:

* All variables must be declared before use

* A variable declartion announces the properties of variables such as data type name followed by variable name or
list of variable name.


### Data Types:
1) Primitive
2) Derived
3) User Defined

#### Primitive Data Types:

| Data Type         | Size (in bytes) | Range                                                          |
| ----------------- | --------------- | -------------------------------------------------------------- |
| char              | 1               | -128 to 127 or 0 to 255 (depending on signed or unsigned)       |
| signed char       | 1               | -128 to 127                                                   |
| unsigned char     | 1               | 0 to 255                                                       |
| short             | 2               | -32,768 to 32,767                                              |
| unsigned short    | 2               | 0 to 65,535                                                    |
| int (16-bit)      | 2               | -32,768 to 32,767                                              |
| unsigned int (16-bit) | 2           | 0 to 65,535                                                    |
| int (32-bit)      | 4               | -2,147,483,648 to 2,147,483,647                                |
| unsigned int (32-bit) | 4           | 0 to 4,294,967,295                                              |
| long (32-bit)     | 4               | -2,147,483,648 to 2,147,483,647                                |
| unsigned long (32-bit) | 4          | 0 to 4,294,967,295                                              |
| long (64-bit)     | 8               | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807       |
| unsigned long (64-bit) | 8          | 0 to 18,446,744,073,709,551,615                                 |
| float             | 4               | 1.2e-38 to 3.4e+38                                             |
| double            | 8               | 2.3e-308 to 1.7e+308                                           |
| long double       | 10 or 16        | 3.4e-4932 to 1.1e+4932                                         |
| _Bool             | 1               | 0 to 1                                                         |

#### Derived Data Types:
Derived data types are derived from primitive data types and include pointers, arrays, structures, and unions.

#### User-Defined Data Types:
User-defined data types are created by the user and include structures, classes, and enumerations. These data types allow the programmer to define their own data structures based on their specific requirements.



