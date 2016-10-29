/**
 * A program to decide the best way to be compensated for a new job
 */

 #include <iostream>
 using namespace std;

 // Constants
 #define PRICE_PER_UNIT 225
 #define WEEKLY_WAGE 600
 #define SALARY 7.00
 #define HOURS_PER_WEEK 40
 #define COMMISION_2 0.10
 #define COMMISION_3 0.20
 #define BONUS_PER_UNIT 20

 // A function to retrieve the weekly sales for units
 int getInput() {
   int units = 0;
   do {
     cout << "Enter the number of units sold per week: ";
     if (!(cin >> units)) {
       cout << "Please enter a non-negative, numeric input." << endl;
       cin.clear();
       cin.ignore(10000, '\n');
     } else if (units <= 0) {
       cout << "Please enter a non-negative, numeric input." << endl;
     }
   } while (units <= 0);
   return units;
 }

 // Calculate the total for method 1
 void calculateMethodOne() {
   cout << "Method 1: $" << WEEKLY_WAGE << endl;
 }

 // Calculate the total for method 2
 void calculateMethodTwo(int sales) {
   double perHour, totalPay, commission;
   perHour = SALARY * HOURS_PER_WEEK;
   commission = (sales * PRICE_PER_UNIT) * COMMISION_2;
   totalPay = perHour * commission;
   cout << "Method 2: $" << totalPay << endl;
 }

 // Calculate the total for method 3
 void calculateMethodThree(int sales) {
   int extra;
   double totalPay, commission;
   extra = BONUS_PER_UNIT * sales;
   commission = (sales * PRICE_PER_UNIT) * COMMISION_3;
   totalPay = extra + commission;
   cout << "Method 3: $" << totalPay << endl;
 }

 int main() {
   int weeklySales = getInput();
   if (weeklySales == 0) {
     return 0;
   } else {
     calculateMethodOne();
     calculateMethodTwo(weeklySales);
     calculateMethodThree(weeklySales);
   }
 }