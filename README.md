# scheduling_algo_OS

FCFS algorithm:      FCFS is a simplest CPU scheduling Non-preemptive algorithm


• The process that requests the CPU first
is allocated the CPU first
• Implemented with a FIFO queue. When
a process enters the Ready Queue, its
PCB is linked on to the tail of the
Queue. When the CPU is free it is
allocated to the process at the head of
the Queue.


Round Robin algorithm: RR=FCFS + Preemptive scheduling.So, RR scheduling is a preemptive scheduling algorithm.
• Ready queue is treated as a circular queue.
• It is designed especially for time sharing
system.
• Each process is provided a small unit of fix
time to execute, it is called a quantum or
time quantum.
• Each process gets the CPU for a time
quantum (or time slice), typically 10 - 100
ms.
• When the time quantum expired, the CPU
switched to another job.
• Context switching is used to save states of
preempted processes.
• A process runs until it blocks, terminates,
or uses up its time slice.

To implement RR scheduling,
o we keep the ready queue as a FIFO queue of 
processes.
o New processes are added to the tail of the 
ready queue.
o The CPU scheduler picks the first process 
from the ready queue, sets a timer to 
interrupt after 1 time quantum, and 
dispatches the process.
o The process may have a CPU burst of less 
than 1 time quantum.
 In this case, the process itself will 
release the CPU voluntarily.
 The scheduler will then proceed to the 
next process in the ready queue.
o Otherwise, if the CPU burst of the currently running process is longer than 1 time
quantum,
 the timer will go off and will cause an interrupt to the OS.
 A context switch will be executed, and the process will be put at the tail of the
ready queue.
 The CPU scheduler will then select the next process in the ready queue.


SJF:  Shortest job first(SJF) is a scheduling algorithm, that is used to schedule
processes in an operating system.
• There are two types of SJF
1. Pre-emptive SJF OR SJF 2. Non-Preemptive SJF OR SRTF
• These algorithms schedule processes in the order in which the shortest
job is done first. It has a minimum average waiting time.
• There are 3 factors to consider while solving SJF, they are            1. BURST Time 2. Average waiting time 3. Average Turn around time
                Shortest Job First (SJF)
• It’s a non preemptive algorithm.
• In SJF scheduling, the process with the lowest burst time, among the
list of available processes in the ready queue, is going to be
scheduled next.
• The SJF algorithm is one of the best scheduling algorithms since it
provides the maximum throughput and minimal waiting time but
the problem with the algorithm is, the CPU burst time can't be
known in advance.
• A different approach to CPU scheduling is the shortest-job-first
(SJF) scheduling algorithm. This algorithm associates with each process
the length of the process's next CPU burst.
• When the CPU is available, it is assigned to the process that has the smallest
next CPU burst. If the next CPU bursts of two processes are the same, FCFS
scheduling is used.
