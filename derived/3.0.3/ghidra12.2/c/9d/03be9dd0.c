
undefined8 * FUN_03be9dd0(long param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  char *__s2;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint *puVar16;
  ulong uVar17;
  
  if (param_2 == (char *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  uVar12 = *(uint *)(lVar11 + 0x560);
  uVar13 = (ulong)uVar12;
  uVar3 = *(uint *)(lVar11 + 0x534);
  if (uVar12 < uVar3) {
    lVar9 = *(long *)(lVar11 + 0x548);
    iVar15 = uVar3 - uVar12;
    uVar17 = *(ulong *)PTR_DAT_04bb38c0;
    uVar14 = *(ulong *)PTR_DAT_04bb38c8;
    puVar16 = (uint *)(lVar9 + (ulong)uVar12 * 0xc);
    do {
      pcVar6 = (char *)(uVar14 | *puVar16);
      __s2 = pcVar6 + 0x100000000;
      if (uVar17 <= *puVar16) {
        __s2 = pcVar6;
      }
      if ((__s2 != (char *)0x0) && (iVar5 = strcmp(param_2,__s2), iVar5 == 0)) {
        uVar12 = (uint)uVar13;
        if ((int)uVar12 < 0) {
          return (undefined8 *)0x0;
        }
        if (uVar3 <= uVar12) {
          return (undefined8 *)0x0;
        }
        uVar14 = uVar13 & 0xffffffff;
        if (*(int *)(lVar9 + uVar14 * 0xc + 4) != 4) {
          return (undefined8 *)0x0;
        }
        uVar17 = FUN_03be8d94(0,param_3,"getCustomParamValueString(%s)",param_2);
        if ((uVar17 & 1) == 0) {
          return &DAT_0407ebb1;
        }
        uVar17 = *(ulong *)PTR_DAT_04bb38c0;
        uVar7 = *(ulong *)PTR_DAT_04bb38c8;
        puVar10 = (ulong *)(uVar7 | *(uint *)(param_3 + 0x18));
        puVar2 = puVar10 + 0x20000000;
        if (uVar17 <= *(uint *)(param_3 + 0x18)) {
          puVar2 = puVar10;
        }
        if ((*puVar2 >> (uVar13 & 0x3f) & 1) != 0) {
          uVar13 = *puVar2 & 0xffffffffffffffffU >> (~uVar14 & 0x3f);
          uVar12 = (int)uVar13 - ((uint)(uVar13 >> 1) & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar3 = (uint)(uVar13 >> 0x20);
          uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
          uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
          uVar3 = uVar3 + (uVar3 >> 8);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
          uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
          puVar8 = puVar1 + uVar4;
          if (1 < uVar4) {
            puVar8 = puVar1;
          }
          uVar13 = (ulong)((*(uint *)((long)puVar2 +
                                     (long)(int)((uVar12 + (uVar12 >> 0x10) & 0x3f) +
                                                 (uVar3 + (uVar3 >> 0x10) & 0x3f) + -1) * 4 + 8) &
                           0xffffff) + *(int *)(*(long *)*puVar8 + 0x70));
          puVar8 = (undefined8 *)(uVar7 | uVar13);
          puVar1 = puVar8 + 0x20000000;
          if (uVar17 <= uVar13) {
            puVar1 = puVar8;
          }
          return puVar1;
        }
        if (*(uint *)(lVar11 + 0x534) <= uVar12) {
          return &DAT_0407ebb1;
        }
        uVar13 = (ulong)*(uint *)(*(long *)(lVar11 + 0x548) + uVar14 * 0xc + 8);
        puVar8 = (undefined8 *)(uVar7 | uVar13);
        puVar1 = puVar8 + 0x20000000;
        if (uVar17 <= uVar13) {
          puVar1 = puVar8;
        }
        return puVar1;
      }
      uVar13 = uVar13 + 1;
      iVar15 = iVar15 + -1;
      puVar16 = puVar16 + 3;
    } while (iVar15 != 0);
  }
  return (undefined8 *)0x0;
}

