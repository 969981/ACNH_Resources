
uint * FUN_0038cad0(uint *param_1,char *param_2)

{
  char *__s2;
  int iVar1;
  uint uVar2;
  
  if ((param_1 != (uint *)0x0) && (uVar2 = (uint)(ushort)param_1[2], (ushort)param_1[2] != 0)) {
    do {
      param_1 = param_1 + 3;
      __s2 = (char *)0x0;
      if (*param_1 != 0) {
        __s2 = (char *)((long)param_1 + (ulong)*param_1);
      }
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return param_1;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return (uint *)0x0;
}

