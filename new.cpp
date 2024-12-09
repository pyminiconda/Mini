/* Program no 2 */
#include <iostream>
using namespace std;

int main() {
    string name, address;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // To clear the newline character
    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Name: " << name << "\nAge: " << age << "\nAddress: " << address << endl;
    return 0;
}

/* Program no 3 */
#include <iostream>
using namespace std;

int main() {
    double base, height, area;

    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;

    area = 0.5 * base * height;
    cout << "Area of the triangle: " << area << endl;

    return 0;
}

/* Program no 4 */
#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}

/* Program no 5 */
#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4, sum, average, product;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    sum = num1 + num2 + num3 + num4;
    average = sum / 4;
    product = num1 * num2 * num3 * num4;

    cout << "Sum: " << sum << "\nAverage: " << average << "\nProduct: " << product << endl;
    return 0;
}

/* Program no 6 */
#include <iostream>
using namespace std;

int main() {
    double heightInInches, heightInCm;

    cout << "Enter height in inches: ";
    cin >> heightInInches;

    heightInCm = heightInInches * 2.54;
    cout << "Height in centimeters: " << heightInCm << endl;

    return 0;
}

/* Program no 7 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area, circumference;
    const double PI = 3.14159;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);
    circumference = 2 * PI * radius;

    cout << "Area: " << area << "\nCircumference: " << circumference << endl;

    return 0;
}

/* Program no 8 */
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers:\n";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

/* Program no 9 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, surfaceArea, volume;
    const double PI = 3.14159;

    cout << "Enter radius of the sphere: ";
    cin >> radius;

    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Surface Area: " << surfaceArea << "\nVolume: " << volume << endl;

    return 0;
}

/* Program no 10 */
#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0;

    cout << "Enter a three-digit number: ";
    cin >> num;

    reversedNum = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}

/* Program no 11 */
#include <iostream>
using namespace std;

int main() {
    double miles, kilometers;

    cout << "Enter distance in miles: ";
    cin >> miles;

    kilometers = miles * 1.609;
    cout << "Distance in kilometers: " << kilometers << endl;

    return 0;
}

/* Program no 12 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area of the triangle: " << area << endl;

    return 0;
}

/* Program no 13 */
#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}

/* Program no 14 */
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}

/* Program no 15 */
#include <iostream>
using namespace std;

int main() {
    double salary, bonus;
    int grade;

    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade > 15) {
        bonus = 0.5 * salary;
    } else {
        bonus = 0.25 * salary;
    }

    salary += bonus;
    cout << "Total salary after bonus: " << salary << endl;

    return 0;
}

/* Program no 16 */
#include <iostream>
using namespace std;

int main() {
    double salary, netSalary;

    cout << "Enter salary: ";
    cin >> salary;

    if (salary >= 20000) {
        netSalary = salary - (0.07 * salary);
    } else if (salary >= 10000) {
        netSalary = salary - 1000;
    } else {
        netSalary = salary;
    }

    cout << "Net salary: " << netSalary << endl;

    return 0;
}

/* Program no 17 */
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << num << " is positive." << endl;
    } else if (num < 0) {
        cout << num << " is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

/* Program no 18 */
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter test score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}

/* Program no 19 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, result;
    int choice;
    const double PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter 1 to calculate area, 2 to calculate circumference: ";
    cin >> choice;

    if (choice == 1) {
        result = PI * pow(radius, 2);
        cout << "Area: " << result << endl;
    } else if (choice == 2) {
        result = 2 * PI * radius;
        cout << "Circumference: " << result << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

/* Program no 20 */
#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature > 35) {
        cout << "Hot Day" << endl;
    } else if (temperature >= 25 && temperature <= 35) {
        cout << "Pleasant Day" << endl;
    } else {
        cout << "Cool Day" << endl;
    }

    return 0;
}

/* Program no 21 */
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << "Smallest number is: " << num1 << endl;
    } else if (num2 <= num1 && num2 <= num3) {
        cout << "Smallest number is: " << num2 << endl;
    } else {
        cout << "Smallest number is: " << num3 << endl;
    }

    return 0;
}

/* Program no 22 */
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Largest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Largest number is: " << num2 << endl;
    } else {
        cout << "Largest number is: " << num3 << endl;
    }

    return 0;
}

/* Program no 23 */
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is a consonant." << endl;
    }

    return 0;
}

/* Program no 24 */
#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}

/* Program no 25 */
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        i++;
    }

    cout << endl;
    return 0;
}

/* Program no 26 */
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 5) {
        cout << i << " ";
        sum += i;
        i++;
    }

    cout << "\nSum: " << sum << endl;
    return 0;
}

