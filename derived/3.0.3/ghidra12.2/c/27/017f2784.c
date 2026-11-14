
ushort FUN_017f2784(long param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb46d0;
  if (*(short *)(param_1 + 0xbc) != *(short *)PTR_DAT_04bb3170 || *(int *)(param_1 + 0x208) != -1) {
    uVar5 = 0xea;
    goto LAB_017f2950;
  }
  sVar2 = *(short *)(param_1 + 0xb4);
  if (sVar2 == -2) {
    local_38 = 0x139b;
    FUN_0277d4ac(&local_38);
    puVar4 = PTR_DAT_04bb43c0;
    local_40 = 0;
    local_50 = PTR_DAT_04bc0510 + 0x10;
    local_48 = (undefined4)local_38;
    local_44 = local_38._4_4_;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_38);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
          lVar8 = *(long *)(lVar8 + 0x1e0);
LAB_017f293c:
          lVar8 = *(long *)(lVar8 + (long)(int)uVar5 * 8);
          if (lVar8 != 0) {
            local_40 = lVar8;
          }
        }
      }
    }
  }
  else {
    local_40 = 0;
    local_48 = CONCAT22(*(undefined2 *)(param_1 + 0xb6),sVar2);
    local_44 = *(undefined4 *)(param_1 + 0xb8);
    local_50 = PTR_DAT_04bc0510 + 0x10;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4((short *)(param_1 + 0xb4));
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (uVar5 < *(uint *)(lVar8 + 0x1d8)) {
          lVar8 = *(long *)(lVar8 + 0x1e0);
          goto LAB_017f293c;
        }
      }
    }
  }
  uVar5 = FUN_01b020f0(&local_50);
LAB_017f2950:
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x200);
  if (((uVar5 < *(uint *)(lVar9 + 0x1e0)) &&
      (puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e8) + (long)(int)uVar5 * 8), puVar6 != (uint *)0x0))
     && (uVar5 = *puVar6, uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
    if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar9 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar9 != 0) {
        uVar1 = 0;
        if ((ulong)uVar5 != 0) {
          uVar1 = (uint)((ulong)((long)puVar6 - lVar9) / (ulong)uVar5);
        }
        if (*puVar7 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < *(uint *)PTR_DAT_04bbe4e8) &&
           (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bbe4e8 + 8) + (long)(int)uVar1 * 2), uVar3 < 2))
        {
          return uVar3;
        }
      }
    }
  }
  return 0;
}

