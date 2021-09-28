#include <iostream> 
using namespace std;

class Translator
{
public:
    Translator();  //default constructor
    ~Translator(); //destructor
    string translateEnglishWord(string input);
    string translateEnglishSentence(string input);
    string translateEnglishWord2(string input);
    string translateEnglishSentence2(string input);
};