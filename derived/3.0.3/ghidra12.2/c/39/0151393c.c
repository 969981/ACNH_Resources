
undefined8 FUN_0151393c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  uVar5 = *(undefined2 *)(param_1 + 4);
  uVar3 = *(undefined1 *)(param_1 + 6);
  uVar4 = *(undefined1 *)(param_1 + 7);
  uVar2 = *(undefined4 *)(param_1 + 8);
  local_58 = uVar5;
  local_56 = uVar3;
  local_55 = uVar4;
  local_54 = uVar2;
  FUN_0277d6c4(&local_58);
  puVar6 = PTR_DAT_04bb43c0;
  if (DAT_04c487d4 == -1) {
    return 1;
  }
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar9 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar9 >> 4 & 1) == 0) {
    return 1;
  }
  uVar7 = FUN_0277d6c4(&local_58);
  lVar11 = *(long *)puVar6;
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar7) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return 0;
  }
  local_60 = 0;
  local_68 = uVar5;
  local_66 = uVar3;
  local_65 = uVar4;
  local_64 = uVar2;
  uVar7 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar6 != 0) {
    lVar12 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar9 != (uint *)0x0)) {
        uVar8 = 0;
        uVar7 = *puVar9;
        if ((uVar7 != 0) && (puVar9 != (uint *)(ulong)uVar7)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
          uVar8 = 0;
          if (*puVar10 != 0) {
            uVar7 = puVar10[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar12 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar7);
                }
                if (*puVar10 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar8 < 0xbd))
                goto LAB_01513b60;
              }
            }
            uVar8 = 0;
          }
        }
        goto LAB_01513b60;
      }
    }
  }
  uVar8 = 0xbc;
LAB_01513b60:
  if (uVar8 == 0xa9) {
    return 1;
  }
  return 0;
}

