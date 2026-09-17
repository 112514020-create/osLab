# PROGRAM 3 : LINUX FILE AND DIRECTORY OPERATIONS USING C SYSTEM CALLS

## AIM :
 To implement basic file and directory operations using Linux system calls such as `open()`, `read()`, `write()`, `close()`, `stat()`, `mkdir()`, `opendir()`, and `readdir()`. 

## CONTEXT :
This C program demonstrates the use of Linux system calls for performing file and directory operations.

## LINUX SYSTEM CALLS USED :

| System Call | Function |
|---|---|
| `open()` | Opens an existing file or creates a new file and returns a file descriptor. |
| `write()` | Writes data from memory to a file. |
| `read()` | Reads data from a file into a buffer. |
| `close()` | Closes an opened file descriptor and releases resources. |
| `stat()` | Retrieves information about a file, such as size, permissions, and number of links. |
| `mkdir()` | Creates a new directory with the specified permissions. |
| `opendir()` | Opens a directory stream for reading its contents. |
| `readdir()` | Reads one directory entry at a time from the opened directory. |
| `closedir()` | Closes the opened directory stream. |


## SOURCE CODE :
**File :** [fileOperation.c](https://github.com/112514020-create/osLab/blob/0a9c422db9803e3a9b8151f5965b4d7fba06336b/OSALABPROGRAMS/ex03/fileOperation.c)

## COMPILATION :

```bash
gcc fileOperation.c -o fileOperation
```

## EXECUTION :

```bash
./fileOperation
```

## OUTPUT :
![Output for Experiment 3](https://github.com/112514020-create/osLab/blob/0a9c422db9803e3a9b8151f5965b4d7fba06336b/OSALABPROGRAMS/ex03/output03.png)
