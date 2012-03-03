/*
 * =====================================================================================
 *
 *       Filename:  new_delete_single_object.cpp
 *
 *    Description:  new and delete single object in c++
 *
 *        Version:  1.0
 *        Created:  02/11/2012 02:03:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i; // named, uninitialized int variable
	int *pi = new int; // pi points to dynamically allocated,
	                   // unamed, uninitialized int
	
	/*
	 * We must use the direct-initialization to initialize the
	 * dynamically allocated objects.
	 */
	int j(1024); // named, initialized int variable, or int j = 1024; (copy)
	int *pj = new int(1024); // object to which pj points is 1024 of int 
	string s(10, '9'); // named, initialized string
	int *ps = new string(10, '9'); // unamed, initialized, dynamic

	/*
	 * If we do not explicitly state an initializer, then a dynamically
	 * allocated object is initialized in the same way as a variable that
	 * is defined inside a function.
	 * 	class type: default constructor
	 * 	built-in type: uninitialized
	 */
	string *ps2 = new string; // unamed, initialized to empty string
	int *pk = new int; // unamed, uninitialized

	/*
	 * We can also value-initialize a dynamically allocated object.
	 */
	string ps3 = new string(); // initialized to empty string
	int *pi2 = new int(); // the object pi points to is initialized to 0

	/*
	 * When our use of the object is complete, we must explicitly return
	 * the object's memory to the free store by applying delete expression.
	 *
	 * It is illegal to apply delete to a pointer that addresses memory
	 * that was not allocated by new.
	 *
	 * It is legal to delte a zero-valued pointer, doing so has no effect.
	 *
	 * After deleting a pointer, the pointer becomes what is referred to
	 * as a dangling pointer. Setting the pointer to 0 after the object
	 * it refers to has been deleted makes it clear that the pointer points
	 * to no object.
	 *
	 * Like any const, a dynamically created const must be initialized when
	 * it is created and once initialized cannot be changed. Like the 
	 * addresses of any other const object, the return from a new that
	 * allocates a const object may only be assigned to a pointer to const.
	 */
	delete pi;
	pi = NULL;
	delete pj;
	pj = NULL;
	delete ps;
	ps = NULL;
	delete ps2;
	ps2 = NULL;
	delete pk;
	pk = NULL;
	delete ps3;
	ps3 = NULL;
	delete pi2;
	pi2 = NULL;

	int *p = 0;
	delete p;

	// allocate and initialize a const object
	const int *pci = new const int(1024);
	// allocate default initialized const empty string
	const string *pcs = new const string;
	delete pci;
	pci = NULL;
	delete pcs;
	pcs = NULL;

	return 0;
}
