#define MAX_STR 60 //maximo de string
#define MAX_REG 100 //maximo de registro


typedef struct {
    char name[MAX_STR];
    int age;
    char adress[MAX_STR];
    char city[MAX_STR];
    char number[MAX_STR];
} PERSON;

PERSON people[MAX_REG]; //people es tipo PERSON, y person es una estrctura
int pos = 0;//posicion


    


