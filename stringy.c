#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthy(char *s){
  /*
  int ctr = 0;
  while (s[ctr]!=0 && s[ctr]!='\0'){
    ctr++;
  }
  return ctr;
  */

  int ctr = 0;
  char *cp = s;

  while (*cp){
    ctr++;
    cp++;
  }
  return ctr;
}

int main(){
  printf("here is strchr\nThis returns a pointer to the first instance of a given char within a given string\n");
  char *s1 = strchr("hiya childs", 'y');
  printf("strchr(\"hiya childs\", \' \') returns %s\n", s1);

  char *s2 = strstr("hiya childs", "a ");
  printf("strstr(\"hiya childs\", \' \') returns %s\n", s2);




  
  printf("hiya: %d\n", lengthy("Hiyaaaaa"));
  return lengthy("Hiyaaaaa");
}
