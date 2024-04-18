#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int daysUntilExpiry;
    daysUntilExpiry = time (NULL) % 12;     // assigns random number between 0 and 11 to the variable

    switch (daysUntilExpiry) {
        case 0 : cout << "Your subscription has expired." << endl;
            break;
        case 1 : cout << "Your subscription expires within a day!"
                      << "\nRenew now and save 20%!"
                      << endl;
            break;
        case 2 :
        case 3 :
        case 4 :
        case 5 : cout << "Your subscription expires in "
                      << daysUntilExpiry
                      << " days\nRenew now and save 10%!"
                      << endl;
            break;
        case 6 :
        case 7 :
        case 8 :
        case 9 :
        case 10 : cout << "Your subscription will expire soon. Renew now!"
                       << endl;
            break;
        case 11 : cout << "You have an active subscription";
            break;
    }
    return 0;
}