/* Program no 27 */
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << "Number: " << i << ", Square: " << (i * i) << endl;
        i++;
    }

    return 0;
}

/* Program no 28 */
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Using a while loop for demonstration
    while (true) {
        temp = a;
        a = b;
        b = temp;
        break;
    }

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

/* Program no 29 */
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " x " << i << " = " << (num * i) << endl;
        i++;
    }

    return 0;
}

/* Program no 30 */
#include <iostream>
using namespace std;

int main() {
    int num, i = 1, factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (i <= num) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}

/* Program no 31 */
#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int i = 1;

    while (i <= 100) {
        sum += 1.0 / i;
        i += 2; // Increment by 2 for the series 1 + 1/2 + 1/4 + 1/6 + ...
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}
// Program 32: Sum of Series Using do-while Loop
#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int i = 1;

    do {
        sum += 1.0 / i;
        i += 2; // Increment by 2 for the series
    } while (i <= 100);

    cout << "Sum of the series: " << sum << endl;
    return 0;
}

// Program 33: Display Odd Numbers in a Range Using do-while
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting point: ";
    cin >> start;
    cout << "Enter ending point: ";
    cin >> end;

    cout << "Odd numbers in the range:" << endl;
    do {
        if (start % 2 != 0) {
            cout << start << " ";
        }
        start++;
    } while (start <= end);

    cout << endl;
    return 0;
}

// Program 34: Power of a Number Using do-while

#include <iostream>
using namespace std;

int main() {
    int base, exp, result = 1;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    int i = 0;
    do {
        result *= base;
        i++;
    } while (i < exp);

    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}

// Program 35: Display Powers of 2
#include <iostream>
using namespace std;

int main() {
    int result = 1;

    for (int i = 0; i < 7; i++) {
        cout << result << endl;
        result *= 2;
    }

    return 0;
}

// Program 36: Factorial of a Number Using do-whil
#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1, i = 1;

    cout << "Enter a number: ";
    cin >> num;

    do {
        factorial *= i;
        i++;
    } while (i <= num);

    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}

// Program 37: Display Alphabets from A to Z Using for Loop
#include <iostream>
using namespace std;

int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}

// Program 38: Product of All Odd Numbers from 1 to 10
#include <iostream>
using namespace std;

int main() {
    int product = 1;

    for (int i = 1; i <= 10; i += 2) {
        product *= i;
    }

    cout << "Product of all odd numbers from 1 to 10: " << product << endl;
    return 0;
}

// Program 39: Factorial Using for Loop
#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << num << " is " << factorial << endl;
    return 0;
}

// Program 40: Multiplication Table with Length Using for Loop
#include <iostream>
using namespace std;

int main() {
    int num, length;

    cout << "Enter the table number: ";
    cin >> num;
    cout << "Enter the length of the table: ";
    cin >> length;

    for (int i = 1; i <= length; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}

// Program 41: Reverse a Positive Integer Number
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}

// Program 42: Sum of Series Using for Loop
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}

// Program 43: Sum of Squares from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "Sum of squares from 1 to " << n << ": " << sum << endl;
    return 0;
}

// Program 44: Display Shape Using while Loop
#include <iostream>
using namespace std;

int main() {
    int rows = 5, stars = 5;

    while (rows > 0) {
        for (int i = 0; i < stars; i++) {
            cout << "*";
        }
        cout << endl;
        rows--;
        stars--;
    }

    return 0;
}

// Program 45: Sum of Factorials Using for Loop
#include <iostream>
using namespace std;

int main() {
    int sum = 0, factorial;

    for (int i = 1; i <= 5; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += factorial;
    }

    cout << "Sum of factorials: " << sum << endl;
    return 0;
}

// Program 46: Sum of Series with Powers Using for Loop
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, sum = 0;

    cout << "Enter a number (x): ";
    cin >> x;

    for (int i = 1; i <= 5; i++) {
        sum += i * pow(x, i - 1);
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}

// Program 47: Sum of Fractions Series Using for Loop
#include <iostream>
using namespace std;

int main() {
    double sum = 0;

    for (int i = 1; i < 100; i++) {
        sum += static_cast<double>(i) / (i + 1);
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}

// Program 48: Display Squares and Cubes of Five Values
#include <iostream>
using namespace std;

int main() {
    int num;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter a number: ";
        cin >> num;

        cout << "Square: " << (num * num) << ", Cube: " << (num * num * num) << endl;
    }

    return 0;
}

// Program 49: Find GCD of Two Numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD is: " << a << endl;
    return 0;
}

// Program 50: Display a Pattern Using Nested Loops
#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}