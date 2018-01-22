# 전진, 후진 [사진 클릭]

> Sunfunder 에서 제공해주는 파이썬으로 모터 동작 하기


[![Video Label](http://img.youtube.com/vi/T31SUeWQ3b4/0.jpg)](https://youtu.be/T31SUeWQ3b4)

> 제공해주는 파이썬 모듈로 setup을 설정하고 C++로 코딩하기 하기 위해 밑 부분처럼 코딩한다.


# C에서 파이썬 사용하기

```c++
include<Python.h>
include<iostream>
using namespace std;

int main()
{
        Py_Initialize();

        //start set path
        PyObject *sys = PyImport_ImportModule("sys");
        PyObject *path = PyObject_GetAttrString(sys, "path");
        PyList_Append(path, PyString_FromString("."));


        PyObject *name = PyString_FromString("motor"),
                 *module = PyImport_Import(name),
                 *func = PyObject_GetAttrString(module,"test");

        PyObject_CallObject(func,NULL); //func(test)실행하기
        Py_Finalize();
        return 0;
}
```

* 컴파일 : sudo g++ $(pkg-config --cflags --libs python-2.7) main.cpp -o example
