#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 *print_python_list - func name to print python list information
 *@p: pointer to python object list
 */
void print_python_list_info(PyObject *p)
{
	int element;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n" ((PyListObject *)p)->allocated);
	for (element = 0; element < Py_SIZE(p); element++)
		printf("Element %d: %s\n", element, Py_TYPE(PyLost_Getltem(p, element))->tp_name);
}
