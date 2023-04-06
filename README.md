# Libft
My very first own library. In this project I deepened the basic concepts of C, creating functions such as strlcpy, memset, substr, itoa, split among many more. In addition, I created several useful functions to work with linked lists such as lstaddback, lstclear, lstnew among many more.

# Basics of C

## Structs

In computer programming, a struct (short for structure) is a composite data type that groups together related data items of different data types under a single name. Structs **allow us to create** a new custom data type that represents **a concept or entity** in our program.

Here's an example of a struct in C programming language:

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```

In this example, we have defined a new struct called "Person" that has three members: "name", "age", and "height". The "name" member is an array of characters that can hold up to 50 characters, while "age" and "height" are integers and floating-point numbers, respectively.

We can create instances of this struct by declaring variables of type "Person" and initializing their members:

```c
struct Person john;
john.age = 30;
john.height = 1.8;
strcpy(john.name, "John Smith");

```

## Linked lists

In computer science, a linked list is a data structure that consists of a sequence of elements, each of which contains two fields: a data field to store the actual data, and a link field to point to the next element in the sequence. The link field essentially creates a link between the elements, hence the name "linked list.”

Linked lists are often used to represent linear data structures that can grow or shrink dynamically, as opposed to arrays, which have a fixed size. Linked lists are also more flexible than arrays because they can be easily modified by inserting or deleting elements in the middle of the list.

There are several types of linked lists, including **singly linked lists**, **doubly linked lists**, and **circular linked lists**.

### Single linked list

```c
typedef struct s_list

struct s_list {
	  void *data;
    struct s_list* next;
} t_list;
```

### Double linked list

A doubly linked list is a type of linked list in which each node has two pointers: one to the previous node in the sequence and one to the next node in the sequence. In other words, a doubly linked list is a linked list in which each node points to both its predecessor and its successor in the list.

```c
typedef struct s_list

