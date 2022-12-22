#include <linux/init.h>
#include <linux/module.h>


void ex02_simple_module_exit(void)
{
	printk(KERN_ALERT "====/=/=/=/=/=/=/=/=/=/=/=/=/=/Inside the %s function\n", __FUNCTION__);
}

module_exit(ex02_simple_module_exit);