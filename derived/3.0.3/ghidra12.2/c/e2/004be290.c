
uint * FUN_004be290(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *__s1;
  char *__s2;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar2 = FUN_00446800(*param_2);
  uVar5 = *(uint *)(param_1 + 3);
  lVar4 = param_1[2];
  uVar1 = *(uint *)(lVar4 + (ulong)(uVar5 & uVar2) * 8 + 4);
  if (-1 < (int)uVar1) {
    puVar6 = (uint *)(lVar4 + (ulong)(uVar5 & uVar2) * 8);
    do {
      if (*puVar6 == uVar2) {
        __s2 = (char *)*param_2;
        __s1 = *(char **)(*param_1 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
        if (__s1 == __s2) {
          return puVar6;
        }
        if (__s1 != (char *)0x0 && __s2 != (char *)0x0) {
          iVar3 = strcmp(__s1,__s2);
          if (iVar3 == 0) {
            return puVar6;
          }
          lVar4 = param_1[2];
          uVar5 = *(uint *)(param_1 + 3);
        }
      }
      puVar6 = (uint *)(lVar4 + (((ulong)((long)puVar6 - lVar4) >> 3) + 1 & (long)(int)uVar5) * 8);
      uVar1 = puVar6[1];
    } while (-1 < (int)uVar1);
  }
  return (uint *)0x0;
}

