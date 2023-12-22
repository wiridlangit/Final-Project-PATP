#include <iostream>
#include <cmath>

using namespace std;


int main() {
    unsigned int num_case = 0, start = 0, end = 0;
    bool isPrime = false, isValid = true;
    int input[10][2];

    /* Input */

    // cout<<"Enter the number of test cases (<= 10) \n";
    cin>>num_case;

    for (int case_id = 0; case_id < num_case; case_id++) {
        // cout<<"Enter 2 numbers (start and end) separated by a space. (1 <= start <= end <= 1000000000, end-start<=100000) \n";
        cin>>input[case_id][0]>>input[case_id][1];
    }


    /* Output */
    for (int case_id = 0; case_id < num_case; case_id++) {
        
        start = input[case_id][0];
        end = input[case_id][1];

            for (int i = start; i <= end; i++) {
                if ((i == 2) || (i == 3)) {
                    cout<<i<<endl;
                }
                else {
                    
                    if (i % 2 == 0) {
                        isPrime = false;
                    }
                    else {
                        for (int j = 3; j <= (sqrt(i) + 1); j += 2) {

                            if (i % j == 0) {
                                isPrime = false;
                                break;
                            }
                            else {
                                isPrime = true;
                            }
                        }
                    }

                    if (isPrime) cout<<i<<endl;
                }
            }
            cout<<endl;
    }
}