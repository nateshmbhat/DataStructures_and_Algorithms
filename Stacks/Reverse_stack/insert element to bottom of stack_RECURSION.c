#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>


typedef struct stack
{
	int top  ;
	char items[100] ;

}stack; 


int pop(stack * s)
{
	return s->items[s->top--] ; 
}


void inserttobottom(stack * s , int data)
{
	int ele  ;
	ele = pop(s) ; 

	if(s->top==-1)
	{
		s->items[++s->top] = data ; 
		s->items[++s->top] = ele ;
		return ; 
	}
	
	inserttobottom(s , data) ; 

	s->items[++s->top] = ele ; 	

} 


void display(stack s)
{
	if(s.top==-1)
		return ; 
	int i =0 ; 
	printf("\n") ; 
	for(i =0 ; i<=s.top ; i++)
		printf("%d " , s.items[i]) ; 
}


int main()
{
	stack s={-1} ; 
	for(int i = 0 ; i< 10 ; i++)
		s.items[++s.top] = i ;
	
	display(s) ; 
	inserttobottom(&s , 100) ; 
	display(s) ;	
}