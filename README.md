On the first line 6-7, we use  stdio.h for support function “printf” and pthread.h for the function pthread_create and pthread_join. 

For the JUM_THREAD will represent number of thread and N_TIMES represent how many thread will running.


On this part we create function call named thread_function. Here we start define for integer incoming  dan n_timex. Then create condition whereby when  n_timex start with value 0 anda it's will plus one until same as value  N_TIMES  which is 5. After that, fuction will print to stream 
writes formatted text to the output stream specify. 


On the main code we write a function by using  pthread_create and pthread_join with condition when threadIdx must less the value JUM_THREAD start with 0 it thread will create print through thread_function. The function suspends execution of the calling thread until the target thread terminates by using  pthread_join


Output :


#########################################################
#               Coder Name: Kaiser Farrell              #
#               create and join thread                  #
#########################################################
Hello, World (thread 0)
Hello, World (thread 0)
Hello, World (thread 0)
Hello, World (thread 0)
Hello, World (thread 0)

Hello, World (thread 1)
Hello, World (thread 1)
Hello, World (thread 1)
Hello, World (thread 1)
Hello, World (thread 1)

Hello, World (thread 2)
Hello, World (thread 2)
Hello, World (thread 2)
Hello, World (thread 2)
Hello, World (thread 2)

Hello, World (thread 3)
Hello, World (thread 3)
Hello, World (thread 3)
Hello, World (thread 3)
Hello, World (thread 3)

Hello, World (thread 4)
Hello, World (thread 4)
Hello, World (thread 4)
Hello, World (thread 4)
Hello, World (thread 4)















