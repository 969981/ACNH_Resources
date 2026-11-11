
ulong FUN_0047c5a0(long *param_1,ulong *param_2)

{
  uint *puVar1;
  char *__s2;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *__s1;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)(param_1 + 1);
  if ((int)param_1[3] * 2 < (int)((*puVar7 + 1) * 3)) {
    FUN_0043d3c0(param_1 + 2);
  }
  uVar3 = FUN_00446800(*param_2 & 0xfffffffffffffffe);
  uVar6 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  puVar1 = (uint *)(lVar5 + (ulong)(uVar6 & uVar3) * 8);
  puVar8 = puVar1 + 1;
  uVar2 = *puVar8;
  while (-1 < (int)uVar2) {
    if (*puVar1 == uVar3) {
      __s2 = (char *)(*param_2 & 0xfffffffffffffffe);
      __s1 = (char *)(*(ulong *)(*param_1 +
                                (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4))
                     & 0xfffffffffffffffe);
      if ((__s2 == (char *)0x0) || (__s1 == (char *)0x0)) {
        if (__s1 != (char *)0x0) goto LAB_0047c61c;
        if (__s2 == (char *)0x0) goto LAB_0047c6a8;
      }
      else {
        iVar4 = strcmp(__s1,__s2);
        if (iVar4 == 0) goto LAB_0047c6a8;
      }
      lVar5 = param_1[2];
      uVar6 = *(uint *)(param_1 + 3);
    }
LAB_0047c61c:
    puVar1 = (uint *)(lVar5 + (((ulong)((long)puVar1 - lVar5) >> 3) + 1 & (long)(int)uVar6) * 8);
    puVar8 = puVar1 + 1;
    uVar2 = *puVar8;
  }
  uVar6 = *puVar7;
  *puVar1 = uVar3;
  *puVar8 = uVar6;
  puVar8 = puVar7;
LAB_0047c6a8:
  return (ulong)*puVar8 | ((long)puVar1 - param_1[2]) * 0x20000000;
}

