#include "FileProcessor.h"
#include "Translator.h"
#include <fstream>
#include <iostream>
using namespace std;

FileProcessor::FileProcessor()
{
    //default constructor body, it's empty
}
FileProcessor::~FileProcessor()
{
    //default destructor
}

string FileProcessor::processFile()
{
    char data[500];

    // open and read the input file
    ifstream infile;
    infile.open("English");
    int count = 0;

    string sentence;
    string inputLine = "";

    while (getline(infile, sentence))
    {
        inputLine += sentence;
        inputLine+= "\n";
    }

    cout << "Reading from the file..." << endl;
    infile >> inputLine;

    Translator *sp = new Translator;
    string outputParagraph = sp->translateEnglishSentence(inputLine); //points to the translate english sentence function

    //close the inputted file.
    infile.close();

    //open an output file
    ofstream Tutnese;
    Tutnese.open("Tutnese");

    cout << "Writing to the file:" << endl;

    //write inputted data into the file
    Tutnese << outputParagraph << endl;

    //close the output file
    Tutnese.close();
    return outputParagraph;
}

string FileProcessor::processFile2()
{
    char data[500];

    // open and read the input file
    ifstream infile;
    infile.open("Tutnese");
    int count = 0;

    string sentence;
    string inputLine = "";

    while (getline(infile, sentence))
    {
        inputLine += sentence;
        inputLine+= "\n";
    }

    cout << "Reading from the file..." << endl;
    infile >> inputLine;

    Translator *sp = new Translator;
    string outputParagraph = sp->translateEnglishSentence2(inputLine); //points to the translate english sentence 2 function

    //close the inputted file.
    infile.close();

    //open an output file
    ofstream English;
    English.open("English2");

    cout << "Writing to the file:" << endl;

    //write inputted data into the file
    English << outputParagraph << endl;

    //close the output file
    English.close();
    return outputParagraph;
}

