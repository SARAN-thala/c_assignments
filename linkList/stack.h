typedef struct stack {
	struct element *top;
	int length;
} Stack;

typedef struct element {
	int value;
	struct element *next;
} Element;

void initialize_stack(Stack *);
void print_stack(Stack *);
void push(Stack *, int);
int pop(Stack *);
