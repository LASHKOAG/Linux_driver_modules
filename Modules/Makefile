obj-m += Hello.o

#KDIR=/usr/src/linux-headers-5.4.0-40-generic

all:
	#$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	#rm -rf *.o *.ko *.mod.* *.symvers *.order
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
