#ifndef D_MACROS
#define D_MACROS

/**
 * struct dog - defines a the type dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* end ifndef D_MACROS */
