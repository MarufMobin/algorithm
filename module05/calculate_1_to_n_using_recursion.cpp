/* 
    Topic : Recursion
    Problem 01 : Calculate the Sum of all positive number from 1 to n
    Problem 02 : Check Whether a string is palindrome
 */

#include<bits/stdc++.h>
using namespace std;

int sum( int n ){
    if ( n == 1 ) return 1;
    return sum( n -1 ) + n;
}

/* 
// Normal aproch when using loop
bool is_palindrome( string str ){
    
    int n = str.size();
    int l = 0, r = n - 1;

    while( l < r ){
        if( str[l] != str[r] ){
            return false;
        }
        l++;
        r--;
    }
    return true;
} */
/* using Recursion to find Palindrome or not */

bool is_palindrome( string str ){
    // Base Case 
    if ( str == "" || str.size() == 1 ){
        return true;
    }
    int n = str.size();
    string small_str = str.substr( 1, n - 2 );
    return is_palindrome( small_str ) && ( str[0] == str.back() );
}

int main(){
    // int n;
    // cin >> n;
    // int result = sum( n );
    // cout << result;
    string str;
    cin >> str;
    if( is_palindrome( str ) ) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}