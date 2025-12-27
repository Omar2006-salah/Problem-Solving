#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t = 1;
    cin >> t;
    while (t--) {
        int n , d; cin >> n >> d;
        cout << 1 << " ";
        // n >= 3 so number of digits is (n!) and its (1* 2 * 3 * ....) so it divide 3
        if(n >= 3 || d % 3 == 0){
            cout << 3 << " ";
        }
        /*
         the result of d are d * (111111..) --> (n! digits)
         so to divide by 5 d must be 5 
        */
       if (d == 5){
        cout << 5 << " ";
       }
       /*
       as the result is d * (111111..) --> (n! digits)
       so result % 7 == 0
       if d == 7 || (number of digits % 6 == 0)
       number of digits --> n! will divide by 6 if and only if it is more than 
       or equal 3 as 1 * 2 * 3 * .... --> 6 * ....

       */
      if (d == 7 || n >= 3){
        cout << 7 << " ";
      }
      /*
      to divide by 9 mean 
      the reault divide by (3 * 3)
      so the result must divide by 3 first
      then when (result  / 3) can divide by 3
      so it will divide by 9 
      when n >= 6 
      */
     if (d == 9 || n >= 6 || (d % 3 == 0 && n >= 3)){
        cout << 9 << " ";
     }
     cout << endl;   
        
    }

    return 0;
}
