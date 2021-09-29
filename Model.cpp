#include <fstream>
#include <iostream>
#include "Model.h" 
using namespace std;

Model::Model()
{
    //default constructor body, it's empty
}
Model::~Model()
{
    //default destructor
}

string Model::translateSingleCharacter(char letter)
{
    //translates a single character in the word by translating each character
    string word = "";
    string newPhrase = "";
    if (letter == 'B')
    {
        word = "Bub";
    }
    else if (letter == 'C')
    {
        word = "Cash";
    }
    else if (letter == 'D')
    {
        word = "Dud";
    }
    else if (letter == 'F')
    {
        word = "Fuf";
    }
    else if (letter == 'G')
    {
        word = "Gug";
    }
    else if (letter == 'H')
    {
        word = "Hash";
    }
    else if (letter == 'J')
    {
        word = "Jay";
    }
    else if (letter == 'K')
    {
        word = "Kuck";
    }
    else if (letter == 'L')
    {
        word = "Lul";
    }
    else if (letter == 'M')
    {
        word = "Mum";
    }
    else if (letter == 'N')
    {
        word = "Nun";
    }
    else if (letter == 'P')
    {
        word = "Pub";
    }
    else if (letter == 'Q')
    {
        word = "Quack";
    }
    else if (letter == 'R')
    {
        word = "Rug";
    }
    else if (letter == 'S')
    {
        word = "Sus";
    }
    else if (letter == 'T')
    {
        word = "Tut";
    }
    else if (letter == 'V')
    {
        word = "Vuv";
    }
    else if (letter == 'W')
    {
        word = "Wack";
    }
    else if (letter == 'X')
    {
        word = "Ex";
    }
    else if (letter == 'Y')
    {
        word = "Yub";
    }
    else if (letter == 'Z')
    {
        word = "Zub";
    }
    else if (letter == 'b')
    {
        word = "bub";
    }
    else if (letter == 'c')
    {
        word = "cash";
    }
    else if (letter == 'd')
    {
        word = "dud";
    }
    else if (letter == 'f')
    {
        word = "fuf";
    }
    else if (letter == 'g')
    {
        word = "gug";
    }
    else if (letter == 'h')
    {
        word = "hash";
    }
    else if (letter == 'j')
    {
        word = "jay";
    }
    else if (letter == 'k')
    {
        word = "kuck";
    }
    else if (letter == 'l')
    {
        word = "lul";
    }
    else if (letter == 'm')
    {
        word = "mum";
    }
    else if (letter == 'n')
    {
        word = "nun";
    }
    else if (letter == 'p')
    {
        word = "pub";
    }
    else if (letter == 'q')
    {
        word = "quack";
    }
    else if (letter == 'r')
    {
        word = "rug";
    }
    else if (letter == 's')
    {
        word = "sus";
    }
    else if (letter == 't')
    {
        word = "tut";
    }
    else if (letter == 'v')
    {
        word = "vuv";
    }
    else if (letter == 'w')
    {
        word = "wack";
    }
    else if (letter == 'x')
    {
        word = "ex";
    }
    else if (letter == 'y')
    {
        word = "yub";
    }
    else if (letter == 'z')
    {
        word = "zub";
    }
    else
    {
        word = letter;
    }

    return word;
}

string Model::translateDoubleCharacter(char letter)
{
    //looks for double characters and translates them by placing squat or squa in front of them
    string output;
    if(letter == 'E' || letter == 'A' || letter == 'I' || letter == 'O' || letter == 'U'){
        output = "Squat";
    }
    else if(letter == 'e' || letter == 'a' || letter == 'i' || letter == 'o' || letter == 'u'){
        output = "squat";
    }
    else if(letter == 'B' || letter == 'C' || letter == 'D' || letter == 'F' || letter == 'G' || letter == 'H' || letter == 'J' || letter == 'K' || letter == 'L' || letter == 'M' || letter == 'N' || letter == 'P' || letter == 'Q' || letter == 'R' || letter == 'S' || letter == 'T' || letter =='V' || letter =='W' ||letter =='X' || letter == 'Y' || letter =='Z'){
        output = "Squa";
    }
    else{
        output = "squa";
    }
    return output;
}


