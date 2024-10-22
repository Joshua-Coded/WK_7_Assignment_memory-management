#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   // Declare pointer for email array
   char **emails;
   int initialSize = 10;
   int newSize = 6;
   
   // Allocate memory for 10 email pointers
   emails = (char **)malloc(initialSize * sizeof(char *));
   
   if (emails == NULL) {
       printf("Memory allocation failed!\n");
       return 1;
   }
   
   // Initialize 10 student emails with the given names
   printf("Initial allocation for %d students\n", initialSize);
   
   // Predefined student names
   const char *names[] = {
       "joshua", "david", "aaron", "favour", "ronald",
       "justice", "ojo", "adebayo", "divine", "king"
   };
   
   for(int i = 0; i < initialSize; i++) {
       // Allocate memory for each email string
       emails[i] = (char *)malloc(50 * sizeof(char));
       
       if (emails[i] == NULL) {
           printf("Memory allocation failed for email %d!\n", i);
           return 1;
       }
       
       // Store email addresses with given names
       sprintf(emails[i], "%s@alustudent.com", names[i]);
   }
   
   // Display initial emails
   printf("\nOriginal list of %d student emails:\n", initialSize);
   for(int i = 0; i < initialSize; i++) {
       printf("Student %d: %s\n", i+1, emails[i]);
   }
   
   // Resize array to 6 students using realloc
   printf("\nResizing array to %d students...\n", newSize);
   
   // First free the memory for emails we won't keep
   for(int i = newSize; i < initialSize; i++) {
       free(emails[i]);
   }
   
   // Reallocate the main array
   char **temp = (char **)realloc(emails, newSize * sizeof(char *));
   
   if (temp == NULL) {
       printf("Memory reallocation failed!\n");
       return 1;
   }
   emails = temp;
   
   // Display final emails
   printf("\nFinal list of %d student emails:\n", newSize);
   for(int i = 0; i < newSize; i++) {
       printf("Student %d: %s\n", i+1, emails[i]);
   }
   
   // Free all remaining allocated memory
   for(int i = 0; i < newSize; i++) {
       free(emails[i]);
   }
   free(emails);
   
   printf("\nMemory successfully freed!\n");
   
   return 0;
}
