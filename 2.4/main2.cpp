#include <stdio.h>
#include "stdio.h"
#include <iostream> 
#include <string.h>

using namespace std;	

int main()
{
  char name[100];
  printf("What is your name? __");
  fgets(name);
  return printf("Hello %s\n",name);
}
