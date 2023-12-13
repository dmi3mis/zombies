# One little program to demonstrate zombie processes in linux.

> :warning: Zombies ahead! If you keep program open too long you can suffer zombie invasion!

Program written in C and you need gcc (GNU Compiler Collection) to make it work

* Fedora

```
$ sudo dnf install gcc
```
* OpenSUSE

```
$ sudo zypper install gcc
```

How to compile it

```
$ gcc zombies.c -o zombie
```

How it works

```
$ ./zombies
parent just wont die...
child process started ... and done! (4467)
parent just wont die...
child process started ... and done! (4468)
parent just wont die...
child process started ... and done! (4469)
```

How to kill zombies? 
Stop program ./zombies and all zombies will be killed.
