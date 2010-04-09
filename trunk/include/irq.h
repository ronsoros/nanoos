//////////////////////////////////////////////////////////
// This file is a part of Nanos Copyright (C) 2008, 2009//
// ashok.s.das@gmail.com                                //
//////////////////////////////////////////////////////////
// IRQ header                                           //
//                                                      //
//////////////////////////////////////////////////////////
//irq.h
#ifndef __IRQ_H__
#define __IRQ_H__

#include "idt.h"

namespace IRQ{ //IRQs are global
	typedef void(*irqfunc_t)(IDT::regs *r);	
	void setup();
	void remap(void);
	void dump_irq_routines(void);
	void install_handler(int irq, irqfunc_t my_handler);
	void uninstall_handler(int irq);
	unsigned short get_irq_mask();
	void set_irq_mask(unsigned short mask);
	void enable_irq(int irq);
	void disable_irq(int irq);
}; //end namespace IRQ


#endif
