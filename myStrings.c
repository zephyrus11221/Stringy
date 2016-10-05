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
  printf ("%d\n", mystrlen(cp));

  while (s2[ctr]){
    printf ("%c\n", s2[ctr]);
    printf ("%d\n", ctr);
    cp[ctr+l] = s2[ctr];
    ctr++;
  }
  cp[l+ctr] = 0;
  return cp;
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
  
  //strcat
  char t31[20] = "ples no";
  char t311[20] = "ples no";  
  char t41[20] = "ehrmahgerd";
  char t411[20] = "ehrmahgerd";
  printf("Testing strcat on (a) 'ples no', 'oyes', and (b) 'ehrmahgerd', 'ahrmo'\n");
  printf("My strcat(a) returns: %s\n", mystrcat(t31, t12));
  printf("Real strcat(a) returns: %s\n", strcat(t311, t12));    
  printf("My strcat(b) returns: %s\n", mystrcat(t41, t22));
  printf("Real strcat(b) returns: %s\n\n\n", strcat(t411, t22));
  return 21;
}
