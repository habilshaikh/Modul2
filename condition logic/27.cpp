#include <stdio.h>
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-
 

int main() {
    float bill, surcharge = 0.0, totalBill;

    
    for (int i = 0; i < 5; i++) { 
        printf("Enter the bill amount: ");
        scanf("%f", &bill);

    
        if (bill > 800) {
            surcharge = bill * 0.18;
        } else {
            surcharge = 0.0;
        }

        
        totalBill = bill + surcharge;

        
        if (totalBill < 256) {
            totalBill = 256;
        }

        
        printf("The total bill amount is: Rs. %.2f\n", totalBill);
    }

    return 0;
}

