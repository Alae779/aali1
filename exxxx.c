#include<stdio.h>
int main(){
    int x;
    int part_1,part_2;
    printf("Entrez un nombre à deux chiffres: ");
    scanf("%d",&x);
    while(x<10 || x>=100){
        printf("il faut entrer un nombre qui contient 2 chiffres!!\n");
        printf("Entrez un nombre à deux chiffres: ");
        scanf("%d",&x);
    }
    part_1=x/10;
    part_2=x%10;
    if(x>=10 && x<100){
        printf("Le nombre inversé est: %d%d",part_2,part_1);
    }
    return 0;
}