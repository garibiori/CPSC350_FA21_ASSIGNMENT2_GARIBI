#include <iostream> 

using namespace std;

class FileProcessor
{

public:
    FileProcessor(); //default constructor
    ~FileProcessor(); //destructor
    string processFile(string input);
    string processFile2(string input);
};