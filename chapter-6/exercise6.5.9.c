#include <stdio.h>
//asks for total loan, monthly payment, yearly interest rate, and number of payments
//displays remaining balance after each payment

int main(void) {
    float total_loan, monthly_payment, yearly_interest; 
    int num_payments;

    //loan amount
    printf("Enter the dollar amount of the total loan: $");
    scanf("%f", &total_loan);

    while (total_loan < 0) {
        printf("!! Loan must be positive!\n");
        printf("Enter the dollar amount of the total loan: $");
        scanf("%f", &total_loan);
    }

    //monthly payment
    printf("Enter monthly payment: $");
    scanf("%f", &monthly_payment);

    while (monthly_payment < 0) {
        printf("!! Monthly payment must be positive!\n");
        printf("Enter monthly payment: $");
        scanf("%f", &monthly_payment);
    }

    //yearly interest
    printf("Enter the yearly interest rate in percent: %%");
    scanf("%f", &yearly_interest);

    while (yearly_interest < 0) {
        printf("!! Yearly interest rate must be positive!\n");
        printf("Enter the yearly interest rate in percent: %%");
        scanf("%f", &yearly_interest);
    }

    //number of payments
    printf("Enter the number of payments: ");
    scanf("%d", &num_payments);

    while (num_payments < 0) {
        printf("!! Number of payments must be positive!\n");
        scanf("%d", &num_payments);
    }

    printf("\n");

    float monthly_interest = yearly_interest/12.0f/100.f;

    for (int i = 1; i <= num_payments; i++) {
        total_loan *= (1 + monthly_interest);
        total_loan -= monthly_payment;
        if (total_loan <= 0) {
            printf("\nLoan paid off on payment number %d with $%.2f to spare!\n",
                i, ((-1) * total_loan));
            return 0;
        }
        printf("Payment %d: Total balance is $%.2f\n", i, total_loan);
    }

    return 0;
}
