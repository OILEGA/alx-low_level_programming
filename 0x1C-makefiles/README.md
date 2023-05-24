# This project is on C-Make Files

![giphy-2](https://github.com/OILEGA/alx-low_level_programming/assets/117779858/2e9b6a77-0d22-4abe-8652-79c1c47eedae)

## What Make Files Are All About
 The make utility is a software tool for managing and maintaining computer programs consisting many component files. The make utility
 automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.
 
 Makefile is a way of automating software building procedure and other complex tasks with dependencies.
 
 Makefile contains: dependency rules, macros and suffix(or implicit) rules
## What Does a Basic Make File Structure Look Like

**Dependency rules**
A rule consists of three parts, one or more targets, zero or more dependencies, and zero or more
commands in the form: 
###  **target: `dependencies`
   #### commands to make target
       1. character MUST NOT be replaced be spaces.
       1. A “target” is usually the name of a file(e.g. executable or object
files). It can also be the name of an action (e.g. clean)
• “dependencies” are files that are used as input to create the
target.
• Each “command” in a rule is interpreted by a shell to be executed.
• By default, make uses /bin/sh shell.
• Typing “make target” will:
1. Make sure all the dependencies are up to date
2. If target is older than any dependency, recreate it using the specified
commands.
6
• By default, typing “make” creates first target in Makefile.
• Since prog depends on main.o factorial.o hello.o, all of object files
must exist and be up-to-date. make will check for them and
recreating them if necessary
• Phony targets
– A phony target is one that isn't really the name of a file. It will only
have a list of commands and no dependencies.
E.g. clean:
rm -rf *.o


