#include <stdio.h>

int main(void) {
    float loan_amount, interest_rate, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    interest_rate = interest_rate / 100.0f / 12.0f;
    loan_amount = loan_amount * (1.0f + interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", loan_amount);
    loan_amount = loan_amount * (1.0f + interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan_amount);
    loan_amount = loan_amount * (1.0f + interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan_amount);
    return 0;
}