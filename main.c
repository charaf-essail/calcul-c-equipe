#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}
double moyenne(int a, int b) {
    return (a + b) / 2.0;
}
int main(void) {
    printf("Projet collaboratif- branche message\n");
    printf("Produit = %d\n", produit(3, 4));
    printf("Moyenne = %.2f\n", moyenne(3, 4));
    return 0;
}