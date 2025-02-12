#include <iostream>

using namespace std;

float calculateAllowance(float basicSalary, float allowancePercentage) {
    return basicSalary * (allowancePercentage / 100);
}


float calculateDeduction(float basicSalary, float deductionPercentage) {
    return basicSalary * (deductionPercentage / 100);
}


float calculateGrossSalary(float basicSalary, float allowance) {
    return basicSalary + allowance;
}


float calculateNetSalary(float grossSalary, float deduction) {
    return grossSalary - deduction;
}

int main() {
    float basicSalary, allowance, deduction, grossSalary, netSalary;
    float allowancePercentage, deductionPercentage;
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    
    cout << "Enter allowance percentage (e.g., 20 for 20%): ";
    cin >> allowancePercentage;

    cout << "Enter deduction percentage (e.g., 10 for 10%): ";
    cin >> deductionPercentage;
	allowance = calculateAllowance(basicSalary, allowancePercentage);
    deduction = calculateDeduction(basicSalary, deductionPercentage);
    grossSalary = calculateGrossSalary(basicSalary, allowance);
    netSalary = calculateNetSalary(grossSalary, deduction);
    cout << "\nBasic Salary: " << basicSalary << endl;
    cout << "Allowance (" << allowancePercentage << "% of Basic Salary): " << allowance << endl;
    cout << "Deduction (" << deductionPercentage << "% of Basic Salary): " << deduction << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary (Gross Salary - Deduction): " << netSalary << endl;

    return 0;
}
