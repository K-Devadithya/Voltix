#include <stdio.h>
#include <stdlib.h>

typedef struct components {
    char type;
    char name[10];
    int node1;
    int node2;
    int value;
} comp;

int main() {
    char input[100];
    char res = 'y';
    int nc = 0;

    comp *circuit = NULL;

    printf("Welcome to Voltix!\n");

    while (res != 'q' && res != 'Q') {

        printf("\nEnter component (e.g., R1 1 2 1000): ");
        scanf(" %[^\n]", input);  // read full line

        circuit = realloc(circuit, sizeof(comp) * (nc + 1));

        sscanf(input, "%c%s%d%d%d",
               &circuit[nc].type,
               circuit[nc].name,
               &circuit[nc].node1,
               &circuit[nc].node2,
               &circuit[nc].value);

        nc++;

        printf("Add more? (q to quit): ");
        scanf(" %c", &res);
    }

    printf("\nStored components:\n");
    for (int i = 0; i < nc; i++) {
        printf("%c %s %d %d %d\n",
               circuit[i].type,
               circuit[i].name,
               circuit[i].node1,
               circuit[i].node2,
               circuit[i].value);
    }

    free(circuit);
    return 0;
}