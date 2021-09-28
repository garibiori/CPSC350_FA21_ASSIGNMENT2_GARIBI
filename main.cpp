//main file, where are main method lives
#include "FileProcessor.h"


int main(int argc, char* argv[])
{
    if(argv[2] == string("E2T")){
        //calls the process file function as a pointer
        FileProcessor *sp = new FileProcessor();
        cout << "address of *sp " << sp << endl;
        cout << sp->processFile(argv[1]) << endl;

        delete sp; //deletes the pointer
    }
    else if(argv[2]== string("T2E")){
        //calls the process file 2 function
        FileProcessor *sp = new FileProcessor();
        cout << "address of *sp " << sp << endl;
        cout << sp->processFile2(argv[1]) << endl;

        delete sp; //deletes the pointer
    }
    return 0;
}
