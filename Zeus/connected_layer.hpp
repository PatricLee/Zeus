#include <stdlib.h>
#include <stdio.h>
#include "layer.hpp"
#include "data.hpp"

void forward_connected(layer l_in, data d);
void backward_connected(layer l, data d);

struct connected_layer :public layer {
public :
	void make(int ins, int outs, ACTIVATION a) {
		inputs = ins;
		input = (float*)calloc(inputs, sizeof(float));
		outputs = outs;
		output = (float*)calloc(outputs, sizeof(float));
		weights = ins*outs;
		weight = (float*)calloc(weights, sizeof(float));

		activation = a;

		forward = forward_connected;
		backward = backward_connected;
#ifdef USE_GPU
		forward_gpu = forward_connected_gpu;
		backward_gpu = backward_connected_gpu;
#endif
	}
};

void forward_connected(layer l_in, data d) {
	
}

void backward_connected(layer l, data d) {

}

#ifdef USE_GPU
void forward_connected_gpu(layer l_in, data d) {

}

void backward_connected_gpu(layer l, data d) {

}
#endif