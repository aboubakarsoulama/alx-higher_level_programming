 print_python_float(PyObject *p);

/**
 * print_py#include <Python.h>

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
voidthon_list - Prints basic info about Python lists.
 * @p: A PyObject list object.
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, alloc, i;
	const char *type;
	PyListObject *list = (PyListObject *)p;
	PyVarObject *var = (PyVarObject *)p;

	size = var->ob_size;
	alloc = list->allocated;
