template <class T>
T maximum(T value1, T value2, T value3){
	T max;
	if(value2 > (max = value1))
		max = value2;
	if(value3 > max)
		max = value3;
	return max;
}