struct s_list {
	  void *data;
    struct s_list* next;
		struct s_list* prev;
} t_list;
```

### Circular linked list

A circular linked list is a type of linked list in which the last node in the list points back to the first node, forming a loop. In other words, a circular linked list is a linked list in which the "next" pointer of the last node points to the first node instead of NULL.

## Pointers

In C, a pointer is a variable that stores the memory address of another variable. A pointer can be used to indirectly access or modify the value of the variable that it points to.

```c
int x = 5;
int *ptr = &x;
```

This sets the value of **`ptr`** to the memory address of **`x`**, allowing us to indirectly access or modify the value of **`x`** using the pointer.

## Important note

Here's an example of a function **`increment()`** that takes an integer variable **`x`** as a parameter by value and returns the incremented value:

```c
int increment(int x) {
    return x + 1;
}
```

In this case, the **`x`** parameter is passed by value, meaning that a copy of the variable's value is made and passed to the function. Therefore, any modifications made to **`x`** within the function will not affect the original variable outside of the function.

Alternatively, you can pass the variable as a pointer and use the **`const`** keyword to indicate that the variable should not be modified within the function:

```c
int increment(const int *x) {
    return (*x) + 1;
}
```

In this example, the **`x`** parameter is a pointer to an integer value, but it is marked as **`const`**, which means that the function cannot modify the value of **`x`**. Instead, it dereferences the pointer using the **`*`** operator to access the value and return the incremented value.

In **both cases, the original variable is not modified within the function,** and **its value remains unchanged outside of the function call.**

### To change outside of the scope

If you want to change the value of a variable outside of its scope, you can pass it as a pointer to the function and modify its value using the dereference operator **`*`**.

Here's an example of a function **`increment()`** that takes a pointer to an integer variable **`x`** as a parameter and increments its value:

```c
void increment(int *x) {
    (*x)++;
}
```

In this case, the **`x`** parameter is a pointer to an integer variable. By dereferencing the pointer using the **`*`** operator, we can access the value of **`x`** and modify it using the increment operator **`++`**. Since **`x`** is a pointer to the original variable, any changes made to **`x`** within the function will also be reflected in the original variable outside of the function.

# Makefile

A Makefile **is a file that specifies the dependencies and rules for building a program or set of programs.** It is used by the Make build automation tool to manage the building and rebuilding of the program or programs.

### Why use phony in makefile?

```makefile
.PHONY: all clean
```

In a Makefile, a phony target is a target that does not correspond to an actual file or directory on disk. Instead, it is a target that performs a specific action or set of actions, such as compiling a program or cleaning up temporary files.

Using a phony target in a Makefile can have several benefits:

1. Prevent accidental conflicts with existing files or directories: By declaring a target as phony, you avoid naming conflicts with existing files or directories. For example, if you have a target named **`clean`** that removes temporary files, you don't want to accidentally delete a file named **`clean`** that may be important.
2. Improve performance: By marking a target as phony, you tell Make that it does not depend on any files or directories, which can help to avoid unnecessary checks and improve performance.
3. Increase clarity and maintainability: Using phony targets can make your Makefile more clear and maintainable, as it clearly separates the targets that correspond to actual files and directories from the targets that perform actions.

### My pointers notes
<div align="center">
        <td> <img src="https://user-images.githubusercontent.com/76222459/230505982-db50e3a4-b063-4f42-be4d-60ecd9db0361.jpg" width="600"</td>
     </tr>
</div>

<div align="center">
    <table >
     <!-- <tr>
        <td><b>Latest Tweets</b></td>
        <td><b>daily.dev</b></td>
     </tr> -->
     <tr>
       <td><img src="https://user-images.githubusercontent.com/76222459/230504054-7853a892-6abd-4981-a1a3-a4f3f7383f8b.jpg" width="400" alt="sunil sapkota twitter" > </img></td>
        <td><img src="https://user-images.githubusercontent.com/76222459/230504056-31bca226-5e6e-4ad6-91dd-6e6f953a9f19.jpg" width="400" alt="sunil sapkota's Dev Card"/></td>
     </tr>
    </table>
    </div>
    
### My Libft Notes

<div align="center">
    <table >
     <!-- <tr>
        <td><b>Latest Tweets</b></td>
        <td><b>daily.dev</b></td>
     </tr> -->
     <tr>
       <td><img src="https://user-images.githubusercontent.com/76222459/230505948-83608c4a-6fbf-4847-834f-cb59c9dfaa39.jpg" width="400" alt="sunil sapkota twitter" > </img></td>
        <td><img src="https://user-images.githubusercontent.com/76222459/230505944-85fd9a14-a054-4c66-bc17-1eb9be95bad3.jpg" width="400" alt="sunil sapkota's Dev Card"/></td>
     </tr>
    </table>
    </div>

<div align="center">
    <table >
     <!-- <tr>
        <td><b>Latest Tweets</b></td>
        <td><b>daily.dev</b></td>
     </tr> -->
     <tr>
       <td><img src="https://user-images.githubusercontent.com/76222459/230505941-a9913599-47e5-4db8-b078-83f94314a245.jpg" width="400" alt="sunil sapkota twitter" > </img></td>
        <td><img src="https://user-images.githubusercontent.com/76222459/230505937-ebae7e09-cbfb-4f6c-b116-c195ec4bb30b.jpg" width="400" alt="sunil sapkota's Dev Card"/></td>
     </tr>
    </table>
    </div>
    
<div align="center">
    <table >
     <!-- <tr>
        <td><b>Latest Tweets</b></td>
        <td><b>daily.dev</b></td>
     </tr> -->
     <tr>
       <td><img src="https://user-images.githubusercontent.com/76222459/230505934-fabd56eb-ba50-4545-a312-f756f5560d56.jpg" width="400" alt="sunil sapkota twitter" > </img></td>
        <td><img src="https://user-images.githubusercontent.com/76222459/230505932-58d512d5-4719-423a-aaf0-c5cc0dbd2f36.jpg" width="400" alt="sunil sapkota's Dev Card"/></td>
     </tr>
    </table>
    </div>
   
