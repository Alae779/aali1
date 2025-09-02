#include<stdio.h>
int main(){
    int x;
    int y;
    printf("entrer un montant: "); scanf("%d", &x);
    y = x + (x*5)/100;
    printf("avec taxe ajoutée: %d",y);
    
    return 0;
}