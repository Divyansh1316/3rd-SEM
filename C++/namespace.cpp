// WAP in C++ to demonstrate the concept of namespaces.
/*
#include <iostream>
using namespace std;

namespace first
{
    int func()
    {
        cout << "First namespace";
    }
}
namespace second
{
    int func()
    {
        cout << "Second namespace";
    }
}

int main()
{
    first ::func();
    second ::func();
}*/
#include <iostream>

using namespace std;

namespace Payment {
    class Transaction {
    public:
        void process() {
            cout << "Processing payment transaction" << endl;
        }
    };
}

namespace User {
    class Transaction {
    public:
        void log() {
            cout << "Logging user transaction" << endl;
        }
    };
}

int main() {
    // Create instances of Transaction in both modules
    Payment::Transaction paymentTransaction;
    User::Transaction userTransaction;

    paymentTransaction.process();
    userTransaction.log();

    return 0;
}
