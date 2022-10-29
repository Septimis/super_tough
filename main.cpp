#include <iostream>
#include <fstream>
#include <string>

int minBridges(bool** map, int numRows, int numCols) {
    /* Your code here */
    
    return -1;
}

int main(int argc, char** argv) {
    if(argc == 1) {
        std::cout << "Invalid Arguments.\n\targs: <filename> <filename> ... <filename>" << std::endl;
        return -1;
    }

    unsigned int numRows = 0;
    unsigned int numCols = 0;
    bool** rows;

    for(int i = 1; i < argc; i++) { //loop over all input files
        std::ifstream intputFile(argv[i]);
        if(!intputFile) {
            std::cout << "Could not open file \"" << argv[i] << "\"..." << std::endl;
            return -1;
        }
        
        std::string inputLine;
        bool newPuzzle = true;
        int rowIndex = 0;

        while(!intputFile.eof()) { //go over each line of the input
            std::getline(intputFile, inputLine);
            if(inputLine == "") {
                //call bridges function
                std::cout << "Output: " << minBridges(rows, numRows, numCols) << std::endl << std::endl;

                //deallocate the memory
                for(int j = 0; j < numRows; j++)
                    delete[] rows[j];
                delete[] rows;

                newPuzzle = true;
                continue;
            }

            if(newPuzzle) {
                numRows = std::stoi(inputLine.substr(0, inputLine.find(" ")));
                numCols = std::stoi(inputLine.substr(inputLine.find(" ") + 1, inputLine.length() - inputLine.find(" ") + 1));
                
                //allocate space
                rows = new bool*[numRows];
                for(int j = 0; j < numRows; j++)
                    rows[j] = new bool[numCols];

                newPuzzle = false;
                rowIndex = 0;

                std::cout << "\nPuzzle" << std::endl;
                continue;
            }

            for(int j = 0; j < inputLine.length(); j += 2) {
                rows[rowIndex][j / 2] = (bool)(int(inputLine[j]) - 48);
            }
            //std::cout << inputLine << std::endl;
            rowIndex++;
        }
    }

    return 1;
}