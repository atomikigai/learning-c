#include <stdio.h>

#define FIRST_NAME_LEN 100
#define LAST_NAME_LEN 100

struct person_name
{
    char firstname[FIRST_NAME_LEN + 1];
    char last[LAST_NAME_LEN + 1];
};

struct student
{
    struct persona_name name;
    int id, age;
    char sex;
};

int main(void)
{

    return 0;
}