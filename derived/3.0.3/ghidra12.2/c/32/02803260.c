
undefined8 FUN_02803260(short *param_1,short *param_2)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  long lVar15;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*param_2 == -2) {
    return 1;
  }
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_2);
  if (*(long *)puVar5 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar11 = FUN_0277e9e0(param_2);
      puVar6 = PTR_DAT_04bc0510;
      if ((uVar11 & 1) != 0) {
        puVar2 = (uint *)(param_1 + 36000);
        uVar7 = *puVar2;
        if (8999 < uVar7) {
          uVar7 = 9000;
        }
        if (uVar7 != 0) {
          if (uVar7 == 1) {
            uVar11 = 0;
            iVar8 = 0;
          }
          else {
            uVar11 = 0;
            iVar8 = 0;
            psVar13 = param_1 + 4;
            do {
              psVar1 = psVar13 + -4;
              uVar11 = uVar11 + 2;
              sVar3 = *psVar13;
              psVar13 = psVar13 + 8;
              if (*psVar1 == -2) {
                iVar8 = iVar8 + 1;
              }
              if (sVar3 == -2) {
                iVar8 = iVar8 + 1;
              }
            } while (((ulong)uVar7 & 0x3ffe) != uVar11);
          }
          if (((uVar7 & 1) != 0) && (param_1[uVar11 * 4] == -2)) {
            iVar8 = iVar8 + 1;
          }
          if (iVar8 != 0) {
            return 1;
          }
        }
        local_70 = *(undefined4 *)param_2;
        uStack_6c = *(undefined4 *)(param_2 + 2);
        lVar14 = *(long *)puVar5;
        local_68 = 0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(param_2);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
              lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
              if (lVar14 != 0) {
                local_68 = lVar14;
              }
            }
          }
        }
        uVar11 = FUN_01af0020(&local_78);
        if ((uVar11 & 1) != 0) {
          iVar8 = FUN_01af02d0(&local_78);
          puVar4 = PTR_DAT_04bb37e0;
          uVar7 = *puVar2;
          if (8999 < uVar7) {
            uVar7 = 9000;
          }
          if (uVar7 != 0) {
            uVar11 = 0;
            do {
              lVar14 = *(long *)puVar5;
              if (*param_1 == -2) {
                psVar13 = param_1;
                lVar15 = lVar14;
              }
              else {
                uVar7 = FUN_0277d6c4(param_1);
                lVar15 = *(long *)puVar5;
                psVar13 = (short *)puVar4;
                if (lVar15 != 0) {
                  lVar14 = *(long *)(lVar14 + 0x57e58);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
                    if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
                      psVar13 = param_1;
                    }
                  }
                }
              }
              local_80 = *(undefined4 *)psVar13;
              local_7c = *(undefined4 *)(psVar13 + 2);
              uVar7 = FUN_0277d6c4(&local_80);
              if (*(long *)puVar5 != 0) {
                lVar14 = *(long *)(lVar15 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if (((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
                   (uVar12 = FUN_01af28ac(&local_78,&local_80), (uVar12 & 1) != 0)) {
                  local_88 = 0;
                  lVar14 = *(long *)puVar5;
                  local_90 = local_80;
                  uStack_8c = local_7c;
                  local_98 = puVar6 + 0x10;
                  uVar7 = FUN_0277d6c4(&local_90);
                  if (*(long *)puVar5 != 0) {
                    lVar14 = *(long *)(lVar14 + 0x57e58);
                    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                      lVar14 = *(long *)PTR_DAT_04bc0428;
                      uVar7 = FUN_0277d6c4(&local_80);
                      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                      if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
                        lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
                        if (lVar14 != 0) {
                          local_88 = lVar14;
                        }
                      }
                    }
                  }
                  iVar9 = FUN_01af2610(&local_98);
                  iVar10 = FUN_01af02d0(&local_98);
                  iVar8 = (iVar10 - iVar9) + iVar8;
                  if (iVar8 < 1) {
                    return 1;
                  }
                }
              }
              uVar7 = *puVar2;
              uVar11 = uVar11 + 1;
              param_1 = param_1 + 4;
              if (8999 < uVar7) {
                uVar7 = 9000;
              }
            } while (uVar11 < uVar7);
          }
        }
      }
    }
  }
  return 0;
}

