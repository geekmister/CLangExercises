#include <stdio.h>
#define coefficient 0.332;
float convertToMeter(float ruler);

int main() {
    float ruler;
    
    printf("Please enter the ruler:");
    scanf("%f", &ruler);

    float meter = convertToMeter(ruler);
    printf("The ruler is %.2f meter", meter);
}

float convertToMeter(float ruler) {
    return ruler * coefficient;
}