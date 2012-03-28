/* This program is just to show the endianness of computer.
 *
 * MSB when in all capitals, stands for "Most Significant Byte", while msb
 * stands for "most significant bit". msb is also called high-order bit.
 *
 * The key to the difference is that all numeric value and the concept of
 * MSB or LSB are all abstract, but data and the raw sequcence of bits and
 * bytes are physical concepts.
 *
 * Big endian:  
 * store MSB (we can call it "big-end") in lower address 
 *
 * Little endian:
 * store LSB (we can call it "little-end") in lower address
 *
 * So for the number 0x12345678, both big-endian and little-endian
 * machines agree that the byte 0x1 is MSB and the byte 0x8 is LSB (because
 * this is an abstract concept, has nothing to do with physical machines).
 *
 * But they store them in different sequnces (now in physical/data):
 *
 *                  W  X  Y  Z
 * Address low ----------------------------------> Address High
 * Big Endian       12 34 56 78      (from MSB to LSB)
 * Little Endian    78 56 34 12      (from LSB to MSB)
 *
 * Then if you use a char* pointer like p to point to this int value,
 * no matter endian, p must be point to the lower address.
 * that is  p will always point to the W byte !
 *
 * On the other hand, if the same byte sequnce stores in different
 * endian machines, the numeric value is different. For example, in
 * this senera:
 *                  W  X  Y  Z
 * Address low ----------------------------------> Address High
 *                  12 34 56 78
 * then in big-endian, the long int (4 bytes) numeric value will be:
 *       0x12 * 2^24 + 0x34 * 2^16 + 0x56 *2^8 + 0x78 * 2^0
 *     = 0x12345678
 * because it thinks MSB comes first and 0x12 is MSB,
 * and in little-endian the long int (4 bytes) numeric value will be:
 *       0x12*2^0 + 0x34*2^8  + 0x56*2^16 + 0x78*2^24
 *     = 0x78*2^24 + 0x56*^16 + 0x34*2^8 + 0x12*2^0
 *     = 0x78563412
 * because it thinks LSB comes first and 0x12 is LSB.
 *
 * Reference:
 * [1] http://betterexplained.com/articles/understanding-big-and-little-
 * endian-byte-order/
 * [2] http://en.wikipedia.org/wiki/Most_significant_bit
 */

#include <stdio.h>
int main(void)
{

	/* int x = 0x100101; */
	int x = 0x05060708;
	char *p = (char *)&x;

	printf("x = %x\n", (unsigned)x);
	printf("first byte of x = %x\n", (unsigned)*(p));
	printf("second byte of x = %x\n", (unsigned)*(p + 1));
	printf("third byte of x = %x\n", (unsigned)*(p + 2));
	printf("fourth byte of x = %x\n", (unsigned)*(p + 3));

	*p = 'A'; /* 'A' is 0x41 */
	p = p + 2;
	*p = 50; /* 50 is 0x32 */
	p = (char *)&x;
	printf("x = %x\n", (unsigned)x);

	printf("first byte of x = %x\n", (unsigned)*(p));
	printf("second byte of x = %x\n", (unsigned)*(p + 1));
	printf("third byte of x = %x\n", (unsigned)*(p + 2));
	printf("fourth byte of x = %x\n", (unsigned)*(p + 3));

	x = 0x100101;
	p = (char *)&x;

	printf("x = %x\n", (unsigned)x);
	printf("first byte of x = %x\n", (unsigned)*(p));
	printf("second byte of x = %x\n", (unsigned)*(p + 1));
	printf("third byte of x = %x\n", (unsigned)*(p + 2));
	printf("fourth byte of x = %x\n", (unsigned)*(p + 3));

	*p = 'A'; /* 'A' is 0x41 */
	p = p + 2;
	*p = 50; /* 50 is 0x32 */
	p = (char *)&x;
	printf("x = %x\n", (unsigned)x);

	printf("first byte of x = %x\n", (unsigned)*(p));
	printf("second byte of x = %x\n", (unsigned)*(p + 1));
	printf("third byte of x = %x\n", (unsigned)*(p + 2));
	printf("fourth byte of x = %x\n", (unsigned)*(p + 3));

	return 0;
}
