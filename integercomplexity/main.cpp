#include <iostream>
#include <ctime>
#include <cmath>

int main() {
    //https://www.reddit.com/r/dailyprogrammer/comments/83uvey/20180312_challenge_354_easy_integer_complexity_1/

    long long int A = 1234567891011;

    long long int bestSum = A+1;

    int fac = sqrt(A)+1;

    for(int i=1;i<fac;i+=1){
        if(A%i == 0){
            long long int j = A/i;
            if(j+i<bestSum){
                bestSum=j+i;
            }
        }
    }

    std::cout << bestSum << std::endl;


    return 0;
}