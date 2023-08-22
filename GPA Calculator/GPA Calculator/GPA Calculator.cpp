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