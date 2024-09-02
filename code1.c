#include<stdio.h>
int main(){
    struct pokemon{
        int hp,speed,attack; //we can also declare any int or char array in our attribute 
        char class;
    };
    struct pokemon pikachu;
    pikachu.hp=100;
    pikachu.attack=80;
    pikachu.speed=120;
    pikachu.class='A';

    struct pokemon hero;
    hero.hp=130;
    hero.attack=90;
    hero.speed=125;
    hero.class='S';

    printf("%d\n",pikachu.hp);
    printf("%d",hero.speed);
    return 0;

//structure are used to store multiple attribute of different types
//for ex-to store BHP,Torque,CC,Weight of 50 different cars
}
