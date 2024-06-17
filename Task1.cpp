#include <iostream>
#include <random>
using namespace std;

typedef unsigned int uint;

void guess(uint random_num);

int main(){

    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type>dist10(1, 10);

    uint num = dist10(rng);

    guess(num);

    return 0;
}

void guess(uint random_num){

    cout << "Guess the number from 1 to 10:";
    uint guessed_num;
    cin >> guessed_num;

    if (guessed_num > random_num){
        cout << "\nThe guessed number is too high, try again\n\n";
        return guess(random_num);
    }
    else if (guessed_num < random_num){
        cout << "\nThe guessed number is too low, try again\n\n";
        return guess(random_num);
    }
    else{
        cout << "Bravo! you guessed the number correctly";
    }
}
