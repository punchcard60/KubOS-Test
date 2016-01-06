
#include <sys_types.h>

uint16_t mutex=0;

int main(void)
{
	uint16_t x = __atomic_exchange_n(&mutex, 1, __ATOMIC_SEQ_CST);
	return (int)x;
}
