#include <iostream>
using namespace std;


int main(){
    string name;
    int ID;
    int gear;
    string movie;
    string day;
    string word;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name <<" is a really cool name.\nFahsai: I think you are an Engineering student. What is your student ID?\n"<< name <<": ";
    cin >> ID;
    cin.ignore();
    gear = (ID/10000000)-12;
    cout << "Fahsai: I think you may be GEAR "<< gear <<". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n"<< name <<": ";
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    cout << name <<": ";
    getline(cin,word);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
    
    return 0;
}