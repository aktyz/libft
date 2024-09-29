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

<i>I stopped at 3.1 [What Makefiles Contain](https://www.gnu.org/software/make/manual/make.html#Makefile-Contents)</i>

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
