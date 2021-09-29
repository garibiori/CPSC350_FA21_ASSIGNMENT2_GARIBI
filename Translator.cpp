#include <iostream>
#include "Translator.h"
#include "Model.h"

using namespace std;

Translator::Translator()
{
    //default constructor body, it's empty
}
Translator::~Translator()
{
    //default destructor
}

string Translator::translateEnglishWord(string word)
{
    //returns only single words by finding spaces and sends them to translate single and double characters
    Model *sp = new Model;
    char letter;
    string transWord;
    char letterSim;
    for(int i = 0; i < word.length(); ++i){ 
        letter = word[i];
        letterSim = word[i+1];
        if(toupper(word[i]) == toupper(letterSim)){ //finds double characters
            transWord+= sp->translateDoubleCharacter(letter); //points to double character function if there are double characters
            i = i+1;
            transWord+=sp->translateSingleCharacter(tolower(letter));
        }
        else if(letter!=' '){
            transWord+= sp->translateSingleCharacter(letter); //points to translating single characters

        }
        else{
            transWord+= ' ';
        }
    

    }
    return transWord;
}

string Translator::translateEnglishSentence(string phrase)
{   
    //returns the whole phrase and sends it to translate english word
    char letter;
    string word;
    string notLetter;
    for (int i=0; i < phrase.length(); ++i){
            letter = phrase[i];
        
            notLetter += letter;
      
    }
    word +=translateEnglishWord(notLetter);
    
    return word;
    
}

string Translator::translateTutneseWord(string word)
{
    //returns only single words and sends them to translate single and double characters
    Model *sp = new Model;
    char letter;
    string singleWord;
    string transWord;
    string firstRound;
    for(int i=0; i< word.length(); ++i){
        letter = word[i];

        singleWord+=letter;

    }
    firstRound += sp->translateSingleCharacter2(singleWord); //does the single chatacter translations first
    transWord += sp->translateDoubleCharacter2(firstRound);
    return transWord;


}


string Translator::translateTutneseSentence(string phrase)
{   
    //returns the whole phrase
    char letter;
    string word;
    string notLetter;
    for (int i=0; i < phrase.length(); ++i){
            letter = phrase[i];
        
            notLetter += letter;
            
      
    }
    word +=translateTutneseWord(notLetter);
    return word;
    
}