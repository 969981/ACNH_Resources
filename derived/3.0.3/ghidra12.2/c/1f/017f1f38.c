
undefined8 FUN_017f1f38(long param_1)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  undefined8 local_28;
  
  puVar5 = PTR_DAT_04bb46d0;
  puVar4 = PTR_DAT_04bb43c0;
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170) {
    return 0x28;
  }
  lVar11 = *(long *)PTR_DAT_04bb46d0;
  if (*(int *)(param_1 + 0x208) == -1) {
    sVar3 = *(short *)(param_1 + 0xb4);
    if (sVar3 == -2) {
      local_28 = 0x139b;
      FUN_0277d4ac(&local_28);
      puVar4 = PTR_DAT_04bb43c0;
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = (undefined4)local_28;
      local_4c = local_28._4_4_;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_28);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(lVar9 + 0x1e0);
LAB_017f2100:
            lVar9 = *(long *)(lVar9 + (long)(int)uVar6 * 8);
            if (lVar9 != 0) {
              local_48 = lVar9;
            }
          }
        }
      }
    }
    else {
      local_48 = 0;
      local_50 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar3);
      local_4c = *(undefined4 *)(param_1 + 0xb8);
      local_58 = PTR_DAT_04bc0510 + 0x10;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar4 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4((short *)(param_1 + 0xb4));
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
            lVar9 = *(long *)(lVar9 + 0x1e0);
            goto LAB_017f2100;
          }
        }
      }
    }
    uVar6 = FUN_01b020f0(&local_58);
  }
  else {
    uVar6 = 0xea;
  }
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x200);
  if (((((uVar6 < *(uint *)(lVar11 + 0x1e0)) &&
        (lVar9 = *(long *)(*(long *)(lVar11 + 0x1e8) + (long)(int)uVar6 * 8), lVar9 != 0)) &&
       (*(long *)(lVar11 + 0xb8) != 0)) &&
      ((puVar10 = *(uint **)(*(long *)(lVar11 + 0xb8) + 8), puVar10 != (uint *)0x0 &&
       (*puVar10 != 0)))) && ((uVar6 = puVar10[1], uVar6 != 0 && ((ulong)(ushort)puVar10[2] != 0))))
  {
    lVar1 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar6 != 0) {
        uVar2 = (uint)((ulong)(lVar9 - lVar1) / (ulong)uVar6);
      }
      if (*puVar10 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      uVar8 = (ulong)uVar2;
      if ((0 < *(int *)(lVar11 + 0x1c8)) && (uVar2 < *(uint *)(lVar11 + 0x1d0))) {
        uVar8 = (ulong)*(short *)(*(long *)(lVar11 + 0x1d8) + (long)(int)uVar2 * 2);
      }
      goto LAB_017f21b8;
    }
  }
  uVar8 = 0xffffffff;
LAB_017f21b8:
  uVar7 = FUN_017bf890(*(undefined8 *)puVar5,uVar8);
  return uVar7;
}

