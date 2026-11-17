
void FUN_02a74900(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_04bc4538 + 0x10;
  *param_1 = &PTR_LAB_04a9c530;
  param_1[1] = puVar1;
  memset(param_1 + 2,0,0x1b0);
  puVar1 = PTR_DAT_04bb3238;
  uVar10 = *(undefined4 *)PTR_DAT_04bb3238;
  lVar7 = 0;
  do {
    lVar2 = lVar7 + 0x10;
    *(undefined4 *)((long)param_1 + lVar7 + 0x10) = uVar10;
    *(undefined4 *)((long)param_1 + lVar7 + 0x14) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar7 + 0x18) = uVar10;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1c) = 0xffffffff;
    lVar7 = lVar2;
  } while (lVar2 != 0x1b0);
  param_1[0x38] = PTR_DAT_04bc4518 + 0x10;
  memset(param_1 + 0x39,0,0x2d0);
  lVar7 = 0;
  do {
    lVar2 = lVar7 + 0x28;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1c8) = uVar10;
    *(undefined2 *)((long)param_1 + lVar7 + 0x1cc) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1d0) = 0;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1d8) = 0;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1dc) = uVar10;
    *(undefined2 *)((long)param_1 + lVar7 + 0x1e0) = 0;
    *(undefined4 *)((long)param_1 + lVar7 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + lVar7 + 0x1e4) = 0;
    lVar7 = lVar2;
  } while (lVar2 != 0x2d0);
  *(undefined4 *)(param_1 + 0x93) = 0;
  puVar4 = PTR_DAT_04bc4530;
  uVar5 = 0;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x95] = puVar4 + 0x10;
  do {
    uVar3 = (ulong)uVar5;
    uVar5 = uVar5 + 1;
    puVar9 = (undefined4 *)((long)(param_1 + 2) + ((long)(uVar3 << 0x20) >> 0x1d));
    *puVar9 = uVar10;
    puVar9[1] = 0xffffffff;
  } while (uVar5 != 0x36);
  iVar6 = 0;
  do {
    puVar9 = (undefined4 *)((long)(param_1 + 0x39) + (long)iVar6 * 0x14);
    iVar6 = iVar6 + 1;
    *puVar9 = uVar10;
    *(undefined2 *)(puVar9 + 1) = 0;
    *(undefined8 *)(puVar9 + 2) = 0;
    puVar9[4] = 0;
  } while (iVar6 != 0x24);
  uVar5 = *(uint *)(param_1 + 0x93);
  if (uVar5 != 0) {
    lVar7 = param_1[0x94];
    uVar8 = 0;
    do {
      *(undefined4 *)(lVar7 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar10 = *(undefined4 *)puVar1;
  }
  *(undefined4 *)(param_1 + 0x99) = uVar10;
  *(undefined4 *)((long)param_1 + 0x4cc) = uVar10;
  return;
}

