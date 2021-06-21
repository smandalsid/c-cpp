#include <iostream>
#include <ctype.h>  // for isdigit() and isalpha()
#include <string.h> // for strlen()
using namespace std;

#define MAXSIZE 100
char stack[MAXSIZE]; // stack
int top = -1;        // index of topmost element

void push(char c) // push element in stack
{
    if (top == MAXSIZE) // when stack is full
    {
        cout << "Overflow\n";
    }
    else
    {
        stack[++top] = c; // to increment top and store the data
    }
}

char pop() // pop elements from stack
{
    if (top == -1) // when stack is empty
    {
        cout << "Underflow\n";
        return ' ';
    }
    else
    {
        return stack[top--]; // return the topmost element and decrement top
    }
}

void display() // display elements of stack
{
    if (top == -1) // empty stack
    {
        cout << "Underflow\n";
    }
    else
    {
        for (int i = top; i >= 0; i--) // display values of the stack
        {
            cout << stack[i];
        }
        cout << "\n";
    }
}

int prec(char c) // return precedence of operators relative to each other
{
    if (c == '^') // highest precedence
        return 3;
    else if (c == '*' || c == '/') // lower precedence
        return 2;
    else if (c == '+' || c == '-') // lower precedence
        return 1;
    else // a letter
        return -1;
}

void infixtopostfix(char str[], int l) // to convert operation from infix to postfix
{
    int i, pos = -1;
    char post[l]; // to store the output string
    for (i = 0; i < l; i++)
    {
        if (isalpha(str[i]) || isdigit(str[i])) // when str[i] is an operand
        {
            post[++pos] = str[i]; // directly store in ouput string
        }
        else if (str[i] == '(') // push '(' in stack
        {
            push(str[i]);
        }
        else if (str[i] == ')') // for ')' pop till we encounter '('
        {
            while (top != -1 && stack[top] != '(') // till stack is not empty or popped element is '('
            {
                post[++pos] = pop(); // pop elements from stack
            }
            if (top != -1) // to pop the '('
            {
                pop();
            }
        }
        else // when it is an operator
        {
            while (top != -1 && prec(stack[top]) >= prec(str[i])) // while the stack is not empty and the precedence of the operator in str is lesser than or equal to the precedence of the operator at the top of the stack
            {
                post[++pos] = pop(); // pop the operator and add it to the output string
            }
            push(str[i]); // push the operator
        }
    }
    while (top != -1) // after traversing the entire string we need to empty the stack and store it in the output string
    {
        post[++pos] = pop();
    }
    cout << "Postfix: ";
    for (i = 0; i <= pos; i++) // display the output string
    {
        cout << post[i];
    }
    cout << "\n";
}

void infixtoprefix(char str[], int l) // convert infix operation to prefix
{
    int i, pos = -1;
    char pre[l];
    for (i = 0; i < l; i++)
    {
        if (isalpha(str[i]) || isdigit(str[i])) // push operand directly to output string
        {
            pre[++pos] = str[i];
        }
        else if (str[i] == '(') // push '(' in stack
        {
            push(str[i]);
        }
        else if (str[i] == ')') // for ')' pop till we encounter '('
        {
            while (top != -1 && stack[top] != '(') // till stack is not empty or popped element is '('
            {
                pre[++pos] = pop(); // pop elements from stack
            }
            if (top != -1) // to pop the '('
            {
                pop();
            }
        }
        else // when it is an operator
        {
            while (top != -1 && prec(stack[top]) >= prec(str[i])) // while the stack is not empty and the precedence of the operator in str is lesser than or equal to the precedence of the operator at the top of the stack
            {
                pre[++pos] = pop(); // pop the operator and add it to the output string
            }
            push(str[i]); // push the operator
        }
    }

    while (top != -1) // after traversing the entire string we need to empty the stack and store it in the output string
    {
        pre[++pos] = pop();
    }

    cout << "Prefix: ";
    for (i = pos; i >= 0; i--) // display the output string in reverse order
    {
        cout << pre[i];
    }
    cout << "\n";
}

int main()
{
    char str1[50];
    int l, i, j;
    cout << "Enter string:\n";
    cin.getline(str1, 50, '\n'); // take the infix operation as input
    l = strlen(str1);            // store length of input string

    infixtopostfix(str1, l); // convert infix to postfix and display

    char str2[l];                           // to store reverse of str1 for prefix operation
    for (i = 0, j = l - 1; i < l; i++, j--) // for reversing the original string
    {
        if (str1[j] == '(') // if we get '(' change it to ')'
            str2[i] = ')';
        else if (str1[j] == ')') // if we get ')' change it to '('
            str2[i] = '(';
        else
            str2[i] = str1[j]; // else just store
    }

    infixtoprefix(str2, l); // to find postfix and display

    return 0;
}