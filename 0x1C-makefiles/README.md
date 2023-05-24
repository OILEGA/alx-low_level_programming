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
       1. A “target” is usually the name of a file(e.g. executable or object files). It can also be the name of an action (e.g. clean)
       1. “dependencies” are files that are used as input to create the target.
       1. Each “command” in a rule is interpreted by a shell to be executed.
       1. By default, make uses /bin/sh shell.
       1. Typing “make target” will:
           1. Make sure all the dependencies are up to date
           1. If target is older than any dependency, recreate it using the specified commands.
           1. By default, typing “make” creates first target in Makefile.
           1. Since prog depends on main.o factorial.o hello.o, all of object files must exist and be up-to-date. make will check for them and
              recreating them if necessary
 ### Phony targets
      1. A phony target is one that isn't really the name of a file. It will only
         have a list of commands and no dependencies E.g. clean: rm -rf *.o


 ### Macros
      1.  By using macros, we can avoid repeating text entries and makefile is easy to modify.
      2.  Macros are referred to by placing the name in either parentheses or curly braces and preceding it with $ sign.
          E.g. $(CC) main.o factorial.o hello.o -o prog
      3.  Internal macros are predefined in make
      4.  “make -p” to display a listing of all the macros, suffix rules and targets in effect for the current build.
      
 ### NOTE:
     An explicit rule says when and how to remake one or more files, called the rule’s targets. It lists the other files that the targets depend on,
     called the prerequisites of the target, and may also give a recipe to    use to create or update the targets. See [Writing Rules].
     An implicit rule says when and how to remake a class of files based on their names. It describes how a target may depend on a file with a name 
     similar to the target and gives a recipe to create or update such a target. See [Using Implicit Rules].
     A variable definition is a line that specifies a text string value for a variable that can be substituted into the text later.
     The simple makefile example shows a variable definition for objects as a list of all object files (see [Variables Make Makefiles Simpler]).


 ## How Does Make Work?
    a. The make utility compares the modification time of the target file with the modification times of the dependency files. Any dependency file that
        has a more recent modification time than its target file forces the target file to be recreated. 
    b. By default, the first target file is the one that is built. Other targets are checked only if they are dependencies for the first target. 
    c. Except for the first target, the order of the targets does not matter. The make utility will build them in the order required. 
    
    ## Resources:
    
       https://intranet.alxswe.com/rltoken/moIpBFMN3sJcVMNn5VIFlA
       https://intranet.alxswe.com/rltoken/1AUviCUw3TrznESzWbrKAQ
       https://intranet.alxswe.com/rltoken/vQFeXLq1izNua2z2dVl5Yg
    
 