string Model::translateSingleCharacter2(string word){
    //looks for single character translations and untranslates them by iterating through the string
    string letterTrans;
    string letterTrans2;
    string letterTrans3;
    string letterTrans4;
    string letterTrans5;
    string transWord;

    for(int i=0;i<word.length(); ++i){
        letterTrans += toupper(word[i]);
        letterTrans += word[i+1];
        letterTrans += word[i+2];
        letterTrans2 += toupper(word[i]);
        letterTrans2 += word[i+1];
        letterTrans2 += word[i+2];
        letterTrans2 += word[i+3];
        letterTrans3 += toupper(word[i]);
        letterTrans3 += word[i+1];
        letterTrans3 += word[i+2];
        letterTrans3 += word[i+3];
        letterTrans3 += word[i+4];
        letterTrans4+= word[i];
        letterTrans4+= word[i+1];
        letterTrans5 += toupper(word[i]);
        letterTrans5 += word[i+1];
        letterTrans5 += word[i+2];
        letterTrans5 += word[i+3];
        letterTrans5 += word[i+4];
        letterTrans5 += word[i+5];
        letterTrans5 += word[i+6];
        if(letterTrans5 == "Squatut"){ //this is used to make squatut into tt
            if(word[i]=='S'){
                transWord += 'T';
                i+=3;
            }
            else if(word[i]=='s'){
                transWord += 't';
                i+=3;
            }
            letterTrans5.clear();
        }
        else if(letterTrans == "Bub" || letterTrans == "Dud" || letterTrans == "Fuf"|| letterTrans == "Gug" || letterTrans == "Jay" || letterTrans == "Lul"|| letterTrans == "Mum" || letterTrans == "Nun" || letterTrans == "Pub" || letterTrans == "Rug"|| letterTrans == "Sus" || letterTrans == "Tut" || letterTrans == "Vuv" || letterTrans == "Yub" || letterTrans == "Zub"){
            transWord+= word[i];
            i+=2;
            letterTrans.clear();
        }
        else if(letterTrans2 == "Cash" || letterTrans2 == "Hash" || letterTrans2 == "Kuck"|| letterTrans2 == "Wack"){
            transWord+= word[i];
            i+=3;
            letterTrans2.clear();
        }
        else if(letterTrans3 == "Quack"){
            transWord+= word[i];
            i+=4;
            letterTrans3.clear();
        }
        else if(letterTrans4 == "Ex"){
            transWord+= 'X';
            i+=1;
            letterTrans4.clear();
        }
        else if(letterTrans4 == "ex"){
            transWord+= 'x';
            i+=1;
            letterTrans4.clear();
        }
        else{
            transWord+= word[i];
        }

        letterTrans.clear();
        letterTrans2.clear();
        letterTrans3.clear();
        letterTrans4.clear();
        letterTrans5.clear();
    }
    return transWord;
}



string Model::translateDoubleCharacter2(string word){
    //looks for double character translations and changes them back to the original letters by iterating through the string and finding squa and squat
    char letter;
    string transWord;
    string letterSim;

    for(int i = 0; i < word.length(); ++i){
        letter = word[i];
        letterSim += toupper(word[i]);
        letterSim +=  word[i+1];
        letterSim += word[i+2];
        letterSim += word[i+3];  
        if(letterSim == "Squa" && word[i+4] != 't'){
            if(word[i] == 'S'){
                transWord+=toupper(word[i+4]);
                transWord+=tolower(word[i+4]);
            }
            else if(word[i] == 's'){
                transWord+=tolower(word[i+4]);
                transWord+=tolower(word[i+4]);
            }
            i+=4;
            letterSim.clear();
        }
        else if(letterSim == "Squa" && word[i+4] == 't'){
            if(word[i] == 'S'){
                transWord+=toupper(word[i+5]);
                transWord+=tolower(word[i+5]);
            }
            else if(word[i] == 's'){
                transWord+=tolower(word[i+5]);
                transWord+=tolower(word[i+5]);
            }
            i+=5;
            letterSim.clear();
        }
        else{
            transWord+=letter;
            letterSim.clear();
        }

    }
    return transWord;
}