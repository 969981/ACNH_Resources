
/* WARNING: Removing unreachable block (ram,0x037314b4) */
/* WARNING: Removing unreachable block (ram,0x037314c4) */

void FUN_037313b0(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_a8;
  long lStack_a0;
  undefined8 *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  long lStack_58;
  
  *(undefined8 *)(param_1 + 0x14a8) = 0;
  lVar1 = param_1 + 0x1470;
  lVar12 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar12 == 0) {
    uVar15 = 0;
    uVar9 = 0;
    uVar11 = 0x10;
    uVar14 = 0x10;
  }
  else {
    uVar15 = *(uint *)(lVar12 + 0xd88);
    uVar9 = *(uint *)(lVar12 + 0xd8c);
    uVar14 = *(uint *)(lVar12 + 0xd98);
    uVar11 = *(uint *)(lVar12 + 0xd9c);
  }
  uVar3 = uVar15;
  if ((int)uVar14 <= (int)uVar15) {
    uVar3 = uVar14;
  }
  *(short *)(param_1 + 0x1474) = (short)uVar3;
  if ((int)uVar15 <= (int)uVar14) {
    uVar15 = uVar14;
  }
  *(short *)(param_1 + 0x1478) = (short)uVar15;
  uVar14 = uVar9;
  if ((int)uVar11 <= (int)uVar9) {
    uVar14 = uVar11;
  }
  if ((int)uVar9 <= (int)uVar11) {
    uVar9 = uVar11;
  }
  *(short *)(param_1 + 0x1476) = (short)uVar14;
  *(short *)(param_1 + 0x147a) = (short)uVar9;
  uVar2 = (short)uVar3;
  if ((uVar15 & 0xffff) <= (uVar3 & 0xffff)) {
    uVar2 = (short)uVar15;
  }
  *(undefined2 *)(param_1 + 0x1470) = uVar2;
  uVar2 = (short)uVar14;
  if ((uVar9 & 0xffff) <= (uVar14 & 0xffff)) {
    uVar2 = (short)uVar9;
  }
  *(undefined2 *)(param_1 + 0x1472) = uVar2;
  memset((void *)(param_1 + 0xabb0),2,0x3c1);
  memset(*(void **)(param_1 + 0xaf88),0,(long)*(int *)(param_1 + 0xaf84) << 2);
  *(undefined4 *)(param_1 + 0xaf90) = 0;
  FUN_035a4230(lVar1);
  local_60 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_98 = &local_60;
  puStack_90 = PTR_DAT_04bbc1a0 + 0x10;
  local_88 = PTR_DAT_04bb2010 + 0x10;
  uStack_80 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_a8 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  lStack_58 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  uVar10 = *(ulong *)(param_1 + 0x1488);
  lStack_a0 = lVar1;
  local_78 = local_88;
  if (uVar10 != 0) {
    uVar5 = *(ushort *)(param_1 + 0x1470);
    uVar13 = 0;
    iVar4 = *(int *)(param_1 + 0x147c);
    uVar15 = (uint)*(ushort *)(param_1 + 0x1472);
    uVar9 = (uint)uVar5;
    do {
      iVar6 = uVar9 - *(ushort *)(param_1 + 0x1470);
      if ((((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x147c))) &&
          (iVar7 = uVar15 - *(ushort *)(param_1 + 0x1472), -1 < iVar7)) &&
         ((iVar7 < *(int *)(param_1 + 0x1480) && (*(long *)(param_1 + 0x1490) != 0)))) {
        (*(code *)*local_a8)
                  (&local_a8,
                   *(long *)(param_1 + 0x1490) +
                   (long)(iVar6 + *(int *)(param_1 + 0x147c) * iVar7) * 0x28);
        uVar10 = *(ulong *)(param_1 + 0x1488);
      }
      uVar13 = uVar13 + 1;
      bVar8 = uVar9 + 1 == iVar4 + (uint)uVar5;
      if (bVar8) {
        uVar15 = uVar15 + 1;
      }
      uVar14 = (uint)uVar5;
      if (!bVar8) {
        uVar14 = uVar9 + 1;
      }
      uVar9 = uVar14;
    } while (uVar13 < uVar10);
  }
  FUN_035a56c0(lVar1,0);
  return;
}

