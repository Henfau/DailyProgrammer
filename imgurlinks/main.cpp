#include <iostream>
#include <cmath>

int main() {
    /*
     *
     * https://www.reddit.com/r/dailyprogrammer/comments/7yyt8e/20180220_challenge_352_easy_making_imgurstyle/
     *
     */

    char base62[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    long long int input = 237860461;

    int digits = 0;

    for(int i = 0;pow(62,i)<input;i++){
        digits = i;
    }
    char output[digits];

    long long int remainder;
    long long int digit;
    for(int i = digits;i>=0;i--){
        digit = input/ static_cast<long long int>(pow(62,i));
        remainder = input% static_cast<long long int>(pow(62,i));
        input = remainder;
        output[digits-i]= base62[digit];
        std::cout << output[digits-i];
    }
    return 0;
}

