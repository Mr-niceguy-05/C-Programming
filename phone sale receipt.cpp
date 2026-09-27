#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    string customerName;
    string phoneModel;
    int quantity;
    double priceperphone, totalSales;

    // Prompt user for details
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> priceperphone;

    // Calculate total sales
    totalSales = quantity * priceperphone;

    // Display receipt
    
    cout << "        RUIRU MOBILE SHOP\n";
    cout << "           SALES RECEIPT\n";
    

    cout << "Customer Name   : " << customerName << endl;
    cout << "Phone Model     : " << phoneModel << endl;
    cout << "Quantity Bought : " << quantity << endl;
    cout << fixed << setprecision(2);
    cout << "Price Per Phone : " << priceperphone << endl;
    cout << "Total Sales     : " << totalSales << endl;

    return 0;
}