#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");
int kernel_init(void)
{
	printk(KERN_ALERT" hi this is kernal module\n");
	return 0;
}
void kernel_exit(void)
{
	printk(KERN_ALERT" exiting from kernel\n");
}
module_init(kernel_init);
module_exit(kernel_exit);
