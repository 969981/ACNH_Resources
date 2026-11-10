
uint * FUN_00364ec0(long param_1,char *param_2)

{
  char *__s2;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(param_1 + 0x38);
  if ((puVar2 != (uint *)0x0) && (uVar3 = (uint)(ushort)puVar2[2], (ushort)puVar2[2] != 0)) {
    do {
      puVar2 = puVar2 + 3;
      __s2 = (char *)0x0;
      if (*puVar2 != 0) {
        __s2 = (char *)((long)puVar2 + (ulong)*puVar2);
      }
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return (uint *)0x0;
}

