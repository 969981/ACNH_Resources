
bool FUN_0260b74c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  if (*(long *)puVar3 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      iVar5 = FUN_0277d6c4(param_1);
      iVar6 = FUN_0277d6c4(param_2);
      if (iVar5 == iVar6) {
        local_50 = *param_1;
        uStack_4c = param_1[1];
        lVar12 = *(long *)puVar3;
        local_48 = 0;
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_58 = puVar1;
        uVar4 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar3 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_1);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
              if (lVar12 != 0) {
                local_48 = lVar12;
              }
            }
          }
        }
        local_68 = *param_2;
        uStack_64 = param_2[1];
        lVar12 = *(long *)puVar3;
        local_60 = 0;
        local_70 = puVar1;
        uVar4 = FUN_0277d6c4(&local_68);
        if (*(long *)puVar3 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(param_2);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (uVar4 < *(uint *)(lVar12 + 0x1d8)) {
              lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8);
              if (lVar12 != 0) {
                local_60 = lVar12;
              }
            }
          }
        }
        iVar5 = FUN_01ad7260(&local_58);
        if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_58), puVar9 == (ushort *)0x0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar9 & 7;
          uVar7 = FUN_01ad7260(&local_58);
          if (uVar7 <= uVar4) {
            uVar4 = 0;
          }
        }
        iVar5 = FUN_01ad7260(&local_70);
        if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_70), puVar9 == (ushort *)0x0)) {
          if (uVar4 != 0) {
            return false;
          }
        }
        else {
          uVar7 = *puVar9 & 7;
          uVar8 = FUN_01ad7260(&local_70);
          if (uVar8 <= uVar7) {
            uVar7 = 0;
          }
          if (uVar4 != uVar7) {
            return false;
          }
        }
        iVar5 = FUN_01afcfa0(&local_58);
        if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_58), puVar9 == (ushort *)0x0)) {
          uVar10 = 0;
        }
        else {
          uVar11 = *puVar9 >> 3 & 3;
          uVar10 = 0;
          if (uVar11 != 3) {
            uVar10 = uVar11;
          }
        }
        iVar5 = FUN_01afcfa0(&local_70);
        if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_70), puVar9 == (ushort *)0x0)) {
          uVar11 = 0;
        }
        else {
          uVar2 = *puVar9 >> 3 & 3;
          uVar11 = 0;
          if (uVar2 != 3) {
            uVar11 = uVar2;
          }
        }
        if (uVar10 == uVar11) {
          iVar5 = FUN_01ae3a80(&local_58);
          iVar6 = FUN_01ae3a80(&local_70);
          return iVar5 == iVar6;
        }
      }
    }
  }
  return false;
}

