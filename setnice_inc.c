#include <linux/kernel.h>
#include <linux/sched.h>
 
asmlinkage long set_nice_inc(pid_t pid, int value){
    struct task_struct *t;
    
    p->nice=p->real_parent->nice+p->real_parent->nice_inc
        
    return 0;
}
