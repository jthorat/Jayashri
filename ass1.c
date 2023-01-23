#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>




static int __init  mod_Init(void)
{
	printk(KERN_INFO"hello world\n");
//	printk(KERN_INFO "EBBChar: Device has been opened %d time(s)\n", numberOpens);
	printk(KERN_INFO "Loading Module\n");
	printk("The process id is %d\n", (int) pid(current));
	printk("The parent process id is %d\n", (int) pid(current));

	return 0;
}

static void  __exit mod_Exit(void)
{
	printk(KERN_INFO" removed the module\n");

}

module_init(mod_Init);
module_exit(mod_Exit);


MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(" HELLO WORLD PROGRAM");
MODULE_AUTHOR(" kernal master");


