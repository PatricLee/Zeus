#define USE_GPU

enum ACTIVATION{leaky};

struct layer {
	int inputs;//num of inputs
	float *input;//input vector
	int outputs;//num of outputs
	float *output;//output vector
	int weights;//num of weights
	float *weight;//weight vector

	ACTIVATION activation;//activation function

	void(*forward)(struct layer, struct data);//forwarding function
	void(*forward_gpu)(struct layer, struct data);
	void(*backward)(struct layer, struct data);//backwarding function
	void(*backward_gpu)(struct layer, struct data);

	void(*save)(FILE *file);
	void(*load)(FILE *file);

	int *iparameter;//integer parameters specified by layers
	float *fparameter;//float parameters specified by layers
};

void activate(float *data, int num, ACTIVATION activ) {

}

void gradient(float *data, int num, ACTIVATION activ) {

}