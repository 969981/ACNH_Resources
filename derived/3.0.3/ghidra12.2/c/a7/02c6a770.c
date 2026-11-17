
undefined8 FUN_02c6a770(undefined8 param_1,short *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  if ((param_4 & 1) != 0) {
    return 0;
  }
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *(undefined4 *)param_2;
  local_54 = *(undefined4 *)(param_2 + 2);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        uVar5 = *puVar9;
        if (uVar5 != 0 && puVar9 != (uint *)(ulong)uVar5) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if (((*puVar10 != 0) && (uVar5 = puVar10[1], uVar5 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05327180) &&
                 (uVar2 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2), local_48 = (uint)uVar2,
                 uVar2 < 3)) goto LAB_02c6a8e4;
            }
          }
        }
        local_48 = 0;
        goto LAB_02c6a8e4;
      }
    }
  }
  local_48 = 2;
LAB_02c6a8e4:
  local_44 = 1;
  if (local_48 == 1) {
    uVar7 = 1;
  }
  else {
    local_58 = *(undefined4 *)param_2;
    local_54 = *(undefined4 *)(param_2 + 2);
    lVar11 = *(long *)puVar3;
    local_60 = puVar4 + 0x10;
    local_50 = 0;
    uVar5 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_2);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (((puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar9 != (uint *)0x0 && (uVar5 = *puVar9, uVar5 != 0)) &&
            (puVar9 != (uint *)(ulong)uVar5)))) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if (((*puVar10 != 0) && (uVar5 = puVar10[1], uVar5 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05327190) &&
                 (*(short *)(DAT_05327198 + (long)(int)uVar1 * 2) == 0x117)) {
                uVar6 = FUN_02582fe0(param_3);
                uVar8 = FUN_01b168d0(0x117,uVar6);
                if ((uVar8 & 1) == 0) {
                  return 2;
                }
              }
            }
          }
        }
      }
    }
    if (*param_2 != -2) {
      local_54 = *(undefined4 *)(param_2 + 2);
      local_60 = puVar4 + 0x10;
      lVar11 = *(long *)puVar3;
      local_50 = 0;
      local_58 = CONCAT22(param_2[1],*param_2);
      uVar5 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8), lVar11 != 0)) {
            local_50 = lVar11;
          }
        }
      }
      uVar8 = FUN_01b164e0(&local_60);
      if (((uVar8 & 1) != 0) && (uVar8 = FUN_02c804a0(param_1,param_2), (uVar8 & 1) == 0)) {
        return 3;
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}

