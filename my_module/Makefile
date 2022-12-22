obj-m+=test_module_1.o
#obj-m += Hello.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

load:
	sudo insmod test_module_1.ko
	sudo dmesg -c

unload: 
	sudo rmmod test_module_1.ko
	sudo dmesg -c
