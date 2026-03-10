//Abhineet Singh
#include <iostream>
using namespace std;

void showDay();
void showAmounts(double arr[], int size);

int main() {
    const int MAX_SIZE = 10;
    int numDays = 7;
    double total = 0;

    double amounts[MAX_SIZE] = {1200, 1800, 900, 1500, 800, 1100, 1300};
    cout << "Welcome to Store Sales Data Analysis!" << endl;
    //cout << "Day 1 sales: " << amounts[0] << endl;

    showDay();
    showDay();

   // cout << "Array memory: ~" <<
   // sizeof(amounts);
   double max = amounts[0];
   int transactions[MAX_SIZE] = {50,75,40,60,30,45,55};
  for (int i = 0; i < numDays; i++){
    cout << "Day" << i + 1 << ": $" <<
    amounts[i] << ", " << transactions[i] << endl;
  }
   for (int i = 0; i < numDays; i++){
    cout << "Day " << i + 1 << ": $" << 
    amounts[i] << endl;
    total += amounts [i];
    if (amounts[i] > max) max = amounts[i];
   }
   cout << "Total sales: $" << total <<endl;
   cout << "Average sales: $" << total/numDays << endl;
   cout << "Highest sales: $" << max <<endl;
   /*
   for(double val : amounts){
    cout << "$ " << val << " ";

   }
   cout << endl;
   */
  

    return 0;
}
void showDay(){
    static int dayNum = 1; //Persists
    cout << "Showing day" << dayNum << endl;
}
void showAmounts(double arr[], int size){
    for (int i = 0; i < size ; i++){
        cout << "$" << arr[i]<< " ";

    }
    cout << endl;
}
