#!/usr/bin/env perl
# This file introduces the operators in perl including
# arithmetic, conditional, logical, bitwise, assignment,
# increment, decrement, string concatenation, comma opertors.

# Arithmetic
# + - * / ** % -

# the base of power can not be a negative value
# (-5) ** 2.5;	# this is an error!
#
# comparasion of integers
# <  >  ==  <=  >=  !=  <=>

# comparasion of strings
# lt  gt  eq  le  ge  ne  cmp

# logical operator
# ||  or
# &&  and
# !   not
# xor

# bitwise operator
# &  |  ~  ^  <<  >>

# assignment operator
# =  +=  -=  *=  /=  %=  **=  &=  |=  ^=

# increment and decrment can be used to both numbers and strings
# ++  --
$stringvar = "abc";
$stringvar++;	# $stringvar contains "abd" now
print("$stringvar\n");

$stringvar = "abc";
$stringvar--;	# $stringvar contains -1 now, -- will convert it to number first
print("$stringvar\n");

$stringvar = "abz";
$stringvar++;	# stringvar contains "aca" now
print("$stringvar\n");

$stringvar = "z";
$stringvar++;	# stringvar contains "aa" now
print("$stringvar\n");

$stringvar = "ab4";
$stringvar++;	# stringvar contains "5" now
print("$stringvar\n");

$stringvar = "bc999";
$stringvar++;	# stringvar contains "bd000" now
print("$stringvar\n");

$stringvar = "ab*c";
$stringvar++;	# stringvar contains "1" now
print("$stringvar\n");

# string concatenation: .
# string repeate:	x
$str1 = "hello";
$str2 = "world";
$str = $str1 . " " . $str2;
print("$str\n");
$str3 = "ok" x 5;	# "okokokokok"
$str .= $str3;		# "hello worldokokokokok"
print("$str\n");

# comman operator
# ,

# conditional operator
# ? :

