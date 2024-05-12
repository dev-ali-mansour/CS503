#include <iostream>

using namespace std;

struct employeeType { //Each employee has the following components (characteristics)
    string firstName;
    string lastName;
    int personID;
    int deptID;
    double yearlySalary;
    double monthlySalary;
    double yearToDatePaid;
    double monthlyBonus;
};

int main() {
    employeeType employees[50];
    double payCheck; //a variable to calculate the paycheck الراتب
    for (int counter = 0; counter < 50; counter++) {
        cout << employees[counter].firstName << " " << employees[counter].lastName << " ";
        payCheck = employees[counter].monthlySalary + employees[counter].monthlyBonus;
        employees[counter].yearToDatePaid = employees[counter].yearToDatePaid + payCheck;
        // yearToDatePaid تحديث للـ
        cout << payCheck << "\t" << endl;
    }

    return 0;
}