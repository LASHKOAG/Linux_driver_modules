#include <linux/init.h>
#include <linux/module.h>

int ex03_simple_module_init(void)
{
	printk(KERN_ALERT "============== Inside the %s function\n", __FUNCTION__);
	return 0;
}


module_init(ex03_simple_module_init);
