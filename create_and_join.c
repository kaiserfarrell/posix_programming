/***********************************************************************
* Coder Name: Kaiser Farrell
                          *
***********************************************************************/
#include <stdio.h>
#include <pthread.h>

#define JUM_THREAD 5          //set jumlah thread yang kita nak adalah 5
#define N_TIMES    5          // set berapa kali thread yang akan print kepada 5
#define GRN     "\x1B[32m"    //hijau
#define RED  "\x1B[31m"        //merah
#define RESETCOLOR "\033[0m"  //reset color

void *thread_function(void *arg) {
int *incoming = (int *)arg;
int n_timex;

  for (n_timex = 0; n_timex < N_TIMES; n_timex++)
    fprintf(stdout, "%sHello, World (thread %d)\n", RED, *incoming);

  return NULL;
}

 /*********************************************************** 
                       MAIN CODE START
*************************************************************/
int main(int argc, char **argv) {
  pthread_t thread_ID[JUM_THREAD];
  void *exit_status;
  int threadIdx;

printf("\n%s#########################################################", GRN);
printf("\n%s#               Coder Name: Kaiser Farrell              #", GRN);
printf("\n%s#               create and join thread                  #", GRN);
printf("\n%s#########################################################", GRN);
printf("%s\n", RESETCOLOR);

  for (threadIdx = 0; threadIdx < JUM_THREAD; threadIdx++) {
    pthread_create(&thread_ID[threadIdx], NULL, thread_function, &threadIdx);
    pthread_join(thread_ID[threadIdx], &exit_status);
    printf("%s\n", RESETCOLOR);
  }

  return 0;
}