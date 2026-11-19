
void FUN_03becad0(undefined4 *param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar2 = (undefined4 *)(param_2[1] + 4);
  if (*param_2 != 0) {
    puVar2 = (undefined4 *)(*param_2 + 0xc);
  }
  *param_1 = *puVar2;
  piVar5 = (int *)(param_2[1] + 8);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x10);
  }
  iVar6 = *piVar5;
  param_1[1] = iVar6;
  piVar5 = (int *)(param_2[1] + 0xc);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x14);
  }
  iVar7 = *piVar5;
  param_1[2] = iVar7;
  puVar3 = (uint *)(param_2[1] + 0x18);
  if (*param_2 != 0) {
    puVar3 = (uint *)(*param_2 + 0x20);
  }
  uVar8 = *puVar3;
  param_1[3] = uVar8;
  puVar3 = (uint *)(param_2[1] + 0x1c);
  if (*param_2 != 0) {
    puVar3 = (uint *)(*param_2 + 0x24);
  }
  uVar9 = *puVar3;
  param_1[4] = uVar9;
  puVar3 = (uint *)(param_2[1] + 0x20);
  if (*param_2 != 0) {
    puVar3 = (uint *)(*param_2 + 0x28);
  }
  uVar10 = *puVar3;
  param_1[5] = uVar10;
  puVar3 = (uint *)(param_2[1] + 0x24);
  if (*param_2 != 0) {
    puVar3 = (uint *)(*param_2 + 0x2c);
  }
  uVar11 = *puVar3;
  param_1[6] = uVar11;
  puVar3 = (uint *)(param_2[1] + 0x28);
  if (*param_2 != 0) {
    puVar3 = (uint *)(*param_2 + 0x30);
  }
  uVar12 = *puVar3;
  param_1[7] = uVar12;
  uVar14 = *(ulong *)PTR_DAT_04bb38c0;
  piVar5 = (int *)(param_2[1] + 0x2c);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x34);
  }
  iVar13 = *piVar5;
  param_1[8] = iVar13;
  uVar15 = *(ulong *)PTR_DAT_04bb38c8;
  if (iVar6 != 0) {
    uVar16 = uVar15 | *(uint *)((long)param_2 + 0x14);
    uVar4 = uVar16 + 0x100000000;
    if (uVar14 <= *(uint *)((long)param_2 + 0x14)) {
      uVar4 = uVar16;
    }
    *(ulong *)(param_1 + 10) = uVar4;
  }
  if (iVar7 != 0) {
    piVar5 = (int *)(param_2[1] + 0x10);
    if (*param_2 != 0) {
      piVar5 = (int *)(*param_2 + 0x18);
    }
    param_1[0xc] = *piVar5 + (int)param_2[2];
  }
  piVar5 = (int *)(param_2[1] + 0x14);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x1c);
  }
  uVar16 = (ulong)(uint)((int)param_2[2] + *piVar5);
  uVar15 = uVar15 | uVar16;
  uVar4 = uVar15 + 0x100000000;
  if (uVar14 <= uVar16) {
    uVar4 = uVar15;
  }
  if (uVar8 != 0) {
    *(ulong *)(param_1 + 0xe) = uVar4;
  }
  lVar1 = uVar4 + (ulong)uVar8 * 4;
  if (uVar9 != 0) {
    *(long *)(param_1 + 0x10) = lVar1;
  }
  lVar1 = lVar1 + (ulong)uVar9 * 4;
  if (uVar10 != 0) {
    *(long *)(param_1 + 0x12) = lVar1;
  }
  lVar1 = lVar1 + (ulong)uVar10 * 4;
  if (uVar11 != 0) {
    *(long *)(param_1 + 0x14) = lVar1;
  }
  lVar1 = lVar1 + (ulong)uVar11 * 8;
  if (uVar12 != 0) {
    *(long *)(param_1 + 0x16) = lVar1;
  }
  if (iVar13 != 0) {
    *(ulong *)(param_1 + 0x18) = lVar1 + (ulong)uVar12 * 0x14;
  }
  piVar5 = (int *)(param_2[1] + 0x30);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x38);
  }
  param_1[0x1b] = (int)param_2[2] + *piVar5;
  piVar5 = (int *)(param_2[1] + 0x3c);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x40);
  }
  param_1[0x1a] = (int)param_2[2] + *piVar5;
  piVar5 = (int *)(param_2[1] + 0x40);
  if (*param_2 != 0) {
    piVar5 = (int *)(*param_2 + 0x44);
  }
  param_1[0x1c] = (int)param_2[2] + *piVar5;
  return;
}

