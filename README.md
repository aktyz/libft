# 42 Core Project 01 - libft

## 3rd March 2024
Libft is quite huge if you were doing Piscine on chill...

I have 12 libc functions and 11 additional functions still to complete. And 17 days left. That's a lot...

I need to write two functions per day in order to make it. Not to mention that in this pace I will have libft completed on 15th March -> then the weekend I am still away and 4 evenings to run the evaluations and eventual corrections.

## 4th March 2024

Ok, now two groups of functions remain, maybe three:
- libc functions requiring knowledge of the malloc() function
- additional functions
- (tricky additional functions)

I will implement today's second: ft_strnstr() which has no man but has description in the Piscine assignments

And I need to go back to TDD...
And switch off the GitHub Copilot... my mind is way tooo lazy to analyze the code it is suggesting...

## 5th March 2024
Ok, so far so good, consistent writing of 2 functions per day. I even managed to start on the difficult ones - the ones playing with memory...

And unfortunatelly writing tests for them run me into segmentation faults.

As the time is limited, for those functions I will rely on the [testing from previus Core students](https://github.com/Tripouille/libftTester).

I also found [usefull link](https://www.geeksforgeeks.org/how-to-clear-ram-memory-cache-buffer-and-swap-space-on-linux/) to clearing up Linux memory in between segmentation faults tests.

Conclusion - starting from ft_memset I won't be writing tests for my funcitons - complete the whole Part 1 and trigger libftTester linked above.

## 9th March 2024

9 FUNCTIONS TO GO!!!!
Kind of hard to decide which one shouls I work on now. Maybe the best idea is to go grab a lunch somewhere...

And then I will come back to add ft_itoa() necessary to finish my ft_putnbr_fd().