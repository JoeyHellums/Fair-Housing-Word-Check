////////////////////////////////////////////////////////
// Programmer:Joey Hellums (github.com/JoeyHellums)   //
//╩╩╩╬╬╬╬╬  ░▒▓▓▓▓  ██████ ╗\\   ╗//  ╔══════════════╗//
//   ▐╬    ░▒▓  ░▒▓ █       ╗\\ ╗//   ║├┤≡▌▌╚╛╒╤╕$>_ ║//
//   ▐╬    ░▒▓  ░▒▓ █        ╗\\//    ║              ║//
//   ▐╬    ░▒▓  ░▒▓ █▀▀▀      ║||     ║              ║//
//▐  ▐╬    ░▒▓  ░▒▓ █         ║||     ║              ║//
// ▀▀▀      ░▒▓▓▓▓  ██████    ║||     ╚══════════════╝//
////////////////////////////////////////////////////////


//Include guard
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

using namespace std;

//Function declarations

void PrintMatches(std::string str, std::regex reg);
void TestSingleWord(string str, string word);
void TestBeforeWord(string str, string word, string second);
void TestAfterWord(string str, string word, string second);
void TestHandicappedWord(string str);
void TestExecutiveWord(string str);


#endif // !_FUNCTIONS_H
