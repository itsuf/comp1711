#include <stdio.h>
int main() {
    char name[15];

    printf("Hello, please enter your string: ");
    scanf("%s", name);

    for (int i=sizeof(name); i < sizeof(name)+1; i--){
        printf("%c",name[i]);
    }


    return 0;
}