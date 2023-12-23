#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define MAX 5
struct stack
{
    int top;
    int item[MAX];
};
double op(char, double, double);
void push (char,struct stack *);
double pop(struct stack *);
int main()
{

    struct stack s;
    s.top=-1;
    char sym,postfix[30];
    double op1,op2,res;
    printf("\n enter the postfix exp");
    gets(postfix);
    for(int i=0;i<strlen(postfix);i++)
    {
        sym=postfix[i];
        if(isdigit(sym))
            push(sym,&s);
        else
        {
            op2=pop(&s);
            op1=pop(&s);
            res=op(sym,op1,op2);
            if(res==-9999)
            {
                printf("invalid input");
                return 0;
            }
            s.item[++s.top]=res;
        }
    }
    res=s.item[s.top--];
    printf("\n result is %.2f",res);
    return 0;

}
void push(char sym,struct stack *s)
{
    s->top++;
    s->item[s->top]=sym-'0';

}
double pop(struct stack *s)
{
    double elem;
    elem=s->item[s->top];
    s->top--;
    return elem;
}
double op(char sym,double op1,double op2)
{
    switch(sym)
    {
        case '+':return (op1+op2);
        case '-':return (op1-op2);
        case '*':return (op1*op2);
        case '/':return (op1/op2);
        case '$':
        case '^':return (pow(op1,op2));
        default:return -9999;
    }
    exit(0);

}

