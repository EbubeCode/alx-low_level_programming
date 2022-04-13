/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to do the job
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
