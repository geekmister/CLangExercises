#include <stdio.h>
#define HEIGHT 10;
int calculateCuboidVolume(int length, int width);

int main() {
    int length;
    int width;

    printf("Please input length of cuboid:");
    scanf("%d", &length);

    printf("pleasse input width of cuboid:");
    scanf("%d", &width);

    int volume = calculateCuboidVolume(length, width);
    printf("Volume of cuboid is %d\n", volume);

    return 0;
}

int calculateCuboidVolume(int length, int width) {
    int result = length * width * HEIGHT;
    return result;
}