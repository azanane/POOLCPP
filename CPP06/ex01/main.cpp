#include "Data/Data.hpp"

uintptr_t serialize(Data* ptr)
{
	// void	*tmpVoid = ptr;
	// uintptr_t value = reinterpret_cast<uintptr_t &>(tmpVoid);

	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	// void	*tmpVoid = &raw;
	// Data *dataDeserialize = &reinterpret_cast<Data &>(tmpVoid);

	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data *data = new Data();

	data->dataContent = 2109;
	PRINT("Value of data content variable before : " << data->dataContent)
	PRINT("Value of data content variable after : " << deserialize(serialize(data))->dataContent)

	delete data;

	return 0;
}