#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to calculate the circumference and area of a circle
void circle_related(double radius) {
    const double PI = 3.141592653;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("The circumference of the circle is %lf\n", circumference);
    printf("The area of the circle is %lf\n", area);
}

// Function to find the hypotenuse of a right triangle
void hypotenuse_finder(double side_a, double side_b) {
    double side_c = sqrt(side_a * side_a + side_b * side_b);
    printf("Side C is %lf\n", side_c);
}

// Function to demonstrate various math functions
void math_functions() {
    double root = sqrt(9);
    double power = pow(9, 2);
    int rounded = round(3.141952653);
    int ceiling = ceil(3.141592654);
    int flooring = floor(3.41592654);
    double absolute_value = fabs(-3.41592654);

    printf("The root of 9 is %lf\n", root);
    printf("9 to the power of 2 is %lf\n", power);
    printf("3.141592453 rounded is %d\n", rounded);
    printf("3.141592453 ceiled is %d\n", ceiling);
    printf("3.141592453 floored is %d\n", flooring);
    printf("3.141592453's absolute value is %lf\n", absolute_value);
}

// Function to convert temperature between Celsius and Fahrenheit
void temperature_converter() {
    char temperature_unit;
    float temperature;

    printf("Is the temperature in Celsius(C) or Fahrenheit(F): ");
    scanf(" %c", &temperature_unit); // Use space before %c to consume newline character

    temperature_unit = toupper(temperature_unit);

    switch (temperature_unit) {
        case 'C':
            printf("What is the temperature in Celsius: ");
            scanf("%f", &temperature);
            temperature = (temperature * 9.0 / 5.0) + 32;
            printf("The temperature in Fahrenheit is %.2f\n", temperature);
            break;
        case 'F':
            printf("What is the temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            temperature = ((temperature - 32) * 5.0) / 9.0;
            printf("The temperature in Celsius is %.2f\n", temperature);
            break;
        default:
            printf("\n %c is not a recognized unit of temperature.\n", temperature_unit);
    }
}

int main() {
    printf("Hello World!\n");
    return 0;
}
