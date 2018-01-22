#include<Python.h>
#include<iostream>
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

      
	PyObject_CallObject(func,NULL);
        Py_Finalize();
        return 0;
}

