#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

int main(void)
{
    printk("TCA9555 Test Start!\n");

    while (1) {
        printk("Running...\n");
        k_sleep(K_SECONDS(1));
    }

    return 0;
}
