// #include<bits/stdc++.h>
// using namespace std;

// string int_to_binary(int decimal) {
//    static string binary = "";

//     if ( decimal > 0 ) {
//         if ( decimal % 2 == 0 ) return "0";
//         else return "1";
//         binary = binary += int_to_binary( decimal /= 2 );
//     }
//     return binary;
// }

// int main(){
//     string result = int_to_binary( 4 );
//     // int_to_binary( 2 );

//     cout << result << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
string int_to_binary( int decimal ){
    // base case 
    // if ( decimal == 0 ) return "0";
    // if ( decimal == 1 ) return "1";
    
    // return int_to_binary( decimal / 2 ) + char( ( decimal % 2 ) + '0' );
    string binary = "";

    // base case
    if ( decimal <= 0 ){
        return binary;
    }

    if ( decimal % 2 == 0 ) {
        binary = int_to_binary( decimal / 2 ) + '0';
    }else{
         binary = int_to_binary( decimal / 2 ) + '1';
    }
    return binary;
}

int main(){
    int decimal;
    cin >> decimal;
    string result = int_to_binary( decimal );
    cout << result;
    return 0;
}