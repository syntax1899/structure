#include <stdio.h>
void football();
struct league
{
 int teams[10];
 char name;
};
struct club
{
    char name[10];
    char player[10];
    int number;
    float salary;
    struct league club;
};
int main() {
struct club club_data[4] = {
  {"Barcelona", "De Jong", 21, 500.99},
  {"Liverpool", "Salah", 11, 250.99},
  {"PSG", "Dembele", 10, 300.99},
  {"Man City", "Silva", 20, 350.99}
};
for(int i = 0; i<=4; i++)
{
   printf("Club Name: %s\n", club_data[i].name);
        printf("Player: %s\n", club_data[i].player);
        printf("Number: %d\n", club_data[i].number);
        printf("Salary: %.2f\n", club_data[i].salary);
}
    return 0;
}