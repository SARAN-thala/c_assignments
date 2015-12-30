typedef struct list{
  struct element *first;
  struct element *last;
  int length;
} List;

typedef struct element{
  int value;
  struct element *next;
} Element;

void initialize_list(List *);
void enqueue(List *,int);
void print_list(List *);
int dequeue(List *list);
