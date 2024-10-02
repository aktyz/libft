# 42 Core Project 00 - libft

Libft is a library project with many small usefull common functions to be used along a way when working on more advanced projects in 42 Cirriculum.

The 42 Libft assignment can be found [here](42-00-libft.pdf).

# How to use Libft in other projects

The libft.h header needs to be included in your project
```c
#include "libft.h"
```

Next, when compiling your project code, add the required flags:
```sh
-lft -L <path/to/libft.a> -I <path/to/libft.h>
```

# Short notes on Makefiles

A simple makefile consists of "rules" with the following shape:
```
target ... : prerequisites ...
	recipe
	...
	...
```

Knowledge used in Makefile:
For examples have a look at the actual [Makefile](Makefile) in this project.
- [The foreach Function](https://ocw.mit.edu/courses/1-124j-foundations-of-software-engineering-fall-2000/pages/lecture-notes/gnu_makefile_documentation/#TOC79)
```
$(foreach var, list, text)
```
The first two arguments, var and list, are expanded before anything else is done; note that the last argument, text, is not expanded at the same time. Then for each word of the expanded value of list, the variable named by the expanded value of var is set to that word, and text is expanded. Presumably text contains references to that variable, so its expansion will be different each time.
The result is that text is expanded as many times as there are whitespace-separated words in list. The multiple expansions of text are concatenated, with spaces between them, to make the result of foreach.
- [The Function wildcard](https://ocw.mit.edu/courses/1-124j-foundations-of-software-engineering-fall-2000/pages/lecture-notes/gnu_makefile_documentation/#TOC25)
```
$(wildcard pattern...)
```
This string, used anywhere in a makefile, is replaced by a space-separated list of names of existing files that match one of the given file name patterns. If no existing file name matches a pattern, then that pattern is omitted from the output of the wildcard function. Note that this is different from how unmatched wildcards behave in rules, where they are used verbatim rather than ignored.
- [Subst and Substitution References](https://ocw.mit.edu/courses/1-124j-foundations-of-software-engineering-fall-2000/pages/lecture-notes/gnu_makefile_documentation/#TOC77)
```
$(subst from, to, text)
```
Performs a textual replacement on the text text: each occurrence of from is replaced by to. The result is substituted for the function call.
```
$(var:pattern=replacement)
```
- [Function for File Name: addprefix](https://ocw.mit.edu/courses/1-124j-foundations-of-software-engineering-fall-2000/pages/lecture-notes/gnu_makefile_documentation/#TOC78)
```
$(addprefix prefix,names…)
```


## My Notes when progressing through Libft

### 3rd March 2024
Libft is quite huge if you were doing Piscine on chill...

I have 12 libc functions and 11 additional functions still to complete. And 17 days left. That's a lot...

I need to write two functions per day in order to make it. Not to mention that in this pace I will have libft completed on 15th March -> then the weekend I am still away and 4 evenings to run the evaluations and eventual corrections.

### 4th March 2024

Ok, now two groups of functions remain, maybe three:
- libc functions requiring knowledge of the malloc() function
- additional functions
- (tricky additional functions)

I will implement today's second: ft_strnstr() which has no man but has description in the Piscine assignments

And I need to go back to TDD...
And switch off the GitHub Copilot... my mind is way tooo lazy to analyze the code it is suggesting...

### 5th March 2024
Ok, so far so good, consistent writing of 2 functions per day. I even managed to start on the difficult ones - the ones playing with memory...

And unfortunatelly writing tests for them run me into segmentation faults.

As the time is limited, for those functions I will rely on the [testing from previus Core students](https://github.com/Tripouille/libftTester).

I also found [usefull link](https://www.geeksforgeeks.org/how-to-clear-ram-memory-cache-buffer-and-swap-space-on-linux/) to clearing up Linux memory in between segmentation faults tests.

Conclusion - starting from ft_memset I won't be writing tests for my funcitons - complete the whole Part 1 and trigger libftTester linked above.

### 9th March 2024

9 FUNCTIONS TO GO!!!!
Kind of hard to decide which one shouls I work on now. Maybe the best idea is to go grab a lunch somewhere...

And then I will come back to add ft_substr() and ft_itoa() necessary to finish my ft_putnbr_fd().

### 24th March 2024
Two testers with which my project pass:
- https://github.com/Tripouille/libftTester
- https://github.com/0x050f/libft-war-machine

### 26th September 2024
Working on adding bonus part: lists.

In order to make the libftTester work on your laptop or Campus machine switch 'clang' to 'g++' compiler in tester Makefile.

### 29th September 2024

I finally submitted the libft with bonus for evaluation. If passed I am free to arrange it the way I want it to use in my subsequent projects. Especially adding much needed gnl and printf functions.
