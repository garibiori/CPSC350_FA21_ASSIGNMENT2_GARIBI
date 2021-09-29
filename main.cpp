//main file, where are main method lives
#include "FileProcessor.h"


int main(int argc, char* argv[]) //takes in command line arguments for file inputs and translation
{
    if(argv[3] == string("E2T")){
        //calls the process file function as a pointer
        FileProcessor *sp = new FileProcessor();
        cout << "address of *sp " << sp << endl;
        cout << sp->processFile(argv[1], argv[2]) << endl;

        delete sp; //deletes the pointer
    }
    else if(argv[3]== string("T2E")){
        //calls the process file 2 function
        FileProcessor *sp = new FileProcessor();
        cout << "address of *sp " << sp << endl;
        cout << sp->processFile2(argv[1], argv[2]) << endl;

        delete sp; //deletes the pointer
    }
    return 0;
}
