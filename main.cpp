#include <iostream>
#include <cstdlib> // using rand() & srand()
#include <ctime> // using time()

using namespace std;

int main() {

    int random_number;
    size_t count {10};
    int min {1};
    int max {10};

    cout << "My system's max random number: " << RAND_MAX << endl;
    srand(time(nullptr)); // make different random numbers always

    for (size_t i {1} ; i < count ; ++i) {

        random_number = rand() % max + min; // make random numbers between { min , max }
        cout << random_number << endl;

    }

    cout << endl;

    return 0;
}
