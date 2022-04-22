////////////////////////////////////////////////////////
// Programmer:Joey Hellums (github.com/JoeyHellums)   //
//╩╩╩╬╬╬╬╬  ░▒▓▓▓▓  ██████ ╗\\   ╗//  ╔══════════════╗//
//   ▐╬    ░▒▓  ░▒▓ █       ╗\\ ╗//   ║├┤≡▌▌╚╛╒╤╕$>_ ║//
//   ▐╬    ░▒▓  ░▒▓ █        ╗\\//    ║              ║//
//   ▐╬    ░▒▓  ░▒▓ █▀▀▀      ║||     ║              ║//
//▐  ▐╬    ░▒▓  ░▒▓ █         ║||     ║              ║//
// ▀▀▀      ░▒▓▓▓▓  ██████    ║||     ╚══════════════╝//
////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <fstream>
#include <regex>

#include "Functions.h"
using namespace std;

void PrintMatches(std::string str, std::regex reg)
{
    
    // Used when your searching a string
    std::smatch matches;
    
    // Show true and false in output
    std::cout << std::boolalpha;
       
    // Determines if there is a match and match 
    // results are returned in matches
    while(std::regex_search(str, matches, reg)){        
        
        // Get the first match
        std::cout << matches.str(1) << "\n";
        
        // Eliminate the previous match and create
        // a new string to search
        str = matches.suffix().str();
        
    }
}

void TestSingleWord(string str, string word)
{
    stringstream ss;

    ss << "([\b \n.,]+" << word << "[\b \n.,]+)";
    // Create the pattern to search for 
    string RegInput = ss.str();
    std::regex reg (RegInput);
    
    PrintMatches(str,reg);
}

void TestBeforeWord(string str, string word, string second)
{
    stringstream ss;

    ss << "([\b \n.,]+" << second << "[\b \n.,]+" << word << "[\b \n.,]+)";
    // Create the pattern to search for 
    string RegInput = ss.str();
    std::regex reg (RegInput);
    
    PrintMatches(str,reg);
}

void TestAfterWord(string str, string word, string second)
{
    stringstream ss;

    ss << "([\b \n.,]+" << word << "[\b \n.,]+" << second << "[\b \n.,]+)";
    // Create the pattern to search for 
    string RegInput = ss.str();
    std::regex reg (RegInput);
    
    PrintMatches(str,reg);
}

void TestHandicappedWord(string str)
{

    std::regex reg ("(handicapped [^a][^c][^c][^e][^s][^s][^i][^b][^l][^e])"); //handicapped not followed by accessible //this is a horrible way to do this but it just works(tm) 
    
    PrintMatches(str,reg);
}

void TestExecutiveWord(string str)
{

    std::regex reg ("([^ftu][^ohs][^rey] executive)"); //executive not preceeded by for, the, or (b)usy //this is a horrible way to do this but it just works(tm)
    
    PrintMatches(str,reg);
}
