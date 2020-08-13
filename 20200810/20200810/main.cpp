#include <iostream>
#include "bst.h"

int main()
{
	C_BST cBst{};

	cBst.addData(4, 654);
	cBst.addData(6, 34);
	cBst.addData(1, 12);
	cBst.addData(9, 23);
	cBst.addData(7, 425);
	cBst.addData(5, 2253);
	cBst.addData(8, 65);
	cBst.addData(2, 423);
	cBst.addData(3, 65);

	cBst.printData();


	cBst.erase(1);
	cBst.printData();
}