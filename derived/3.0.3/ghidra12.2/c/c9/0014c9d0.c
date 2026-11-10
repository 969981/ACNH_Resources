
char * FUN_0014c9d0(char *param_1,int param_2,FILE *param_3)

{
  bool bVar1;
  bool bVar2;
  char *__s;
  size_t sVar3;
  
  __s = fgets(param_1,param_2,param_3);
  if (__s != (char *)0x0) {
    bVar1 = false;
    do {
      sVar3 = strlen(__s);
      if (sVar3 == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = __s[sVar3 - 1] != '\n';
        if (!(bool)(bVar1 | bVar2)) {
          return __s;
        }
      }
      __s = fgets(param_1,param_2,param_3);
      bVar1 = bVar2;
    } while (__s != (char *)0x0);
  }
  return (char *)0x0;
}

