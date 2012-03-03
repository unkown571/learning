/*
 * =====================================================================================
 *
 *       Filename:  bitset.cpp
 *
 *    Description:  library bitset type in c++
 *
 *        Version:  1.0
 *        Created:  02/09/2012 03:33:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://zhangliancheng.com
 *
 * =====================================================================================
 */
#include <iostream>
#include <bitset>
#include <string>
#include <cstddef>

using std::bitset;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	// Ways to initialize a bitset
	// the size n must be an constant expression
	// bitset<n> b; /* b has n bits, each bit is 0 */
	// bitset<n> b(u); /* b is a copy of the unsigned long value u */
	// bitset<n> b(s); /* b is a copy of the bits contained in string s */
	// bitset<n> b(s, pos, n); /* b is a copy of the bits in n characters 
	// from s starting from position pos */
	// bitset<n> b(s, pos); /* b is a copy of the bits from pos to end */
	
	// the bits in a bitset are not named and are refered to positionally.
	// the bits start at 0 are low-order bits, and those ending at 31 are
	// high-order bits.
	bitset<32> bitvec; // 32 bits, all zero

	// bitvec1 is smaller than the initializer
	bitset<16> bitvec1(0xffff); // bits 0 ... 15 are set to 1
	// bitvec2 same size as initializer
	bitset<32> bitvec2(0xffff); // bits 0-15 are 1; 16-31 are 0
	// on a 32-bit machine, bits 0 to 31 are initialized from 0xffff
	bitset<128> bitvec3(0xffff); // bits 32 to 127 are 0

	string strval("1100");
	// the numbering conventions of strings and bitsets are inversely
	// related. The rightmost character in the string is the one with
	// the highest subscripts, used to initialize the low-order bit in
	// bitset with subscript 0.
	bitset<32> bitvec4(strval); // position 2 and 3 of bitvec4 are 1
	string str("1111111000000011001101");
	bitset<32> bitvec5(str, 5, 4); // 4 bits starting at str[5], 1100
	bitset<32> bitvec6(str, str.size() - 4); // use last 4 characters

	// operations on bitset
	// b.any() /* is any bit in b on ? */
	// b.none() /* are no bits in b on ? */
	// b.count() /* number of bits in b that are on */
	// b.size() /* number of bits in b */
	// b[pos] /* access bit in b at position pos */
	// b.test(pos) /* is bit in b in postion pos on ? */
	// b.set() /* turn on all bits in b */
	// b.set(pos) /* turn on the bit in b at position pos */
	// b.reset() /* turn off all bits in b */
	// b.reset(pos) /* turn off the bit in b at position pos */
	// b.flip() /* change the state of each bit in b */
	// b.flip(pos) /* reverse value of the bit in b at position pos */
	// b.to_ulong() /* return an unsigned long with the same bits as in b */
	// os << b /* print the bits in b to the stream os */
	bool is_set = bitvec.any();  // false, all bits are zero
	bool is_not_set = bitvec.none(); // true, all bits are zero
	// the size_t is defined in cstddef header
	size_t bits_set = bitvec.count(); // return number of bits that are on
	size_t sz = bitvec.size(); // returns 32
	for (int index = 0; index != 32; index += 2)
		bitvec[index] = 1; // equivalent to bitvec.set(index);
	bitvec.reset(); // set all the bits to 0
	bitvec.set(); // est all the bits to 1
	bitvec.flip(0); // reverse the value of first bit
	bitvec[0].flip(); // also reverse the first bit
	bitvec.flip(); // reverse value of all bits
	unsigned long ulong = bitvec3.to_ulong();
	cout << "ulong = " << ulong << endl;

	cout << "bitvec2: " << bitvec2 << endl;


	
	return 0;
}
