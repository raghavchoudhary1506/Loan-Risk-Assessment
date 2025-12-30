#include <stdio.h>

int main() {
    float income, liabilities;
    int creditScore;

    printf("Enter Monthly Income (in Rs): ");
    scanf("%f", &income);

    printf("Enter Credit Score (300 - 850): ");
    scanf("%d", &creditScore);

    printf("Enter Existing Liabilities (in Rs): ");
    scanf("%f", &liabilities);

    if (income > 50000 && creditScore > 750 && liabilities < income * 0.3) {
        printf("\nRisk Level: LOW RISK\n");
        printf("Reason: High income, good credit score, low liabilities.\n");
    }
    else if (income > 30000 && creditScore > 650 && liabilities < income * 0.5) {
        printf("\nRisk Level: MEDIUM RISK\n");
        printf("Reason: Moderate income and credit score.\n");
    }
    else {
        printf("\nRisk Level: HIGH RISK\n");
        printf("Reason: Low income, poor credit score or high liabilities.\n");
    }

    return 0;
}
