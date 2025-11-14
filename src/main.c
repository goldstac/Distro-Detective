#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void correct() {
   char correct[256];
    FILE *file = fopen("correct.txt","r");
    if (file == NULL){
        printf("ASCII correct.txt Not Found");
        return;
    }
    while(fgets(correct,sizeof(correct),file)) {
        printf("%s",correct);
    }
    fclose(file);
}
int main() {
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int score4 = 0;
    char input1[50];
    char input2[50];
    char input3[50];
    char input4[50];
    printf("Welcome To Distro Detective\n");
    printf("Enter The Name Of The Base Distro\n");
    printf("--------------------------------------\n");
    printf("1 : Ubuntu \n");
    fgets(input1,sizeof(input1),stdin);
    input1[strcspn(input1,"\n")] = '\0';
    if (strcasecmp(input1,"debian") == 0) {
    score1 = 1;
     correct();
    }
    else{
        printf("Wrong, It Was Debian\n");
    }
    printf("  Next Is : Zorin OS \n");
    fgets(input2,sizeof(input2),stdin);
    input2[strcspn(input2,"\n")] = '\0';
    if (strcasecmp(input2,"ubuntu") == 0) {
    score2 = 1;
    correct();
    }
    else{
        printf("Wrong, It Was Ubuntu\n");
    }
    printf("  Next Is: Manjaro Linux\n");
    fgets(input3,sizeof(input3),stdin);
    input3[strcspn(input3,"\n")] = '\0';
    if (strcasecmp(input3,"arch") == 0 || strcasecmp(input3,"arch linux") == 0) {
    score3 = 1;
    correct();
    }
    else{
        printf("Wrong, It Was Arch Linux\n");
    }
    printf("   Next Is : Pop! Os\n");
    fgets(input4,sizeof(input4),stdin);
    input4[strcspn(input4,"\n")] = '\0';
    if (strcasecmp(input4,"ubuntu") == 0) {
   score4 = 1;
    correct();
    }
    else{
        printf("Wrong, It Was Ubuntu\n");
    }
    int calculate_score = score1 + score2 + score3 + score4;
    printf("   Your Score Is %d/4 \n",calculate_score);
}
