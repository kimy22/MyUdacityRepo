#include "gc_pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);
	Pointer<int> p2 = p;
  	Pointer<int> p3 = new int[5];
   	Pointer<int> p4 = p3;
    return 0;
}