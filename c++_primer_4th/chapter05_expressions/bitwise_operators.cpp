/*
 * =====================================================================================
 *
 *       Filename:  bitwise_operators.cpp
 *
 *    Description:  bitwise operators in c++
 *
 *        Version:  1.0
 *        Created:  02/10/2012 03:40:03 PM
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

using std::cout;
using std::endl;
using std::bitset;

size_t get_size()
{
	return 0;
}

int main()
{
	/*
	 * The bitwise operators take operands of integral type, these
	 * operators can also be applied to bitset operands with the
	 * behaviour as described for integral operands.
	 *
	 * operation	function		usage
	 * ~		bitwise NOT		~expr
	 * <<		left shift		expr1 << expr2
	 * >>		right shift		expr1 >> expr2
	 * &		bitwise AND		expr1 & expr2
	 * ^		bitwise XOR		expr1 ^ expr2
	 * |		bitwise OR		expr1 | expr2
	 *
	 * The type of an integer manipulated by the bitwise operators can
	 * be either signed or unsigned.
	 */

	// If the operand is signed and its value is negative, how the sign
	// bit is handled is machine-dependent. Therefore, we strongly reco
	// mmend using an unsigned type when using an integral value with
	// the bitwise operators.

	/*
	 * It is a common error to confuse the bitwise AND operator (&) with
	 * the logical AND operator (&&), similarly, it is common to confuse
	 * the bitwise OR operator (|) and the logical OR operator (||).
	 */

	unsigned char bits = 0227;
	bitset<8> bs(bits);
	cout << "bits: " << bs << endl;

	bits = ~bits;
	bs = bits;
	cout << "~bits: " << bs << endl;

	bits = 1;
	bs = bits << 1;
	cout << "bits << 1: " << bs << endl;
	bs = bits << 2;
	cout << "bits << 2: " << bs << endl;
	bs = bits >> 3;
	cout << "bits >> 3: " << bs << endl;

	/*
	 * In general, the library bitset operations are more direct,
	 * easier to read, easier to write, and more likely to be used
	 * correctly. Moreover, the size of a bitset is not limited by 
	 * the number of bist in unsigned. Ordinarily, bitset should be
	 * used in preferce to lower-level direct bit manipulation of
	 * integral values.
	 */
	bitset<30> bitset_quiz1; // bitset solution
	unsigned long int_quiz1 = 0; // simulated collection of bits
	
	bitset_quiz1.set(27); // indicate student number 27 passed
	int_quiz1 |= 1UL << 27; // indicate student number 27 passed

	bitset_quiz1.reset(27); // student number 27 failed
	int_quiz1 &= ~(1UL << 27); // student number 27 failed

	bool status;
	status = bitset_quiz1[27]; // how did student 27 do ?
 	status = int_quiz1 & (1UL << 27); // how did student 27 do ?

	return 0;
}
