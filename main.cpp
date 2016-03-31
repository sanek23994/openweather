#include <iostream>
#include <tclap/CmdLine.h>

int main(int argc, char *argv[])
{
    try {
        TCLAP::CmdLine cmd("Command description message", ' ', "0.9");
        cmd.parse( argc, argv );
    } catch (TCLAP::ArgException &e) {

    }

    return 0;
}
