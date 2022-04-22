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
#include "Graphics.h"

using namespace std;



int main()
{
    string TestString = "";
    const string SingleTestWords[64] = {"able bodied","able-bodied","adult living","adults only","agile","alcoholic","bachelor","catholic","caucasian","chicano","child","couples","crippled","deaf","drinker","employed","empty nest","ethnic","exclusive","female","fisherman","gay","gender","gentleman","grandpa","handyman","latino","lesbian","male","man","married","membership approval","men","mens","men's","mental","mormon","mosque","mother in law","mother-in-law","nanny","nationality","newly weds","newly-weds","non drinker","non-drinker","non-smoker","older person","one child","one person","physically fit","quiet tenant","retarded","seasonal workers","section 8","shrine","social security insurance","ssi","student","synagogue","temple","two people","unemployed","walking distance to"};
    const string EthnicTestWords[22] = {"active","african","asian","black","blind","chinese","colored","hispanic","indian","irish","jewish","mature","mexican","oriental","polish","puertorican","retire","retired","retiree","single","stable","white"};;
    const string EthnicQualifierWords[17] = {"people","person","community","neighborhood","friendly","area","subdivision","crowd","family","folk","customer","individual","association","district","section","suburb","territory"};

    //pull file into string
    GetFile(TestString);

    //test for single flagged words
    for (int i = 0; i < 64; i++) 
    {
    TestSingleWord(TestString,SingleTestWords[i]);
    }

    //test for flagged ethnicity words
    for (int i = 0; i < 22; i++) 
    {
        for (int j = 0; j < 17; j++) 
        {
            TestBeforeWord(TestString, EthnicTestWords[i], EthnicQualifierWords[j]);
            TestAfterWord(TestString, EthnicTestWords[i], EthnicQualifierWords[j]);
        }
    }

    //test for handicapped case
    TestHandicappedWord(TestString);

    //test for executive case
    TestExecutiveWord(TestString);

    return 0;
}

