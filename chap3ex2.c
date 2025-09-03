#include<stdio.h>
int main(){
    float x;
    printf("entrer une heure (24h): ");scanf("%f", &x);
    if(x>2.52 && x<=8.51){
        printf("L'heure de départ la plus proche est 08:00 a.m., arrivant à 10:16 a.m.");
    }
    else if(x>8.51 && x<=11.01){
        printf("L'heure de départ la plus proche est 09:43 a.m., arrivant à 11:52 a.m.");
    }
    else if(x>11.01 && x<=12.03){
        printf("L'heure de départ la plus proche est 11:19 a.m., arrivant à 13:32 p.m.");
    }
    else if(x>12.03 && x<=13.23){
        printf("L'heure de départ la plus proche est 12:47 a.m., arrivant à 15:00 p.m.");
    }
    else if(x>13.23 && x<=15.52){
        printf("L'heure de départ la plus proche est 14:00 p.m., arrivant à 16:08 p.m.");
    }
    else if(x>15.52 && x<=17.22){
        printf("L'heure de départ la plus proche est 15:45 p.m., arrivant à 17:52 p.m.");
    }
    else if(x>17.22 && x<=20.22){
        printf("L'heure de départ la plus proche est 19:00 p.m., arrivant à 21:20 p.m.");
    }
    else if(x>20.22 || x<=24.00 && x<=2.52){
        printf("L'heure de départ la plus proche est 21:45 p.m., arrivant à 23:58 p.m.");
    }
    return 0;
}