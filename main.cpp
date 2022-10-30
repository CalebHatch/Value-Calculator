/**
 * Item Value Calculator
 * by Caleb Hatch
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Main drives the program. Gets price of user's potential product, gets similar product from x amount of years ago,
 * compares the prices of the two products, then informs the user if the item is a potentially good value or not.
 */
int main(){
    char userNewItem[50]; // Name of user's product
    printf("What is the name of the product you are purchasing?:\n");
    scanf("%s", userNewItem);

    double userNewItemPrice; // Price of user's product
    printf("\nHow much does the %s cost (in USD)?:\n", userNewItem);
    scanf("%lf", &userNewItemPrice);

    double userItemYears; // Years user keeps product
    printf("\nHow many years will you have this item before you sell it?:\n");
    scanf("%lf", &userItemYears);

    double userOldItemPrice; // Old product price to compare against new product's price
    printf("\nHow much does a %s from %.0f years ago cost?:\n", userNewItem, userItemYears);
    scanf("%lf", &userOldItemPrice);

    double userItemPriceDiff; // Difference in price between the new and old products
    userItemPriceDiff = (userNewItemPrice - userOldItemPrice);

    double userYearlyCost; // Cost per year to use user's potential product
    userYearlyCost = (userItemPriceDiff / userItemYears);

    printf("\nThe price difference between the new %s and the old %s is $%.2f.", userNewItem, userNewItem,
           userItemPriceDiff); // Inform user of price difference
    printf("\nYou will pay $%.2f per year to use your %s.", userYearlyCost, userNewItem); // Give value

    if (userYearlyCost >= 500) { // Worst value program gives
        printf("\nAnalysis says that this is a very bad value. Definitely consider cheaper options or keeping "
               "the product for longer to get more value out of it.");
    }

    else if (userYearlyCost > 300 && userYearlyCost < 500) { // Second-worst value program gives
        printf("\nAnalysis says that this is not the best value. Consider a cheaper option if possible.");
    }

    else if (userYearlyCost < 300 && userYearlyCost > 150) { // Middle of the road, decent value
        printf("\nAnalysis says that this is a decent value. Consider buying!");
    }

    else if (userYearlyCost < 150 && userYearlyCost > 80) { // Second-best value program gives
        printf("\nAnalysis says that this is a great value! Definitely consider buying!");
    }

    else if (userYearlyCost <= 80) { // Best value program gives
        printf("\nAnalysis says that this is an incredible value! Almost certainly, you should buy!");
    }

    return 0;
}