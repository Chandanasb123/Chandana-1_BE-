// Online C compiler to run C program online
#include<stdio.h>
struct Address {
char city[50];
int pin;
};
struct Person {
char name[50];
struct Address addr;
};
int main(){
  struct Person p;
  printf("Enter name: ");
  scanf("%s",p.name);
  printf("Enter city: ");
  scanf("%s",p.addr.city);
  printf("Enter pin: ");
  scanf("%d",&p.addr.pin);
  printf("\nperson Details:\n");
  printf("Name:%s\ncity:%s\npin:%d\n",p.name,p.addr.city,p.addr.pin);
  return 0;
}
