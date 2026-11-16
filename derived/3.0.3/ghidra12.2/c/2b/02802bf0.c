
uint FUN_02802bf0(short *param_1,short *param_2,int param_3)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  long lVar12;
  long lVar13;
  short *psVar14;
  uint uVar15;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined *local_98;
  short local_90;
  short local_8e;
  undefined4 local_8c;
  long local_88;
  undefined *local_80;
  short *psStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_90 = *param_2;
  if (local_90 != -2) {
    local_8e = param_2[1];
    local_88 = 0;
    local_8c = *(undefined4 *)(param_2 + 2);
    local_98 = PTR_DAT_04bc0510 + 0x10;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar4 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
          lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar12 != 0) {
            local_88 = lVar12;
          }
        }
      }
    }
    uVar9 = FUN_01af0020(&local_98);
    puVar3 = PTR_DAT_04bb37e0;
    puVar1 = (uint *)(param_1 + 36000);
    uVar6 = *puVar1;
    if (8999 < uVar6) {
      uVar6 = 9000;
    }
    if ((uVar9 & 1) == 0) {
      if (uVar6 != 0) {
        uVar9 = 0;
        psVar14 = param_1;
        do {
          psVar11 = psVar14;
          if (*psVar14 != -2) {
            lVar12 = *(long *)puVar4;
            uVar6 = FUN_0277d6c4(psVar14);
            psVar11 = (short *)puVar3;
            if (*(long *)puVar4 != 0) {
              lVar12 = *(long *)(lVar12 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
              if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                  psVar11 = psVar14;
                }
              }
            }
          }
          iVar8 = FUN_0277d6c4(psVar11);
          iVar7 = FUN_0277d6c4(param_2);
          if (iVar7 == iVar8) {
            uVar10 = FUN_0277e9e0(PTR_DAT_04bb37e0);
            if ((uVar10 & 1) == 0) goto LAB_028030a0;
            goto LAB_02803038;
          }
          uVar6 = *puVar1;
          uVar9 = uVar9 + 1;
          psVar14 = psVar14 + 4;
          if (8999 < uVar6) {
            uVar6 = 9000;
          }
        } while (uVar9 < uVar6);
      }
    }
    else if (uVar6 != 0) {
      uVar9 = 0;
      puVar2 = PTR_DAT_04bc35f8 + 0x10;
      psVar14 = param_1;
      do {
        lVar12 = *(long *)puVar4;
        if (*psVar14 == -2) {
          psVar11 = psVar14;
          lVar13 = lVar12;
        }
        else {
          uVar6 = FUN_0277d6c4(psVar14);
          lVar13 = *(long *)puVar4;
          psVar11 = (short *)puVar3;
          if (lVar13 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                psVar11 = psVar14;
              }
            }
          }
        }
        local_a0 = *(undefined4 *)psVar11;
        local_9c = *(undefined4 *)(psVar11 + 2);
        uVar6 = FUN_0277d6c4(&local_a0);
        if (*(long *)puVar4 != 0) {
          lVar12 = *(long *)(lVar13 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            uVar10 = FUN_01af28ac(&local_98,&local_a0);
            if ((uVar10 & 1) != 0) {
              local_a8 = 0;
              lVar12 = *(long *)puVar4;
              local_b0 = local_a0;
              uStack_ac = local_9c;
              local_b8 = puVar5 + 0x10;
              uVar6 = FUN_0277d6c4(&local_b0);
              if (*(long *)puVar4 != 0) {
                lVar12 = *(long *)(lVar12 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  lVar12 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(&local_a0);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
                    lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
                    if (lVar12 != 0) {
                      local_a8 = lVar12;
                    }
                  }
                }
              }
              iVar7 = FUN_01af02d0(&local_b8);
              iVar8 = param_3 - iVar7;
              if (iVar8 == 0 || param_3 < iVar7) {
                if (iVar8 == 0) {
                  uVar10 = FUN_0277e9e0(PTR_DAT_04bb37e0);
                  if ((uVar10 & 1) == 0) {
LAB_028030a0:
                    uVar6 = 1;
                  }
                  else {
LAB_02803038:
                    local_80 = PTR_DAT_04bc35f8 + 0x10;
                    uStack_68 = 0;
                    uVar6 = 1;
                    uVar15 = *puVar1;
                    if (8999 < uVar15) {
                      uVar15 = 9000;
                    }
                    psStack_78 = param_1;
                    local_70 = PTR_LAB_04bc35e8;
                    FUN_0277b494(uVar9 & 0xffffffff,PTR_DAT_04bb37e0,uVar15,&local_80,1,0);
                  }
                  goto LAB_02802c24;
                }
                local_c0 = (undefined *)0xfffe;
                FUN_0277d4ac(&local_c0);
                FUN_01af3d60(&local_80,&local_a0,param_3);
                local_c0 = local_80;
                uVar10 = FUN_0277e9e0(&local_c0);
                if ((uVar10 & 1) != 0) {
                  local_80 = PTR_DAT_04bc35f8 + 0x10;
                  local_70 = PTR_LAB_04bc35e8;
                  uStack_68 = 0;
                  uVar6 = *puVar1;
                  if (8999 < uVar6) {
                    uVar6 = 9000;
                  }
                  psStack_78 = param_1;
                  uVar6 = FUN_0277b494(uVar9 & 0xffffffff,&local_c0,uVar6,&local_80,1,0);
                  goto LAB_02802c24;
                }
                break;
              }
              uVar10 = FUN_0277e9e0(puVar3);
              param_3 = iVar8;
              if ((uVar10 & 1) != 0) {
                local_70 = PTR_LAB_04bc35e8;
                uStack_68 = 0;
                uVar6 = *puVar1;
                if (8999 < uVar6) {
                  uVar6 = 9000;
                }
                local_80 = puVar2;
                psStack_78 = param_1;
                FUN_0277b494(uVar9 & 0xffffffff,puVar3,uVar6,&local_80,1,0);
              }
            }
          }
        }
        uVar6 = *puVar1;
        uVar9 = uVar9 + 1;
        psVar14 = psVar14 + 4;
        if (8999 < uVar6) {
          uVar6 = 9000;
        }
      } while (uVar9 < uVar6);
    }
  }
  uVar6 = 0;
LAB_02802c24:
  return uVar6 & 1;
}

