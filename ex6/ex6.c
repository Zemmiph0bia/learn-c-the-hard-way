#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.34f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Bruce";
  char last_name[] = "Wayne";

  printf("You are %d kilometres away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
    first_name, initial, last_name);

  return 0;
}
