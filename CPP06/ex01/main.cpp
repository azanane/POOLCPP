#include "Data/Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data 		*data = new Data();
	uintptr_t	test;

	data->dataContent = 2109;
	PRINT("Value of data content variable before : " << data->dataContent)

	test = serialize(data);
	PRINT("Value of data content variable after : " << deserialize(test)->dataContent)

	delete data;

	return 0;
}