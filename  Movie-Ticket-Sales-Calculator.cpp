#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void) {
     // Declare variables for various inputs and calculations
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int noOfAdultTicketsSold;
    int noOfChildTicketsSold;
    double percentDonation;
    double grossAmount;
    double amountDonated;
    double netSaleAmount;

    // Set output format for floating-point numbers
    cout << fixed << showpoint << setprecision(2);

    // Prompt for movie name
    cout << "Enter the movie name: ";
    getline(cin, movieName);
    cout << endl;

    // Prompt for ticket prices
    cout << "Enter the adult ticket price: ";
    cin >> adultTicketPrice;
    cout << endl;
    
    cout << "Enter the child ticket price: ";
    cin >> childTicketPrice;
    cout << endl;

    // Prompt for ticket quantities
    cout << "Enter the number of adult tickets sold: ";
    cin >> noOfAdultTicketsSold;
    cout << endl;

    cout << "Enter the number of child tickets sold: ";
    cin >> noOfChildTicketsSold;
    cout << endl;

    // Prompt for donation percentage
    cout << "Enter the donation percentage: ";
    cin >> percentDonation;
    cout << endl << endl;

    // Calculate gross ticket sales
    grossAmount = adultTicketPrice * noOfAdultTicketsSold +
                  childTicketPrice * noOfChildTicketsSold;

    // Calculate donation amount
    amountDonated = grossAmount * percentDonation / 100;

    // Calculate net sale amount
    netSaleAmount = grossAmount - amountDonated;

    // Output results with formatting
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << setfill('.') << left << setw(35) << "Movie Name "
         << right << " " << movieName << endl;
    cout << left << setw(35) << "Tickets Sold: "
         << setfill(' ') << right << setw(10)
         << noOfAdultTicketsSold + noOfChildTicketsSold
         << endl;
    cout << setfill('.') << left << setw(35)
         << "Gross Sales: "
         << setfill('.') << right << " $"
         << setw(8) << grossAmount << endl;
    cout << setfill('.') << left << setw(35)
         << "Donation Percentage: "
         << setfill(' ') << right 
         << setw(9) << percentDonation << '%' << endl;
    cout << setfill('.') << left << setw(35)
         << "Donation Amount: "
         << setfill(' ') << right <<" $"
         << setw(8) << amountDonated << endl;
    cout << setfill('.') << left << setw(35) << "Net Sale: "
         << setfill(' ') << right << " $"
         << setw(8) << netSaleAmount << endl;

    return 0;
}


