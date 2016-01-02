#include <stdio.h>
#include "stack.h"

int main(void) {
    Stack stack;
    initialize_stack(&stack);
    push(&stack, 22);
    push(&stack, 11);
    push(&stack, 13);
    push(&stack, 15);
    print_stack(&stack);

    printf("pop : %d\n", pop(&stack));
    printf("pop : %d\n", pop(&stack));
    printf("pop : %d\n", pop(&stack));
    print_stack(&stack);

    printf("Stack length %d\n", stack.length);

    return 0;
};
