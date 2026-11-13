
undefined4 FUN_014d0a4c(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 1) {
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1 + 0x60);
    lVar9 = *(long *)puVar2;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_58 = (uint *)0x0;
        local_60 = *(undefined4 *)(param_1 + 0x60);
        uStack_5c = *(undefined4 *)(param_1 + 100);
        local_68 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_60);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_1 + 0x60);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
               (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8),
                 puVar7 != (uint *)0x0 && (uVar3 = *puVar7, local_58 = puVar7, uVar3 != 0)) &&
                (puVar7 != (uint *)(ulong)uVar3)))) {
              puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
              if (((*puVar8 != 0) && (uVar3 = puVar8[1], uVar3 != 0)) &&
                 ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar3);
                  }
                  if (*puVar8 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < DAT_05326ec0) &&
                      (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0x17)) &&
                     (iVar4 = FUN_01aee3b4(&local_68), iVar4 == 0x1b)) {
                    return 3;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 == 1) {
      iVar4 = FUN_014eb660(param_1);
      if (iVar4 == 7) {
        return 0xb;
      }
      iVar4 = *(int *)(param_1 + 0x18);
    }
  }
  if (iVar4 == 4) {
    lVar9 = FUN_014bac20(param_1 + 0x90);
    if (lVar9 != 0) {
      iVar4 = FUN_02b820b0();
      local_68 = (undefined **)CONCAT44(local_68._4_4_,iVar4);
      if (iVar4 == 1) {
        return 1;
      }
    }
    if (((*(int *)(param_1 + 0x18) == 4) && (lVar9 = FUN_014bac20(param_1 + 0x90), lVar9 != 0)) &&
       (iVar4 = FUN_02b820b0(), iVar4 == 0)) {
      return 2;
    }
  }
  else {
    if ((iVar4 == 3) && ((param_3 & 1) != 0)) {
      uVar6 = 8;
      if ((param_2 & 1) != 0) {
        uVar6 = 9;
      }
      return uVar6;
    }
    if ((iVar4 == 6) &&
       ((((FUN_0124c030(&local_68,param_1 + 0x60), local_58 != (uint *)0x0 &&
          (pbVar5 = (byte *)FUN_01246470(local_58,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98),
          pbVar5 != (byte *)0x0)) && ((*pbVar5 >> 4 & 1) != 0)) ||
        (iVar4 = FUN_0123db50(&local_60,local_58), (iVar4 - 2U & 0xfffffff9) == 0)))) {
      return 10;
    }
  }
  return 0;
}

