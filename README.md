# GPA-Calculator-With-CPP
## Discription
This is the fist mini project for practice my C++ skill.
## Tools
-Microsoft Visual Studio.

## Code section
First i include <iostream> and <string> in this project.
```cpp
#include <iostream>
#include <string>
```
Next declear functions this 2 function is a Fucntion Overloading for 2 options value integer and value float and return with string value.
```cpp 
std::string Calculation(int score);
std::string Calculation(float score);
```
Next declear 3 variables scoreInt , scoreFloat , selectMode inside main function.
```cpp 
int main()
{
    int scoreInt = 0;
    float scoreFloat = 0.0;
    int selectMode = 0;
```
Next print the title and tell user for select mode to input number also get number for select mode from user.
```cpp 
    std::cout << "GPA Calculator by Jonathan Cavallaro" << std::endl;
    std::cout << "Select mode for input score number 1).integer or 2).float?: ";
    std::cin >> selectMode;
```
Next check number from "selectMode" and get number with variables i declear before then pass in parameter for return GPA. The return 0 is for main function.
```cpp 
if (selectMode == 1) {
        std::cout << "Enter score in Integer: ";
        std::cin >> scoreInt;
        std::cout << "Your GPA is: " << Calculation(scoreInt) << std::endl;
    }
    //select float function
    else if (selectMode == 2) {
        std::cout << "Enter score in Float: ";
        std::cin >> scoreFloat;
        std::cout << "Your GPA is: " << Calculation(scoreFloat) << std::endl;
    }
    else {
        //call main function when user error input select mode
        std::cout << "Error";
        main();
    }
    return 0;
```
Inside functions return GPA.
```cpp
//integer
std::string Calculation(int score) {
    if (score >= 80) {
        return "A";
    }
    else if (score >= 70) {
        return "B";
    }
    else if (score >= 60) {
        return "C";
    }
    else if (score >= 50) {
        return "D";
    }
    else {
        return "F";
    }
}
//float
std::string Calculation(float score) {
    if (score >= 80.0) {
        return "A";
    }
    else if (score >= 70.0) {
        return "B";
    }
    else if (score >= 60.0) {
        return "C";
    }
    else if (score >= 50.0) {
        return "D";
    }
    else {
        return "F";
    }
}
```
## Code overview
```cpp 
// GPA Calculator : make by Jonathan Cavallaro for practice C++ in beginner level enjoy your coding!
#include <iostream>
#include <string>
std::string Calculation(int score);
std::string Calculation(float score);
int main()
{
    //variables for get scores , select mode
    int scoreInt = 0;
    float scoreFloat = 0.0;
    int selectMode = 0;
    std::cout << "GPA Calculator by Jonathan Cavallaro" << std::endl;
    std::cout << "Select mode for input score number 1).integer or 2).float?: ";
    std::cin >> selectMode;
    //select integer function
    if (selectMode == 1) {
        std::cout << "Enter score in Integer: ";
        std::cin >> scoreInt;
        std::cout << "Your GPA is: " << Calculation(scoreInt) << std::endl;
    }
    //select float function
    else if (selectMode == 2) {
        std::cout << "Enter score in Float: ";
        std::cin >> scoreFloat;
        std::cout << "Your GPA is: " << Calculation(scoreFloat) << std::endl;
    }
    else {
        //call main function when user error input select mode
        std::cout << "Error";
        main();
    }
    return 0;
}


//function overloading
std::string Calculation(int score) {
    if (score >= 80) {
        return "A";
    }
    else if (score >= 70) {
        return "B";
    }
    else if (score >= 60) {
        return "C";
    }
    else if (score >= 50) {
        return "D";
    }
    else {
        return "F";
    }
}

std::string Calculation(float score) {
    if (score >= 80.0) {
        return "A";
    }
    else if (score >= 70.0) {
        return "B";
    }
    else if (score >= 60.0) {
        return "C";
    }
    else if (score >= 50.0) {
        return "D";
    }
    else {
        return "F";
    }
}
```
## Flowchart ref
![alt FlowchartRef](https://online.visual-paradigm.com/repository/images/d79fd1f5-35f1-4703-be15-b4940695e7f1/flowchart-design/simple-grading-system.png)
#### Note : It look difference between code and flowchart little bit 😜.
## Source
https://online.visual-paradigm.com/diagrams/templates/flowchart/simple-grading-system/


