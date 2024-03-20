一、创建dll

1.1 在vs2019中创建dll项目

![image](https://github.com/hwenxu/testdll/assets/43903559/f4ccc5ab-ecdd-44d7-a08f-559be7115c81)

1.2 项目创建完之后会自动生成一些源文件和头文件，将其全部删除后，放入我们的头文件和源文件

![image](https://github.com/hwenxu/testdll/assets/43903559/c7b633b7-b7a0-4796-8aef-a42a818ead4c)

1.3 设置项目不使用预编译头

![image](https://github.com/hwenxu/testdll/assets/43903559/0ba5fade-6811-4fe0-ab97-5b80b822c85f)

1.4 编译


二、使用dll
1.将步骤一编译生成lib和.h文件移动到调用工程中，dll需要移动到工作目录下（否则出现找不到dll情况）

2.在附加依赖项中填入.lib文件以及附加库目录填入

![image](https://github.com/hwenxu/testdll/assets/43903559/57fe43d7-c3cd-495b-8063-69e86230ea8f)

![image](https://github.com/hwenxu/testdll/assets/43903559/326fb6ad-4085-4aaf-b8d2-bf27edfdc4ac)



3.两种方式调用

  3.1隐式调用
  
  #include "MyDll/MyDll.h"
  
  #pragma comment(lib,"MyDll.lib")
  
  直接调用add（1,2）即可;
  
  3.2显示调用
    3.2.1
    
    #include "MyDll/MyDll.h"
    
    //#include <Windows.h>
  
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
    
    //    FreeLibrary(hDll);
    
    //    return true;
    
    //}

  3.2.2 dll类调用
  
    //1//MyDll* mydll = new MyDll();
    
    //2//shared_ptr<MyDll> mydll = make_shared<MyDll>();
    
    shared_ptr<MyDll> mydll(new MyDll());
    
    int sum = mydll->add(1, 2);
    
    //1//delete mydll;
    
