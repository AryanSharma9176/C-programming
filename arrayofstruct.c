#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
        int speed;
        int attack;
        int hp;
        char tier;
        char name[20];
    }pokemon;

    // pokemon pikachu;
    // pokemon charizard;
    pokemon arr[3];   //arr[0],arr[1],arr[2]

    arr[0].attack=100;
    arr[0].hp=80;
    arr[0].speed=120;
    arr[0].tier='A';
    strcpy(arr[0].name,"Charizard");

    arr[1].attack=120;
    arr[1].hp=50;
    arr[1].speed=100;
    arr[1].tier='B';
    strcpy(arr[1].name,"Mewtwo");

    arr[2].attack=130;
    arr[2].hp=150;
    arr[2].speed=140;
    arr[2].tier='S';
    strcpy(arr[2].name,"Bablu");

    for (int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].speed);
        printf("%d\n",arr[i].hp);
        printf("%c\n\n",arr[i].tier);
    }
}