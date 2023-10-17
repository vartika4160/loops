#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    
    if (marks <= 100 && marks >= 90){
        cout << "Your grade is O";
    }
    else if (marks < 90 && marks >= 80){
        cout << "Your grade is A+";
    }
    else if (marks < 80 && marks >= 70){
        cout << "Your grade is A";  
    }
    else if (marks < 70 && marks >= 60){
        cout << "Your grade is B+";
    }  
    else if (marks < 60 && marks >= 50){
        cout << "Your grade is C";
    }
    else if (marks < 50){
        cout << "Your grade is Failed";
    }
    else{
        cout << "Enter Valid Marks";
    }

    return 0;
}
