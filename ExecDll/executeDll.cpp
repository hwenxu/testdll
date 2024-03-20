#include <iostream>
#include "MyDll/MyDll.h"
//#pragma comment(lib,"MyDll.lib")
#include <Windows.h>
using namespace std;

//typedef int (*PADD) (int a, int b);
//bool initdll()
//{
//    HMODULE hDll = LoadLibrary(L"./../MyDll/MyDll.dll");
//    if (hDll == NULL) {
//        return false;
//    }
//    PADD myAdd = (PADD)GetProcAddress(hDll, "add");
//    int b = myAdd(1, 2);
//    std::cout << myAdd(1, 2)<<std::endl;
//
//    FreeLibrary(hDll);
//    return true;
//}

int main()
{
    //initdll();
    //MyDll* mydll = new MyDll();
    shared_ptr<MyDll> mydll = make_shared<MyDll>();
    //shared_ptr<MyDll> mydll(new MyDll());
    int sum = mydll->add(1, 2);
    //delete mydll;
    std::cout << "Hello World!\n";
    return 0;
}
