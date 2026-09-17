# PROGRAM 6 : INTER-PROCESS COMMUNICATION USING PIPES AND FIFO

## AIM :
To implement inter-process communication between processes using:
1.​ Unnamed pipes (pipe())
2.​ Named pipes / FIFO (mkfifo()) 
and exchange data between related and unrelated processes.

## CONTEXT :
This program demonstrates Inter-Process Communication (IPC) using an unnamed pipe in the Linux operating system. 
We explore,  Pipe: It is a communication mechanism that allows two related processes (a parent and its child) to exchange data.

## LINUX SYSTEM CALLS USED

| System Call | Function |
|---|---|
| `pipe()` | Creates an unnamed pipe for communication between related processes. |
| `fork()` | Creates a child process from the parent process. |
| `read()` | Reads data from the pipe (or a file descriptor). |
| `write()` | Writes data to the pipe (or a file descriptor). |
| `close()` | Closes the read or write end of the pipe and releases resources. |

## SOURCE CODE :
**File :** [exp6.c](https://github.com/112514020-create/osLab/blob/39240a28d7ed51d09469cf4e5e5b6aca9eb01727/OSALABPROGRAMS/ex06/exp6.c)

## COMPILATION :

```bash
gcc exp6.c -o exp6
```

## EXECUTION :

```bash
./exp6
```

## OUTPUT :
![Output for Experiment 6](https://github.com/112514020-create/osLab/blob/39240a28d7ed51d09469cf4e5e5b6aca9eb01727/OSALABPROGRAMS/ex06/output06.png)
