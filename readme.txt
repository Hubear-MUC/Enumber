Enumber 1.0
-----------

This is a small program that creates a sequence of numbers that can be used
in a text file to enumber paragraphs.

I use this when I write notes in textfiles to enumerate the contents for
later references to earlier parts of the text, for example "see paragraph
125 for more details" or something like that.

The program must be invoked with the starting number and the ending number
as arguments, for example

  enumber 1 5
  
If you chose a different file name for the executable file than "enumber", then use the name you chose at the compilation.

The invocation above creates a sequence of the numbers from 1 to 5 on the temrinal like this:

  1.

  2.

  3.

  4.

  5.

To create a file with these enumerations, use the program like this:

  enumber 1 5 > file.txt

If your text file (file.txt in this case) contains too less enumerations, you
can add some more by

  enumber 6 10 >> file.txt

This appends the numbers 6 to 10 to the file "file.txt".


Changes:
--------

Version 1.0

Initial version.

