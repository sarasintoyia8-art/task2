#include <stdio.h>

int main() {
    float radius = 5.0;  // Set the radius directly in the code
    float surface_area;

    // Calculate surface area
    surface_area = 4 * 3.14 * radius * radius;

    // Print the result
    printf("Surface area of the sphere with radius %.2f is: %.2f\n", radius, surface_area);

    return 0;
}

