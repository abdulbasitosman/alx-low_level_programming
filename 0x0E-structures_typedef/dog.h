#ifndef DOG_H                                                                                                                           
#define DOG_H                                                                                                                           
                                                                                                                                        
/**                                                                                                                                     
 * structDog - declares dog struct
 * @name: name of dog
 * @age: the dog age
 * @owner: dog owner
 */

struct dog {
	char *name;
	float age;
	char *owner;
}

/* 
 *  *dog_t - new name forthe dog struct
 */                                                                                                                                        
typedef struct dog dog_t;                                                                                                               
                                                                                                                                        
void init_dog(struct dog *d, char *name, float age, char *owner);                                                                       
void print_dog(struct dog *d);                                                                                                          
dog_t *new_dog(char *name, float age, char *owner);                                                                                     
void free_dog(dog_t *d);                                                                                                                
char *_strcpy(char *dest, char *src);                                                                                                   
int _strcpy(char *s);                                                                                                                   

#endif /*DOG_H*/
