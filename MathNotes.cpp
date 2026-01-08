#include <iostream>
#include <cmath>
using namespace std;
// get last term of arithmetic progression using first term, common difference and number of terms
/*
Arthimitec Sequence Formulas: [a ,  a + d , a + 2d , .... , a + (n-1)d]
the th term = a + (n-1)d
*/
long long Get_Position_Term_inArthimitec(long long first, long long diff, long long count) {
    return first + (count - 1) * diff;
}
long long GetSum(long long first, long long diff, long long count) {
    long long last = Get_Position_Term_inArthimitec(first, diff, count);
    return (count / 2) * (first + last);
}
// Fast Sum of first n natural numbers = n * (n + 1) / 2
long long Fast_Sum_Natural_Numbers(long long n) {
    return n * (n + 1) / 2;
}
long long NumberOFTermsInArthimiticSequeancr(long long first, long long diff, long long last) {
    return ((last - first) / diff) + 1;
}
// Gemotry Formulas: [a ,  a*r , a*r^2 , .... , a*r^(n-1)]
// the nth term = a * r^(n-1)
long long Get_position_term_in_geomtry(long long first, long long diff , long long count){
    return first * pow(diff , count - 1);
}
// Get Sum 
long long geometricSum(long long a, long long r, long long n)
{
    /*
    This function calculates the sum of the first n terms
    of a finite geometric sequence.

    Sequence:
    a + ar + ar^2 + ... + ar^(n-1)

    PROOF IDEA (explained in code comments):

    Let:
    S = a + ar + ar^2 + ... + ar^(n-1)

    Multiply both sides by r:
    rS = ar + ar^2 + ar^3 + ... + ar^n

    Subtract:
    S - rS = a - ar^n

    Factor:
    S(1 - r) = a(1 - r^n)

    Divide by (1 - r), r != 1:
    S = a(1 - r^n) / (1 - r)
*/
    // Special case: if r == 1, all terms are equal to 'a'
    // So the sum is simply n * a
    if (r == 1)
        return a * n;

    // Applying the derived formula:
    // S = a(1 - r^n) / (1 - r)
    long long sum = a * (1 - pow(r, n)) / (1 - r);

    return sum;
}

