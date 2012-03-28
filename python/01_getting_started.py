# The "hello world" program in Python

1. Using the interpreter prompt
$ python # or python2 or python3 if you have multiple versions installed
Python 3.2.2 (default, Nov 21 2011, 16:51:01) 
[GCC 4.6.2] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>> print('hello world')
Hello World
>>> 

2. Using a source file
-------------------------
#!/usr/bin/env python
# filename: hello.py

print('Hello World')
-------------------------

$ python hello.py
hello world

3. Executable python programs
$ chmod +x hello.py
$ ./hello.py
hello world

4. Get help of functions and statements

a) get help from command line
$ python -c 'help('help')'

b) get non-interactive help from the interpreter
>>> help('help')
>>> help('return')
>>> help('print')

press q to exit the help

c) get interactive help from the interpreter
>>> help()

Welcome to Python 3.2!  This is the online help utility.

If this is your first time using Python, you should definitely check out
the tutorial on the Internet at http://docs.python.org/tutorial/.

Enter the name of any module, keyword, or topic to get help on writing
Python programs and using Python modules.  To quit this help utility and
return to the interpreter, just type "quit".

To get a list of available modules, keywords, or topics, type "modules",
"keywords", or "topics".  Each module also comes with a one-line summary
of what it does; to list the modules whose summaries contain a given word
such as "spam", type "modules spam".

help> 
