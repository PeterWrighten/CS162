# Alarm Clock Logic

### needed datastructure modifications
 - in thread.h
    - add wakeup var to thread struct  
 - in thread.c  
    - on thread_init create empty thread sleep list

### implementation
 - in timer.c
    - on timer sleep( ticks )
    - call thread.c > thread_sleep( ticks )  
      then implement:
      
        ```c
        critical section    
           disable ints, and store old int value
             set thread struct's wakeup time to ( systime + ticks )
             add new list_elem containing:
                    thread struct pointer to sleeping list
             thread_block()
               in schedule()
                   walk the sleeping list
                     foreach thread try_wake()
                         if systime >= thread->wakeup
                             thread_unblock()
           reenable/restore ints
        end critical section
        ```
