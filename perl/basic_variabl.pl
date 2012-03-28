#!/usr/bin/env perl

# integer
# + - * / %
# > >= < <= ==
$x = 12345;
print("\$x = $x\n");
if ($x > 100) {
	print("\$x is greater than 100.\n");
}

# floating point number
# such as 11.4, -0.3, .3, 3., 54.1e+02, 5.41e03
# floating inaccuracy
$value = 9.01e+21 + 0.01 - 9.01e+21;
print("first value is ", $value, "\n"); # will print 0

$value = 9.01e+21 - 9.01e+21 + 0.01;
print("second value is ", $value, "\n"); # will print 0.01

# string
# dot length() substr() index() rindex()
# gt ge lt le eq ne cmp
# when enclosed with single quote, only two special character: \ and '
# when enclosed with double quote, variables can be substituted
$number = 110;
$text = "This text contains the number $number.\n";
print($text);

$res = "A quote \" and a backslash \\";

$text = 'This is two
lines of text
';
print($text);

$text = "This is two\nlines of text\n";
print($text);

$string = "43";
$number = 28;
$result = $string + $number;	# $result = 71
$result = "hello" * 5;		# $result = 0 * 5 = 0
$result = "12a34" + 1;		# $result = 12 + 1 = 13
