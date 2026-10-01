#include <stdio.h>

int main(){
    int radius;
    printf("Enter Radius: ");
    scanf("%d", &radius);
    float volume = (4.0f/3.0f)*3.14*radius*radius*radius;
    printf("%.2f\n", volume);
}