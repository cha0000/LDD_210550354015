#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>




static int var1 = 15;
static int var2 = 4;
static char* choice = 'a';

module_param(var1, int, S_IRUGO);
module_param(var2, int, S_IRUGO);
module_param(choice, charp, S_IRUGO);


static int param_init(void)
{

	printk("hello\n");
	
	if(*choice=='s')
	{
		printk("sum is %d\n",var1+var2);
	}
	else if(*choice=='d')
	{
		printk("difference is %d\n",var1-var2);
	}
	else if(*choice=='p')
	{
		printk("product is %d\n",var1*var2);

	}
	else if(*choice=='q')
	{
		printk("quotient is %d\n",var1/var2);
	}
	return 0;

}
static void param_cleanup(void)
{
	printk("Goodbye\n");

}

module_init(param_init);
module_exit(param_cleanup);

MODULE_LICENSE("GPL");
