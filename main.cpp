// Includes
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

// Declare static functions
static void mainMenu();
static void clearConsole();
static bool serviceActive;

// Declare constants
const int temp = 0;

int main()
{
	// Initialize variables
    serviceActive = false;

    mainMenu();
	return 0;
}

static void mainMenu() {
	bool printMenu = true;

    while (printMenu) {
        clearConsole();

        // Display logo
        std::cout << R"(
          __  __ _       _   _____           _        _                 _ _ 
         |  \/  (_)     (_) |  __ \         | |      | |               | | |
         | \  / |_ _ __  _  | |__) |_ _  ___| | _____| |___      ____ _| | |
         | |\/| | | '_ \| | |  ___/ _` |/ __| |/ / _ \ __\ \ /\ / / _` | | |
         | |  | | | | | | | | |  | (_| | (__|   <  __/ |_ \ V  V / (_| | | |
         |_|  |_|_|_| |_|_| |_|   \__,_|\___|_|\_\___|\__| \_/\_/ \__,_|_|_|

        _____________________________________________________________________
        )" << std::endl;

        int userSelection;

        // Display options
        if (serviceActive) {
            std::cout << "(1) Stop service" << std::endl;
        }
        else {
            std::cout << "(1) Start service" << std::endl;
        }
        std::cout << "(2) Check to see if a port is open" << std::endl;
        std::cout << "(3) Adjust firewall rules" << std::endl;
        std::cout << "(4) Exit" << std::endl;
        std::cout << std::endl;
        std::cout << ">>> ";

        std::cin >> userSelection;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            userSelection = 5;
        }

        switch (userSelection) {
        case 1:
            // Start or stop service
            serviceActive = !serviceActive;
            break;
        case 2:
            // Check to see if a port is open
            break;
        case 3:
            // Go to firewall rules menu
            break;
        case 4:
            // Exit
            printMenu = false;
            clearConsole();
            break;
        default:
            // Reprint menu
            break;
        }
    }
}

static void clearConsole() {
    // Clear the console
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}