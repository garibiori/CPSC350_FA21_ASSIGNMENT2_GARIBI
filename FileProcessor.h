/**
 * The file processor class opens a file that you input and outputs a file that you name
 * 
 * @author Ori Garibi
 * @version 1.0
 * @see FileProcessor.cpp
 * 
 */
#include <iostream> 

using namespace std;

class FileProcessor
{

public:
    FileProcessor(); //default constructor
    ~FileProcessor(); //destructor
    string processFile(string input, string output);
    string processFile2(string input, string output);
};