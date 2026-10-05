#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char ch;

    printf("Enter a valid parenthesized infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0')
    {
        ch = infix[i];

        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

        else if (ch == '(')
        {
            push(ch);
        }

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            push(ch);
        }

        else if (ch == ')')
        {
            while (stack[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop();  
        }
        i++;
    }


    while (top != -1)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
