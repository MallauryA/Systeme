#include <stdio.h>
#include "tp2_2.h"

struct rat rat_produit(struct rat n1,struct rat n2)
{
  struct rat result;
  result.den = n1.den * n2.den;
  result.num = n1.num * n2.num;
  return result;
} 

struct rat rat_somme(struct rat n1, struct rat n2)
{
  struct rat result;
  result.num= n1.num*n2.num;
  result.den= n1.den*n2.num + n2.den*n1.num;
  return result;
}

struct rat rat_plus_petit(struct rat list[])
{
  int i=1;
  struct rat min;
  min.den=list[0].den;
  min.num=list[0].num;
  while(list[i].den != 0)
    {
      if((min.den/min.num) < (list[i].den/list[i].num))
	{
	  min.den=list[i].den;
	  min.num=list[i].num;
	}
      i++;
    }
  return min;
}
