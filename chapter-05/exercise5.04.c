#include <stdio.h>
// beaufort scale to estimate wind force, prints description of the wind
int main(void) {
    float wind_speed;
    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed);
    printf("The wind is: ");
    if (wind_speed < 0) {
        printf("invalid wind speed!");
    } else if (wind_speed < 1) {
        printf("Calm");
    } else if (wind_speed <= 3) {
        printf("Light air");
    } else if (wind_speed <= 27) {
        printf("Breeze");
    } else if (wind_speed <= 47) {
        printf("Gale");
    } else if (wind_speed <= 63) {
        printf("Storm");
    } else if (wind_speed > 63) {
        printf("Hurricane");
    }
    return 0;
}