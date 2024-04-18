#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int daysUntilExpiry;
    daysUntilExpiry = time (NULL) % 12;     // assigns random number between 0 and 11 to the variable

    if ((daysUntilExpiry <= 10) && (daysUntilExpiry > 5)) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }

    else if (daysUntilExpiry <= 5) {
        cout << "Your subscription expires in value of daysUntilExpirationdays" 
             << "\nRenew now and save 10%!"
             << endl;
    }

    else if (daysUntilExpiry == 1) {
        cout << "Your subscription expires within a day!"
             << "\nRenew now and save 20%!"
             << endl;
    }

    else if (daysUntilExpiry == 0) {
        cout << "Your subscription has expired." << endl;
    }

    else {
        cout << "You have an active subscription." << endl;
    }
    
    return 0;
}