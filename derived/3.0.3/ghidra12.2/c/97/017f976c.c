
undefined8 FUN_017f976c(long param_1,short param_2,short *param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  short *psVar9;
  long lVar10;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb3170;
  if ((param_2 == 0x13e) || (param_2 == -1)) {
    if (*param_3 == *(short *)PTR_DAT_04bb3170) {
      if (param_4 == -1) goto LAB_017f9c2c;
      iVar1 = *(int *)(param_1 + 0x1f0);
      if (iVar1 != -1) {
        if (iVar1 != *(int *)(param_1 + 0x1f8)) goto LAB_017f9c2c;
        if (iVar1 == param_4) goto LAB_017f9938;
      }
    }
    else {
      FUN_007ef010(&local_68,param_1 + 0xd8);
      if ((short)local_68 != *(short *)puVar2) {
        if ((short)local_68 != *(short *)(param_1 + 0xf0)) goto LAB_017f9c2c;
        if (*param_3 == (short)local_68) {
LAB_017f9938:
          if ((*(byte *)(param_1 + 0xf2) == (param_5 & 1)) ||
             (*(byte *)(param_1 + 0xf2) != (*(byte *)(param_1 + 0x13c) >> 4 & 1)))
          goto LAB_017f9c2c;
        }
      }
    }
LAB_017f9918:
    uVar8 = 1;
  }
  else {
    psVar9 = (short *)(param_1 + 0xd0);
    if (*psVar9 != -2) {
      uVar7 = FUN_0277dedc(psVar9);
      puVar3 = PTR_DAT_04bb43c0;
      puVar2 = PTR_DAT_04bb3170;
      if ((uVar7 & 1) == 0) {
        sVar4 = 0x13e;
        if ((*(short *)(param_1 + 0xd8) == *(short *)PTR_DAT_04bb3170) &&
           (*(int *)(param_1 + 0x1f0) == -1)) {
          sVar4 = *(short *)(param_1 + 0xe8);
          if (sVar4 == -2) {
            local_38 = 0x134b;
            FUN_0277d4ac(&local_38);
            puVar3 = PTR_DAT_04bb43c0;
            local_58 = 0;
            local_68 = PTR_DAT_04bc0510 + 0x10;
            local_60 = (undefined4)local_38;
            local_5c = local_38._4_4_;
            lVar10 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(&local_60);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_38);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
                  lVar10 = *(long *)(lVar10 + 0x1e0);
                  goto LAB_017f9a04;
                }
              }
            }
          }
          else {
            local_58 = 0;
            local_60 = CONCAT22(*(undefined2 *)(param_1 + 0xea),sVar4);
            local_5c = *(undefined4 *)(param_1 + 0xec);
            local_68 = PTR_DAT_04bc0510 + 0x10;
            lVar10 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(&local_60);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4((short *)(param_1 + 0xe8));
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
                  lVar10 = *(long *)(lVar10 + 0x1e0);
LAB_017f9a04:
                  lVar10 = *(long *)(lVar10 + (long)(int)uVar6 * 8);
                  if (lVar10 != 0) {
                    local_58 = lVar10;
                  }
                }
              }
            }
          }
          sVar4 = FUN_01b01f10(&local_68);
        }
        puVar3 = PTR_DAT_04bb43c0;
        sVar5 = 0x13e;
        if ((*(short *)(param_1 + 0xd8) == *(short *)puVar2) && (*(int *)(param_1 + 0x1f0) == -1)) {
          if (*psVar9 == -2) {
            local_38 = 0x134b;
            FUN_0277d4ac(&local_38);
            puVar3 = PTR_DAT_04bb43c0;
            local_58 = 0;
            local_68 = PTR_DAT_04bc0510 + 0x10;
            local_60 = (undefined4)local_38;
            local_5c = local_38._4_4_;
            lVar10 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(&local_60);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_38);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
                  lVar10 = *(long *)(lVar10 + 0x1e0);
                  goto LAB_017f9ba4;
                }
              }
            }
          }
          else {
            local_58 = 0;
            local_60 = CONCAT22(*(undefined2 *)(param_1 + 0xd2),*psVar9);
            local_5c = *(undefined4 *)(param_1 + 0xd4);
            local_68 = PTR_DAT_04bc0510 + 0x10;
            lVar10 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(&local_60);
            if (*(long *)puVar3 != 0) {
              lVar10 = *(long *)(lVar10 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(psVar9);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
                  lVar10 = *(long *)(lVar10 + 0x1e0);
LAB_017f9ba4:
                  lVar10 = *(long *)(lVar10 + (long)(int)uVar6 * 8);
                  if (lVar10 != 0) {
                    local_58 = lVar10;
                  }
                }
              }
            }
          }
          sVar5 = FUN_01b01f10(&local_68);
        }
        if (sVar4 == sVar5) {
          sVar4 = 0x13e;
          if ((*(short *)(param_1 + 0xd8) == *(short *)puVar2) && (*(int *)(param_1 + 0x1f0) == -1))
          {
            psVar9 = (short *)(param_1 + 0xe8);
            if (*psVar9 == -2) {
              local_38 = 0x134b;
              FUN_0277d4ac(&local_38);
              psVar9 = (short *)&local_38;
            }
            FUN_01ad5d04(&local_68,psVar9);
            sVar4 = FUN_01b01f10(&local_68);
          }
          if (sVar4 != param_2) goto LAB_017f9918;
        }
      }
    }
LAB_017f9c2c:
    uVar8 = 0;
  }
  return uVar8;
}

