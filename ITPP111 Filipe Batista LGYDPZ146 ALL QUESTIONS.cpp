#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Question 1.1" << endl;

    //Declare variables
    double loan;
    double interest_rate;
    double months;
    double monthly_formula;

    //Displays the loan amount, interest rate and loan repayment period
    cout << "Please enter the loan amount you want" << endl;
    cin >> loan;
    cout << "Please enter the interest rate" << endl;
    cin >> interest_rate;
    cout << "Please enter how many months you want to take to repay your loan" << endl;
    cin >> months;

    //Determines your monthly repayment amount
    monthly_formula = loan * pow(1 + ((interest_rate / 100) / 12), months);
    cout << "This is your monthly repayment : R" << monthly_formula << endl;

    //QUESTION 2.2
    
    cout << "Question 2.2" << endl;

    //Declare variables
    double vol;
    double area;
    const double side = 4;
    string run;

    //Activates the program
    area = 6 * pow(side, 2);
    cout << "This is the area of a cube : " << area << endl;

    //Determines the volume of a cube
    vol = pow(side, 3);
    cout << "This is the volume of a cube : " << vol << endl;

    //QUESTION 3
    
    cout << "Question 3" << endl;
    
    //Declare variables
    string result;
    double total_price;
    double tendered_total;
    double total;

    do
    {
        cout << "Please enter the first product's price" << endl;
        cin >> total_price;

        total_price = total_price;

        cout << "Would you like to enter in another product? Enter 'yes' or 'no'. " << endl;
        cin >> result;

    } while (result == "yes");

    cout << fixed << setprecision(2) << "The total will be : R" << total_price << endl;
    
    cout << "Please enter the amount that must be tendered" << endl;
    cin >> tendered_total;

    total = tendered_total - total_price;

    cout << fixed << setprecision(2) << "The change due will be : R" << total << endl;
    cout << "Thank you for shopping with us. Enjoy your day!" << endl;

    return 0;
}