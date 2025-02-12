/*
Lab 1: Box Office
Nombre: Rafael Avila Hernandez
Núm. Est: 801-24-4941
Colaboraciones: 
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare variables
    string movie_name;
    int adult_tickets, child_tickets;
    
    // Constants for ticket prices
    const double adult_ticket_price = 10.00;
    const double child_ticket_price = 6.00;

    // Ask for user input
    cout << "Enter the name of the movie: ";
    getline(cin, movie_name);
    
    cout << "Enter the number of adult tickets sold: ";
    cin >> adult_tickets;
    
    cout << "Enter the number of child tickets sold: ";
    cin >> child_tickets;

    // Calculate gross box office profit
    double gross_profit = (adult_tickets * adult_ticket_price) + (child_tickets * child_ticket_price);

    // Calculate net box office profit (20% of gross profit)
    double net_profit = gross_profit * 0.20;

    // Calculate the amount paid to distributor (80% of gross profit)
    double amount_paid_to_distributor = gross_profit - net_profit;

    // Set output formatting
    cout << fixed << setprecision(2);

    // Output the results
    cout << endl;
    cout << left << setw(30) << "Movie Name:" << "\"" << movie_name << "\"" << endl;
    cout << left << setw(30) << "Adult Tickets Sold:" << adult_tickets << endl;
    cout << left << setw(30) << "Child Tickets Sold:" << child_tickets << endl;
    cout << left << setw(30) << "Gross Box Office Profit:" << "$" << setw(10) << gross_profit << endl;
    cout << left << setw(30) << "Net Box Office Profit:" << "$" << setw(10) << net_profit << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" << "$" << setw(10) << amount_paid_to_distributor << endl;

    return 0;
}
 

