# C Chat App

"Simple" chat application built using c.

## Purpose

The purpose of this app is not to be practical or useful. This was simply a project built by me for fun. 

## Features

1. **Distinct group chats:** The server can handle mutliple distinct group chats on the same port. 
2. **Server Logging:** The server logs the messages sent in each group chat into its own text file. Each group chat gets its own log.

## Project

### Structure

* `Makefile`: build instructions
* `include/`: header files
* `lib/`: any non-standard libraries
* `src/`: source code
* `tests/`: MinUnit testing framework, might change later idk

### Git conventions

* I am too lazy to actually implement git hooks, so ima just write the conventions here
* API relevant changes
    * `feat` Commits, that adds or remove a new feature
    * `fix` Commits, that fixes a bug
* `refactor` Commits, that rewrite/restructure your code, however does not change any API behaviour
    * `perf` Commits are special `refactor` commits, that improve performance
* `style` Commits, that do not affect the meaning (white-space, formatting, missing semi-colons, etc)
* `test` Commits, that add missing tests or correcting existing tests
* `docs` Commits, that affect documentation only
* `build` Commits, that affect build components like build tool, ci pipeline, dependencies, project version, ...
* `ops` Commits, that affect operational components like infrastructure, deployment, backup, recovery, ...
* `chore` Miscellaneous commits e.g. modifying `.gitignore`

## References

1. [A simple REST framework on C/C++](https://nipun-linuxtips.blogspot.com/2012/09/a-simple-rest-framework-on-cc.html)
2. [Making Minimalist Web Server in C on Linux](https://www.youtube.com/watch?v=2HrYIl6GpYg&ab_channel=NirLichtman)