# Command-Line-Calculator
A calculator I wrote to run in a terminal on linux systems (I haven't tested macos) 

It took around four and a half hours to write, two of which were spent trying to
debug it, but not knowing enough about c++ to ask the right questions.

Eventually, I realized that the issues were with booleans I had created to act as sentinels.

One was being initialized wrong, hence it was full of garbage, 
and the others I forgot to reset after each run.

What took me two hours to find took about twenty seconds to fix.

I'm satisfied with how it runs and now it's here for the world to see.

Enjoy! :D
