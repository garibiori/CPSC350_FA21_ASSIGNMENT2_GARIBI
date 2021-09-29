#include <iostream> 
using namespace std;

class Translator
{
public:
    Translator();  //default constructor
    ~Translator(); //destructor
    string translateEnglishWord(string input);
    string translateEnglishSentence(string input);
    string translateTutneseWord(string input);
    string translateTutneseSentence(string input);
};