#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void){
	printk(KERN_ALERT "=========== HELLO HELLLLLLO embeded !!!=============.\n");
	return 0;
}

static void hello_exit(void){
	printk(KERN_ALERT "=========== QUIT QUIT embeded !!!=============.\n");
}

module_init(hello_init);
module_exit(hello_exit);

// int init_module(void)
// {
// 	printk(KERN_INFO "=========== HELLO embeded !!!=============");
// }

// void cleanup_module(void)
// {
// 	printk(KERN_INFO "=========== QUIT embeded !!!=============");
// }

MODULE_LICENSE("GPL");
