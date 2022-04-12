#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog - dog struct
  * @name: name of dog
  * @age: age of dog
  * @owner: dog ownwer
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
