#include<stdio.h>
#define STACKSIZE 5         //stack can contain 5 elements
typedef struct{
	int top;               //let "top" be identifier whose value represent position of top most stack element
	int items[STACKSIZE];
}stack;
void push(stack *, int);    
int pop(stack *);
int main()
{
    stack s;              // stack "s" declaration
	s.top = -1;          //  initializing stack "s" to empty state
	push(&s,55);
	push(&s,33);
	push(&s,11);
	push(&s,22);
	push(&s,34);
	//push(&s,22);
	//push(&s,34);

                             // (to overflow :please add another 2 push above)
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));
	                          //pop no is greater than pushed 
							  //hence underflow
	
	
}
   void push(stack *s, int x)
    {
	if(s->top == 5)
	{
		printf("stack overflow\n");
		exit(1);
	}
	else
	s->items[++(s->top)] = x;
    }
int pop (stack*s)
{
	if (s->top == -1)
	{
		printf("stack underflow");
		exit(1);
	}
	return s->items[s->top--];
}
