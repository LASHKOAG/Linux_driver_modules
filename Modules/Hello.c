#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void){
	printk(KERN_ALERT "This is showing, Hello Linux./n");
	return 0;
}

static void hello_exit(void){
	printk(KERN_ALERT "Goodbuy./n");
}

module_init(hello_init);
module_exit(hello_exit);
