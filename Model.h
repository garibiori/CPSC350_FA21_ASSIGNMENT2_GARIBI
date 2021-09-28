#include <iostream> 

using namespace std;

class Model
{

public:
    Model();  //default constructor
    ~Model(); //destructor
    string translateSingleCharacter(char input);
    string translateDoubleCharacter(char input);
    string translateSingleCharacter2(string input);
    string translateDoubleCharacter2(string input);
};
