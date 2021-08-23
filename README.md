# Peasoup
https://open.kattis.com/problems/peasoup

### Reflection
Reading in the input was the most time consuming part, had to figure out how to make scanf read until newline
strcmp was giving me difficulty because of return carriage in windows, downloaded the in files from kattis to fix that
scanf was the root of all my problems, i used what i thought was an interesting work around to scanf until the newline, it turns out that creates more problems than it solves, switched to fgets and it was fully functional
also forgot to change array size to include additional character when i swapped to fgets