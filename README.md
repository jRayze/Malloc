# Malloc

Implementation of Malloc function in C

# Script launch :

$> : export HOSTTYPE=mymalloc

Standard launch :

$> : make

Debug mode launch :

$> : make debug


$> : ./run.sh ./yourbinary

# ALLOCATION TYPES DEFINE :

  TINY : 128
  
  SMALL : 4096

# You can use multiple function in your code :

- (void *pointer)malloc(size_t octet);                  // allocate dynamic memory
- (void *pointer)realloc(void *ptr, size_t octet);      // allocate new dynamic memory with 
- (void *pointer)calloc(size_t octet);                  // allocate dynamic memory and set over bits at 0
- (void)free(void *octet);                              // liberate memory allocated
- (void)show_alloc_mem();                               // show allocated memory sequenced by type of allocation
- (void)show_alloc_mem_ex();                            // show allocated memory in dump_hexa sequenced by type of allocation
