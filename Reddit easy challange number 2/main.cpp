#include <iostream>


using namespace std;

/*
Hello, coders! An important part of programming is being able to apply your programs, so your challenge for today is to create a calculator application that has use in your life. It might be an interest calculator, or it might be something that you can use in the classroom. For example, if you were in physics class, you might want to make a F = M * A calc.

EXTRA CREDIT: make the calculator have multiple functions! Not only should it be able to calculate F = M * A, but also A = F/M, and M = F/A!

https://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/



Note: I chose to make an adjustable margin calculator for quoting customers.
*/


/*
How it will work:
Margins available are 20%, 30%, 50%
-ask what kind of customer you are quoting.
-ask the cost of the items
-ask if landed cost (intl freight) is included
-ask the quantity
-give them the price/each, and total price.
*/

char customerID(char);
float sellPrice_Calc(int, float*, float*, float*);

int main()
{
    char holder = 'A';

    float rbu_Margin = (1-.5);
    float small_Margin = (1-.3);
    float big_Margin = (1-.2);
    float total_Sell, buy_Price, sell_Price = 0;
    float margin_Val = 1;
    int quantity = 0;


    //cout << "debug customer_ID " << customer_ID << endl; toUpper is now working

    switch (customerID(holder)){

        case 'A':
            margin_Val = rbu_Margin;
            break;
        case 'B':
            margin_Val = small_Margin;
            break;
        case 'C':
            margin_Val = big_Margin;
            break;
        default :
            cout << "invalid.\n";
    }

    cout << endl << "What is the purchase price on this good?\n";
    cin >> buy_Price;

    cout << "How many parts do you want to quote?\n";
    cin >> quantity;

    total_Sell = sellPrice_Calc(quantity, &buy_Price, &sell_Price, &margin_Val);

    cout << "Total Sell: " << total_Sell << endl << "Sell /ea: " << sell_Price << endl << "Qty: " << quantity << endl;

    cout << "Ending program";

    return 0;
}


char customerID(char val){
    char temp = 'a';
    cout << "Welcome to the quotation calculator\n" << "What type of customer are you preparing your quote for?\n";

    cout << "A: An RBU customer\n" << "B: An existing, small customer.\n" << "C: An existing, premium customer.\n";
    cin >> temp;

    val = toupper(temp);

    return val;
};

float sellPrice_Calc(int qty, float* buy, float* sell, float* margin){
    float total;

    *sell = *buy / *margin; //Why not use pointers for everything :)

    total = *sell * qty;

    return total;
};
