#include<stdio.h>
int main(){
    int n;
    int part_1,part_2;
    printf("Entrer un nombre de deux chiffres : ");
    scanf("%d",&n);
    if(n<10 || n>99 || n<=0){
        printf("Le nombre doit avoir juste deux chiffres et non nul ou negatif");
    }
    else {
        part_1 = n/10;
        part_2 = n%10;
        printf("Le nombre reverse est : %d%d",part_2,part_1);
    }
    return 0;
}