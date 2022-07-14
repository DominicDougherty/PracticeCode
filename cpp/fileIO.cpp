#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstring>

//using namespace std;

int main()
{
    char data[100];
    char buffer[100];

    //open a file in write mode
    std::ofstream outfile;
    outfile.open("afile.dat");

    strcpy(data, "Hello file world\n This is a test of fstreaming data into a file");
    outfile << data << std::endl;
    outfile.close();

    std::ifstream infile;
    infile.open("afile.dat");

    while(infile >> buffer)
    {
        //printf("%s ", buffer);
        strcat(data, buffer);
    }

    printf("%s\n", data);
    infile.close();

    return 0;
}