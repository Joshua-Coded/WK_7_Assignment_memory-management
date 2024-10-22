# Student Email Management System

## Description
This C program demonstrates dynamic memory management by handling a list of student email addresses. It initially allocates memory for 10 students and then demonstrates memory reallocation by shrinking the list to 6 students.

## Features
- Dynamic memory allocation for student emails
- Memory reallocation functionality
- Proper memory deallocation
- Handles 10 specific student names:
  * Joshua
  * David
  * Aaron
  * Favour
  * Ronald
  * Justice
  * Ojo
  * Adebayo
  * Divine
  * King

## Technical Details

### Memory Management Functions Used
- `malloc()`: Initial memory allocation
- `realloc()`: Memory reallocation
- `free()`: Memory deallocation

### Program Structure
1. Initial allocation of memory for 10 email addresses
2. Population of email addresses using predefined student names
3. Display of initial email list
4. Reallocation of memory to store only 6 email addresses
5. Display of final email list
6. Proper memory cleanup

### Memory Allocation Process
```c
emails = (char **)malloc(initialSize * sizeof(char *));



