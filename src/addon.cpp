#include <mavi/core/scripting.h>
#include <iostream>

void PrintHelloWorld()
{
    std::cout << "Hello, World!" << std::endl;
}

extern "C" { VI_EXPOSE int ViInitialize(Mavi::Scripting::VirtualMachine*); }
int ViInitialize(Mavi::Scripting::VirtualMachine* VM)
{
    VM->SetFunction("void print_hello_world()", &PrintHelloWorld);
    return 0;
}

extern "C" { VI_EXPOSE void ViUninitialize(Mavi::Scripting::VirtualMachine*); }
void ViUninitialize(Mavi::Scripting::VirtualMachine* VM)
{
}