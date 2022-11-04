#include<stdio.h>
#include<string.h>
#include<ctype.h>

char input[10];
int i, error;

void E() {
  T();
  Eprime();
}
void Eprime() {
  if (input[i] == '+') {
    i++;
    T();
    Eprime();
  }
}
void T() {
  F();
  Tprime();
}
void Tprime() {
  if (input[i] == '*') {
    i++;
    F();
    Tprime();
  }
}
void F() {
  if (isalnum(input[i])) i++;
  else if (input[i] == '(') {
    i++;
    E();
    if (input[i] == ')')
      i++;
    else error = 1;
  } 
  else error = 1;
}

void main() {
  
  while (1)
  {i = 0;
  error = 0;
        printf("Enter input string or 0 to terminate: ");
        scanf("%s", &input);
        if (strcmp(input, "0") == 0){
            break;
        }

        E();
        if (strlen(input) == i && error == 0)
                printf("\nAccepted..!!!\n");
        else
            printf("\nRejected..!!!\n");
  }

}
