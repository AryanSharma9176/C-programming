//array can work only in one datatype
// structure are user defined datatype
//example of pokemon and laptop
// struct employee{ //declaration of  a structure
//     int emp_id;
//     char name;
//     float salary;
//     /* data */
// }; //semicolon mandatory

#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int  attack;
    };
    struct pokemon pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    return 0;
    
}