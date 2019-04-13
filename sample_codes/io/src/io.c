/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  io                                     */
/*      FILE         :  io.c                                   */
/*      DESCRIPTION  :  Main Program                           */
/*                                                             */
/*      This file was generated by e2 studio.                  */
/*                                                             */
/***************************************************************/

#include <iodefine.h>

#ifdef CPPAPP
//Initialize global constructors
extern void __main()
{
	static int initialized;
	if (! initialized)
	{
		typedef void (*pfunc) ();
		extern pfunc __ctors[];
		extern pfunc __ctors_end[];
		pfunc *p;

		initialized = 1;
		for (p = __ctors_end; p > __ctors; )
		(*--p) ();

	}
}
#endif 

int main(void) {
	PORT1.PDR.BIT.B4 = 1; //P14を出力として設定
//	PORT3.PDR.BIT.B5 = 0; //P35を入力として設定 （入力専用）変更できない
	while (1) {
		PORT1.PODR.BIT.B4 = PORT3.PIDR.BIT.B5;

		// TODO: add application code here
	}
	return 0;
}
