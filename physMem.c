#include "types.h"
#include "stat.h"
#include "user.h"


//Returns physical memory of current proc

int main(void) {
	
	printf(1,"La direccion fisica en memoria de este proceso es %X\n", getpmem());
	exit();
}
