# C Chat App

"Simple" chat application built using c.

## Purpose

The purpose of this app is not to be practical or useful. This was simply a project built by me for fun. 

## Features

1. **RESTful backend API:** The server boasts a RESTful API that can be called by other client applications.
2. **Distinct group chats:** The server can handle mutliple distinct group chats on the same port. 
3. **Server Logging:** The server logs the messages sent in each group chat into its own text file. Each group chat gets its own log.

## Project Structure

- `Makefile`: duh
- `src/`: source code
- `include/`: header files
- `lib/`: any non-standard libraries
- `tests/`: MinUnit testing framework, might change later idk

## References

1. [A simple REST framework on C/C++](https://nipun-linuxtips.blogspot.com/2012/09/a-simple-rest-framework-on-cc.html)
2. [Making Minimalist Web Server in C on Linux](https://www.youtube.com/watch?v=2HrYIl6GpYg&ab_channel=NirLichtman)