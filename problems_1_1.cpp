// First Problem (Input/Output)

// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     cin>>x;
//      cout << x;

//     return 0;
// }


// Second Problem (If/Else)

// #include<iostream>
// using namespace std;

// int main(){

//     int marks;
//     cin>>marks;

//     if(marks>=90){
//         cout<<"Grade A";
//     }
//     else if(marks >= 70){
//         cout<<"Grade B";
//     }
//     else if(marks >= 50){
//         cout<<"Grade C";
//     }
//     else if(marks >= 35){
//         cout<<"Grade D";
//     }
//     else{
//         cout<<"Fail";
//     }



//     return 0;
// }


// 3. Switch-Case Problem

#include<iostream>
using namespace std;

int main(){

    int day;
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thirsday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;

    
    default:
    cout<<"Invalid";
        break;
    }


    return 0;
}