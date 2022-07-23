# Text-to-Brainfuck
## C++ terminal translater from simple text to BrainFuck


You can compile translator.cpp using for example:
```bash
g++ -o translator translator.cpp
```
 <br />

Then you can execute it simply by running:
```bash
./translator
```
 <br />

You can also use the *--comments* argument like this to get a comment for every line of the BrainFuck code.
```bash
./translator --comments
``` 
 <br />

Also you can save the output with the argument *--filename:[your_file_name]* just like this:
```bash
./translator --filename:test.bf
```
 <br />
 
> [helloworld.bf](helloworld.bf) is an example of the output of `./translator --filename:helloworld.bf --comments`

# ASCII.h
If you need to, **you can include ASCII.h in any C++ script** and use the 2 functions like this:

```cpp 
#include "ASCII.h"

convert_char_to_bf('A'); 
convert_string_to_bf('Entire string', "test.bf"); //"test.bf" is optional. If you leave it empty, the function will return the output as a String
```
