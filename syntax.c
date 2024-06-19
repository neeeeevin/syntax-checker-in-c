#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

// Function to check if parentheses are balanced
int checkSyntax(char *code) {
    int len = strlen(code);
    int stack[MAX_LENGTH];
    int top = -1;

    for (int i = 0; i < len; i++) {
        if (code[i] == '(') {
            stack[++top] = i;
        } else if (code[i] == ')') {
            if (top == -1 || code[stack[top--]] != '(') {
                return 0; // Unbalanced parentheses
            }
        }
    }

    // Check if all parentheses are closed
    if (top != -1) {
        return 0; // Unbalanced parentheses
    }

    return 1; // Syntax is correct
}

int main() {
    char code[MAX_LENGTH];
    
    printf("Enter C code to check syntax:\n");
    fgets(code, MAX_LENGTH, stdin);

    // Remove newline character if present
    if (code[strlen(code) - 1] == '\n') {
        code[strlen(code) - 1] = '\0';
    }

    if (checkSyntax(code)) {
        printf("Syntax is correct.\n");
    } else {
        printf("Syntax error detected.\n");
    }

    return 0;
}
