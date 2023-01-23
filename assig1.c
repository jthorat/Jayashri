#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include<linux/sched.h>

MODULE_AUTHOR("Kernel Masters");
MODULE_DESCRIPTION("Hello World module");
MODULE_LICENSE("GPL");


static int hello_init(void)
{
	printk(KERN_INFO"inserting the module\n");
	printk("pid:%d name:%s\n",current->pid,current->comm);
	printk("ppid:%d  name:%s\n",current->pid_t,current->comm);

	printk(KERN_DEBUG "%s:%s:%d\n",__FILE__,__func__,__LINE__);
	
	return 0; 
}

static void hello_exit(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);

}

module_init(hello_init);
module_exit(hello_exit);
