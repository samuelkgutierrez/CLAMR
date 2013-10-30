#ifndef _HASH_H
#define _HASH_H

enum choose_hash_method
{  METHOD_UNSET = 0,            //  use 0 for no method set
   PERFECT_HASH,                //  perfect hash 1
   LINEAR,                      //  linear hash 2
   QUADRATIC,                   //  quadratic hash 3
   PRIME_JUMP  };               //  prime_jump hash 4

typedef unsigned int uint;
typedef unsigned long ulong;

#ifdef __cplusplus
extern "C"
{
#endif

int *compact_hash_init(int ncells, uint isize, uint jsize, uint report_level);
void write_hash(uint ic, ulong hashkey, int *hash);
int read_hash(ulong hashkey, int *hash);
void compact_hash_delete(int *hash);

void write_hash_collision_report(void);
void read_hash_collision_report(void);
void final_hash_collision_report(void);

#ifdef __cplusplus
}
#endif


#endif // _HASH_H
