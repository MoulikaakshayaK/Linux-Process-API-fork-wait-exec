// C Program to create new process using Linux API system calls fork() and getpid() , getppid()  
#include <stdio.h>    // for printf
#include <unistd.h>   // for getpid and getppid

int main() {
    pid_t pid, ppid;

    pid = getpid();     // Get process ID
    ppid = getppid();   // Get parent process ID

    printf("Process ID (PID): %d\n", pid);
    printf("Parent Process ID (PPID): %d\n", ppid);

    return 0;
}
