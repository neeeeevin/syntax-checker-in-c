# syntax-checker-in-c
Syntax Checker is an application we use to check the syntax that is written an language. A language is a collection of all strings possibly having a certain meaning. Using C we can create a syntax checker which can check the syntax if it is correct in C or not. 



Explanation:
Header Files:

stdio.h for standard input and output functions.
stdlib.h for memory allocation functions (not used directly in this example).
string.h for string manipulation functions.
Constants:

MAX_LENGTH: Maximum length of input code string.
Function checkSyntax:

This function checks for balanced parentheses (( and )). It uses a stack data structure (stack) to keep track of opening parentheses encountered.
It iterates through the input code string character by character:
If an opening parenthesis ( is encountered, its index is pushed onto the stack (stack).
If a closing parenthesis ) is encountered, it checks if the stack is empty or the top of the stack does not match the corresponding opening parenthesis.
After iterating through the entire string, it checks if all parentheses are closed by ensuring the stack is empty (top == -1).
Returns 1 if syntax is correct (balanced parentheses), otherwise 0.
Main Function (main):

Reads input C code from the user using fgets.
Removes the newline character from the input string if present.
Calls checkSyntax function to validate the syntax of the input code.
Prints appropriate messages based on the return value of checkSyntax.
Notes:
Limitations: This example only checks for balanced parentheses. A complete syntax checker would need to handle a wide range of syntax rules and constructs in the C language.
Extension: You can extend this example to include checks for other syntax elements such as braces {}, square brackets [], and other language-specific keywords and constructs.
Error Handling: This example assumes valid input; error handling for large inputs or unexpected characters should be added for robustness.
This is a basic starting point for a syntax checker in C. Depending on your requirements, you can expand and enhance this implementation to handle more sophisticated syntax rules and error checking.






