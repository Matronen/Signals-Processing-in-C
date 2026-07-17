/*
Name: Matan Ronen & Matanel Kadosh
File: peripherals.h
Header file for the IIR moving average machine.
*/

#define FILTER_TAPS 50

typedef struct
{
	unsigned int samples[FILTER_TAPS];
	unsigned char oldest_index;
	unsigned char length;
} circular_buffer;

extern xdata circular_buffer CircularBuffer;
extern bit FLAG;
extern int x_new;

int update_buffer(int x_new);
void init_buffer(unsigned char length);



