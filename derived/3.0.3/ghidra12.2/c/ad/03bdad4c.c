
undefined8 FUN_03bdad4c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong *puVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  uVar11 = (ulong)*(uint *)(&DAT_041e8330 + (param_2 & 0xffffffff) * 4);
  uVar14 = (ulong)*(uint *)(param_1 + 0x38);
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18);
  plVar12 = (long *)(lVar13 + 0x28);
  uVar8 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar11);
  puVar7 = PTR_DAT_04bb38c8;
  puVar6 = PTR_DAT_04bb38c0;
  if ((uVar14 != 0) && (-1 < (int)uVar8)) {
    puVar10 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
    puVar2 = puVar10 + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
      puVar2 = puVar10;
    }
    if ((*puVar2 >> (ulong)(uVar8 & 0x1f) & 1) != 0) {
      uVar8 = (**(code **)(*plVar12 + 0x50))(plVar12,uVar11);
      if ((int)uVar8 < 0) {
        return 0;
      }
      puVar2 = (uint *)(*(ulong *)puVar7 | uVar14) + 0x40000000;
      if (*(ulong *)puVar6 <= uVar14) {
        puVar2 = (uint *)(*(ulong *)puVar7 | uVar14);
      }
      if ((*puVar2 >> (ulong)(uVar8 & 0x1f) & 1) == 0) {
        return 0;
      }
      puVar9 = (ulong *)(puVar2 + 1);
      uVar8 = *puVar2 & 0xffffffffU >> (ulong)(~uVar8 & 0x1f);
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
      goto LAB_03bdaf08;
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x18);
  puVar9 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | uVar14);
  puVar3 = puVar9 + 0x20000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar14) {
    puVar3 = puVar9;
  }
  if ((*puVar3 >> (uVar11 & 0x3f) & 1) == 0) {
    return 0;
  }
  puVar9 = puVar3 + 1;
  uVar11 = *puVar3 & 0xffffffffffffffffU >> (~uVar11 & 0x3f);
  uVar5 = (uint)(uVar11 >> 0x20);
  uVar8 = (int)uVar11 - ((uint)(uVar11 >> 1) & 0x55555555);
  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar8 = uVar8 + (uVar8 >> 8);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar8 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f);
LAB_03bdaf08:
  uVar8 = *(uint *)((long)puVar9 + (long)(int)(uVar8 - 1) * 4);
  if (uVar8 >> 0x18 == 2) {
    lVar13 = *(long *)(lVar13 + 0x38);
    puVar1 = (undefined8 *)(lVar13 + 0x18);
    uVar5 = *(uint *)(lVar13 + 0x10);
    puVar4 = puVar1 + uVar5;
    if (1 < uVar5) {
      puVar4 = puVar1;
    }
    if (*(char *)(*(long *)(*(long *)*puVar4 + 0x58) + ((ulong)uVar8 & 0xffffff) * 0x14 + 0x12) !=
        '\0') {
      return 1;
    }
  }
  return 0;
}

