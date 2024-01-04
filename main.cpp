#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
bool    - Boolean
char    - Character
int     - Integer
float   - Floating point number
double  - Floating point number
void    - Abscence of a type

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations() 
{
  // example:
    int number = 2; // declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int magicNumber = 3;
    int dozen = 12;
    int zero = 0;
    
    bool isOnline = true;
    bool isAuthorized = false;
    bool hasKey = true;
    
    char grade = 'A';
    char dollar = '$';
    char tilde = '~';
    
    float pi = 3.14f;
    float phi = 1.618f;
    float oneThird = 0.33f;

    double oneQuarter = 0.25;
    double tau = 6.28318530717959;
    double eulersNum = 2.71828182845905;
    
    ignoreUnused(number, magicNumber, dozen, zero, isOnline, isAuthorized, 
        hasKey, grade, dollar, tilde, pi, phi, oneThird, oneQuarter, tau, 
        eulersNum); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0) // function declaration with random number of arguments, arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
    return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
 1)
 */
int power(int base, int exponent) 
{
    ignoreUnused(base, exponent);
    return {};
}

/*
 2)
 */
bool canDrive(int age = 0, bool hasLicense = false) 
{
    ignoreUnused(age, hasLicense);
    return {};
}

/*
 3)
 */
void setAlarm(int hour = 6, int minute = 30, bool is24Hours = true) 
{
    ignoreUnused(hour, minute, is24Hours);
}

/*
 4)
 */
char getGrade(int score) 
{
    ignoreUnused(score);
    return {};
}

/*
 5)
 */
bool isTriangle(int sideA = 0, int sideB = 0, int sideC = 0) 
{
    ignoreUnused(sideA, sideB, sideC);
    return {};
}

/*
 6)
 */
double getArea(double height, double width) 
{
    ignoreUnused(height, width);
    return {};
}

/*
 7)
 */
void printCircumference(double radius = 0) 
{ 
    ignoreUnused(radius); 
}

/*
 8)
 */
bool isPrime(int number) 
{
    ignoreUnused(number);
    return {};
}

/*
 9)
 */
bool canBeSharedEvenly(int chocolates, int people) 
{
    ignoreUnused(chocolates, people);
    return {};
}

/*
 10)
 */
double midiNoteToFrequency(int midiNote) 
{
    ignoreUnused(midiNote);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() 
{
    // example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);
    
    // 1)
    auto twoPowerTen = power(2, 10);
    // 2)
    auto shouldBuyCar = canDrive(18, true);
    // 3)
    setAlarm(6, 30, true); // returns void
    // 4)
    char studentGrade = getGrade(78);
    // 5)
    bool isValidTriangle = isTriangle(6, 8, 10);
    // 6)
    double rectangleArea = getArea(8.2, 5.4);
    // 7)
    double circumference = midiNoteToFrequency(60);
    // 8)
    bool isPrimeNumber = isPrime(7);
    // 9)
    bool isEveryoneHappy = canBeSharedEvenly(12, 6);
    // 10)
    double notePitch = midiNoteToFrequency(60);

    ignoreUnused(carRented, twoPowerTen, shouldBuyCar, studentGrade, 
        isValidTriangle, rectangleArea, circumference, isPrimeNumber,
        isEveryoneHappy, notePitch);

    std::cout << "good to go!" << std::endl;
    return 0;
}
