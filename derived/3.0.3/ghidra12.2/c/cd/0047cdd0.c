
uint * FUN_0047cdd0(long *param_1,ulong *param_2)

{
  char *__s2;
  uint uVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = FUN_00446800(*param_2 & 0xfffffffffffffffe);
  uVar5 = *(uint *)(param_1 + 3);
  lVar4 = param_1[2];
  uVar3 = *(uint *)(lVar4 + (ulong)(uVar5 & uVar1) * 8 + 4);
  if (-1 < (int)uVar3) {
    puVar6 = (uint *)(lVar4 + (ulong)(uVar5 & uVar1) * 8);
    do {
      if (*puVar6 == uVar1) {
        __s2 = (char *)(*param_2 & 0xfffffffffffffffe);
        __s1 = (char *)(*(ulong *)(*param_1 + (long)(int)uVar3 * 0x18) & 0xfffffffffffffffe);
        if ((__s2 == (char *)0x0) || (__s1 == (char *)0x0)) {
          if (__s1 != (char *)0x0) goto LAB_0047ce70;
          if (__s2 == (char *)0x0) {
            return puVar6;
          }
        }
        else {
          iVar2 = strcmp(__s1,__s2);
          if (iVar2 == 0) {
            return puVar6;
          }
        }
        lVar4 = param_1[2];
        uVar5 = *(uint *)(param_1 + 3);
      }
LAB_0047ce70:
      puVar6 = (uint *)(lVar4 + (((ulong)((long)puVar6 - lVar4) >> 3) + 1 & (long)(int)uVar5) * 8);
      uVar3 = puVar6[1];
    } while (-1 < (int)uVar3);
  }
  return (uint *)0x0;
}

