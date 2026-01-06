#include <stdio.h>

int main(int argc, char **argv)
{
	double hoursWorked = 0.0;
    double grossPay = 0.0;
    double overtimeHours = 0.0;
    double overtimePay = 0.0;
    double taxDollarAmount = 0.0;
    double taxableAmount = 0.0;
    double netPay = 0.0;
    
    scanf("%lf", &hoursWorked);
    
    printf("You worked %lf hours this week\n", hoursWorked);
    
    
    
    if (hoursWorked <= 40){
        grossPay = hoursWorked * 12.0;
        printf("Gross pay is: $%lf\n", grossPay);
    }
    else if (hoursWorked > 40){
        grossPay = 40 * 12.0;
        overtimeHours = hoursWorked - 40;
        printf("regular 40 hour pay is: %lf\n", grossPay);
        overtimePay = overtimeHours * 1.5 * 12;
        grossPay += overtimePay;
        printf("Overtime hours is: %lf\n", overtimeHours);
        printf("Overtime pay is: $%lf\n", overtimePay);
        printf("Gross pay is: $%lf\n", grossPay);
    }
    
    if (grossPay <= 300){
        taxDollarAmount = grossPay * 0.15;
    }
    else if (grossPay <= 450 && grossPay > 300){
        taxableAmount = grossPay;
        taxDollarAmount = 300 * 0.15;
        taxableAmount -= 300;
        
        taxDollarAmount += taxableAmount * 0.2;
    }
    else if (grossPay > 450){
        taxableAmount = grossPay;
        taxDollarAmount = 300 * 0.15;
        taxableAmount -= 300;
        
        taxDollarAmount += 150 * 0.2;
        taxableAmount -= 150;
        
        taxDollarAmount += taxableAmount * 0.25;
    }
    
    netPay = grossPay - taxDollarAmount;
    
    printf("Tax dollar amount is: %lf\n", taxDollarAmount);
    printf("Net pay after taxes is: %lf\n", netPay);
    
	return 0;
}
