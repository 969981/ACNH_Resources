
bool FUN_02c804a0(long param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  uint uStack_80;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  puVar7 = PTR_DAT_04bb43c0;
  uVar5 = *param_2;
  uVar3 = *(undefined1 *)(param_2 + 1);
  uVar4 = *(undefined1 *)((long)param_2 + 3);
  uVar2 = *(undefined4 *)(param_2 + 2);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  local_58 = uVar5;
  local_56 = uVar3;
  local_55 = uVar4;
  local_54 = uVar2;
  uVar8 = FUN_0277d6c4(&local_58);
  lVar12 = *(long *)puVar7;
  if (lVar12 == 0) {
    return false;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar8) {
    return false;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
    return false;
  }
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_60 = 0;
  local_68 = uVar5;
  local_66 = uVar3;
  local_65 = uVar4;
  local_64 = uVar2;
  uVar8 = FUN_0277d6c4(&local_68);
  uStack_80 = 0;
  if (*(long *)puVar7 == 0) goto LAB_02c80658;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (uVar8 < *(uint *)(lVar12 + 0x1d8)) {
    uStack_80 = 0;
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0) goto LAB_02c80658;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (puVar10 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar10 != (uint *)0x0)) {
      uVar8 = *puVar10;
      uStack_80 = 0;
      if ((uVar8 == 0) || (puVar10 == (uint *)(ulong)uVar8)) goto LAB_02c80658;
      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
      uStack_80 = 0;
      if (*puVar11 == 0) goto LAB_02c80658;
      uVar8 = puVar11[1];
      if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar11 + lVar12 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar12 != 0) {
          uVar1 = 0;
          if ((ulong)uVar8 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar8);
          }
          if (*puVar11 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar6 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uStack_80 = (uint)uVar6,
             uVar6 < 0x5b6)) goto LAB_02c80658;
        }
      }
    }
  }
  uStack_80 = 0;
LAB_02c80658:
  local_90 = &DAT_04ab2e50;
  lVar12 = 0;
  local_88 = uVar5;
  local_86 = uVar3;
  local_85 = uVar4;
  local_84 = uVar2;
  do {
    uVar9 = (*(code *)*local_90)(&local_90,param_1 + 0x97ad8 + lVar12);
    if ((uVar9 & 1) != 0) {
      return lVar12 != 0x7fffffff8;
    }
    lVar12 = lVar12 + 8;
  } while (lVar12 != 0x200);
  return false;
}

