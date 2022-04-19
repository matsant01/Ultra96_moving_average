//  Authors:
//      Emanuele Del Sozzo, Davide Conficconi
//      {emanuele.delsozzo, davide.conficconi}@polimi.it
//

#ifndef MV_AVG_HPP
#define MV_AVG_HPP

#include "hls_stream.h"
#include "ap_int.h"
#include "ap_axi_sdata.h"	//

// Shift Register Maximum Size
#define MAX_WINDOW_SIZE 16

// Template for AXI Stream interface
//template<class DT, int D,int U,int TI,int TD>
//struct ap_axis{
//	DT		 		data;
//	ap_uint<D/8> 	keep;
//	ap_uint<D/8> 	strb;
//	ap_uint<U> 		user;
//	ap_uint<1> 		last;
//	ap_uint<TI> 	id;
//	ap_uint<TD> 	dest;
//};
//
//typedef hls::axis<float, 1, 1, 1> streamType;
//typedef hls::stream<streamType> myStream;

// Definition of input/output AXI Stream types
typedef hls::axis<int, 1, 1, 1> my_ap_in;		//
typedef hls::axis<float, 1, 1, 1> my_ap_out;	//

// input/output types wrapped into hls_stream
typedef hls::stream<my_ap_in> my_stream_in;
typedef hls::stream<my_ap_out> my_stream_out;

// Top function prototype
void moving_average(my_stream_in &in, my_stream_out &out);

#endif
