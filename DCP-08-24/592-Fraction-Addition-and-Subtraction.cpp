#include <string>
#include <numeric>
using namespace std;

class Solution {
public:
    string fractionAddition(string s) {
        int numerator = 0, denominator = 1;  

        for (int i = 0; i < s.length();) { 
            int sign = 1;
            if (s[i] == '-' || s[i] == '+') {
                sign = (s[i] == '-') ? -1 : 1;
                i++;
            }
            int num = 0;
            while (isdigit(s[i])) num = num * 10 + (s[i++] - '0');
            num *= sign; 
            i++; 
            int denom = 0;
            while (isdigit(s[i])) denom = denom * 10 + (s[i++] - '0');

            
            numerator = numerator * denom + num * denominator;
            denominator *= denom;
            
            int gcd = std::gcd(abs(numerator), denominator);
            numerator /= gcd;
            denominator /= gcd;
        }

        return to_string(numerator) + "/" + to_string(denominator);
    }
};
