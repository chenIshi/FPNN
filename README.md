# FPNN
Fixed point neuron network.

Recently, Facebook engineers had post a research blog [Making floating point math highly efficient for AI hardware](https://code.fb.com/ai-research/floating-point-math/) 
about using non-standard (IEEE 754) float in neuron network to boost the efficiency on inference.
Today, we want to compare the performance between using different representations of number such as fixed point number.