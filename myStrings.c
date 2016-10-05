#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mystrchr(char *s, char c){
  char *cp = s;
  while (*cp!=c){
    cp++;
  }
  return cp;
}

int mystrlen(char *s){
  int ctr = 0;
  char *cp = s;
  while (*cp){
    ctr++;
    cp++;
  }
  return ctr;
}

char * mystrcpy(char *s1, char *s2){
  char *cp1 = s1;
  char *cp2 = s2;
  int ctr = 0;
  while (cp2[ctr] && cp1[ctr]){
    cp1[ctr] = cp2[ctr];
    ctr++;
  }
  s1[ctr] = 0;
  return cp1;
}

char * mystrcat(char *s1, char *s2){
  char *cp = s1;
  int ctr = 0;
  int l = mystrlen(cp);

  while (s2[ctr]){
    cp[ctr+l] = s2[ctr];
    ctr++;
  }
  cp[l+ctr] = 0;
  return cp;
}

char * mystrncat(char *s1, char *s2, int i){
  char *cp = s1;
  int ctr = 0;
  int l = mystrlen(cp);

  while (s2[ctr] && ctr<i){
    cp[ctr+l] = s2[ctr];
    ctr++;
  }
  cp[l+ctr] = 0;
  return cp;
}  

int mystrcmp(char *s1, char *s2){
  int otpt = 0;
  while (otpt == 0 && *s1 && *s2){
    otpt = *s1 - *s2;
    s1++;
    s2++;
  }
  return otpt;
}

int main(){
  //strlen
  printf("Testing strlen on (a) 'ples no', and (b) 'ehrmahgerd'\n");
  printf("My strlen(a) returns: %d\n", mystrlen("ples no"));
  printf("Real strlen(a) returns: %d\n", strlen("ples no"));    
  printf("My strlen(b) returns: %d\n", mystrlen("ehrmahgerd"));
  printf("Real strlen(b) returns: %d\n\n\n", strlen("ehrmahgerd"));    
  
  //strchr
  printf("Making own strchr, searching (a) 'l' and (b) 'd' in 'hoo lawdy'\n");
  printf("My strchr(a) returns: %s\n", mystrchr("hoo lawdy", 'l'));
  printf("Real strchr(a) returns: %s\n", strchr("hoo lawdy", 'l'));
  printf("My strchr(b) returns: %s\n", mystrchr("hoo lawdy", 'l'));
  printf("Real strchr(b) returns: %s\n\n\n", strchr("hoo lawdy", 'l'));
  
  //strcpy
  printf("Testing strcpy on (a) 'ples no', 'oyes', and (b) 'ehrmahgerd', 'ahrmo'\n");
  char t11[20] = "ples no";
  char t12[20] = "oyes";
  char t21[20] = "ehrmahgerd";
  char t22[20] = "ahrmo";
  printf("My strcpy(a) returns: %s\n", mystrcpy(t11, t12));
  printf("Real strcpy(a) returns: %s\n", strcpy(t11, t12));    
  printf("My strcpy(b) returns: %s\n", mystrcpy(t21, t22));
  printf("Real strcpy(b) returns: %s\n\n\n", strcpy(t21, t22));      
  
  //strncat
  char t31[20] = "ples no";
  char t311[20] = "ples no";  
  char t41[20] = "ehrmahgerd";
  char t411[20] = "ehrmahgerd";
  printf("Testing strncat on (a) 'ples no', 'oyes', and (b) 'ehrmahgerd', 'ahrmo', n will be 3\n");
  printf("My strncat(a) returns: %s\n", mystrncat(t31, t12, 3));
  printf("Real strncat(a) returns: %s\n", strncat(t311, t12, 3));    
  printf("My strncat(b) returns: %s\n", mystrncat(t41, t22, 3));
  printf("Real strncat(b) returns: %s\n\n\n", strncat(t411, t22, 3));

  //strcmp
  char t51[10] = "hoo lawdy";
  char t52[10] = "hoo hoo";
  char t61[50] = "where the childs at";
  char t62[50] = "where the childs at";
  printf("Testing strcmp on (a) 'hoo lawdy', 'hoo hoo', and (b) 'where the childs at', 'where the childs at', n will be 3\n");
  printf("My strcmp(a) returns: %d\n", mystrcmp(t51, t52));
  printf("Real strcmp(a) returns: %d\n", strcmp(t51, t52));    
  printf("My strcmp(b) returns: %d\n", mystrcmp(t61, t62));
  printf("Real strcmp(b) returns: %d\n\n\n", strcmp(t61, t62));
  
  return 21;
}
