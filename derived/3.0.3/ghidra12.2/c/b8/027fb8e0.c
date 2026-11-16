
void FUN_027fb8e0(long param_1,short *param_2)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  short *psVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  short *psVar16;
  uint uVar17;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = *param_2;
  if (local_70 != -2) {
    local_6e = param_2[1];
    local_68 = 0;
    local_6c = *(undefined4 *)(param_2 + 2);
    local_78 = PTR_DAT_04bc0510 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar14 != 0) {
            local_68 = lVar14;
          }
        }
      }
    }
    uVar6 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar6 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar6);
    uVar9 = FUN_01af0020(&local_78);
    if ((uVar9 & 1) != 0) {
      uVar9 = 0x1e;
      if (uVar6 != 1) {
        uVar9 = 0x14;
      }
      uVar2 = 0x28;
      if (uVar6 != 2) {
        uVar2 = uVar9;
      }
      iVar7 = FUN_01af2610(&local_78);
      psVar16 = (short *)(param_1 + 0xb8);
      local_ac = 0;
      uVar9 = 0;
      psVar12 = psVar16;
      do {
        uVar6 = *(uint *)(param_1 + 0x158);
        if (0x13 < uVar6) {
          uVar6 = 0x14;
        }
        psVar11 = &DAT_05586008;
        if (uVar9 < uVar6) {
          sVar3 = *psVar12;
          psVar1 = psVar12;
joined_r0x027fbad4:
          psVar11 = psVar1;
          if (sVar3 != -2) {
            lVar14 = *(long *)puVar4;
            uVar6 = FUN_0277d6c4(psVar1);
            if (*(long *)puVar4 == 0) {
              psVar11 = &DAT_05586008;
            }
            else {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              psVar11 = &DAT_05586008;
              if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                  psVar11 = psVar1;
                }
              }
            }
          }
        }
        else {
          uVar13 = (uint)(uVar9 + -uVar6);
          if (-1 < (int)uVar13) {
            uVar17 = *(uint *)(param_1 + 0xa0);
            if (0x13 < uVar17) {
              uVar17 = 0x14;
            }
            if (uVar13 < uVar17) {
              psVar1 = (short *)(param_1 + (uVar9 + -uVar6 & 0xffffffff) * 8);
              sVar3 = *psVar1;
              goto joined_r0x027fbad4;
            }
          }
        }
        local_80 = *(undefined4 *)psVar11;
        local_7c = *(undefined4 *)(psVar11 + 2);
        lVar14 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar4 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
             (uVar10 = FUN_01af28ac(&local_78,&local_80), (uVar10 & 1) != 0)) {
            local_88 = 0;
            lVar14 = *(long *)puVar4;
            local_90 = local_80;
            uStack_8c = local_7c;
            local_98 = (undefined **)(puVar5 + 0x10);
            uVar6 = FUN_0277d6c4(&local_90);
            if (*(long *)puVar4 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_80);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                  lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
                  if (lVar14 != 0) {
                    local_88 = lVar14;
                  }
                }
              }
            }
            iVar8 = FUN_01af02d0(&local_98);
            local_ac = iVar8 + local_ac;
          }
        }
        uVar9 = uVar9 + 1;
        psVar12 = psVar12 + 4;
      } while (uVar2 != uVar9);
      uVar9 = 0;
      do {
        uVar6 = *(uint *)(param_1 + 0x158);
        if (0x13 < uVar6) {
          uVar6 = 0x14;
        }
        if (uVar9 < uVar6) {
          sVar3 = *psVar16;
          psVar11 = psVar16;
joined_r0x027fbd14:
          psVar12 = psVar11;
          if (sVar3 != -2) {
            lVar14 = *(long *)puVar4;
            uVar6 = FUN_0277d6c4(psVar11);
            if (*(long *)puVar4 == 0) goto LAB_027fbd60;
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            psVar12 = &DAT_05586008;
            if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                psVar12 = psVar11;
              }
            }
          }
        }
        else {
          uVar13 = (uint)(uVar9 + -uVar6);
          if ((int)uVar13 < 0) {
LAB_027fbd60:
            psVar12 = &DAT_05586008;
          }
          else {
            uVar17 = *(uint *)(param_1 + 0xa0);
            if (0x13 < uVar17) {
              uVar17 = 0x14;
            }
            psVar12 = &DAT_05586008;
            if (uVar13 < uVar17) {
              psVar11 = (short *)(param_1 + (uVar9 + -uVar6 & 0xffffffff) * 8);
              sVar3 = *psVar11;
              goto joined_r0x027fbd14;
            }
          }
        }
        local_80 = *(undefined4 *)psVar12;
        local_7c = *(undefined4 *)(psVar12 + 2);
        lVar14 = *(long *)puVar4;
        uVar6 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar4 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            uVar10 = FUN_01af28ac(&local_78,&local_80);
            if ((uVar10 & 1) != 0) {
              local_a0 = 0xfffe;
              FUN_0277d4ac(&local_a0);
              local_88 = 0;
              lVar15 = *(long *)puVar4;
              local_98 = &PTR_FUN_04a36b50;
              local_90 = *(undefined4 *)param_2;
              uStack_8c = *(undefined4 *)(param_2 + 2);
              uVar6 = FUN_0277d6c4(&local_90);
              lVar14 = DAT_0532a768;
              if (*(long *)puVar4 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  uVar6 = FUN_0277d6c4(param_2);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if (uVar6 < *(uint *)(lVar14 + 0x1d8)) {
                    lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8);
                    if (lVar14 != 0) {
                      local_88 = lVar14;
                    }
                  }
                }
              }
              if (local_ac - iVar7 == 0 || local_ac < iVar7) {
                if (local_ac < 1) {
                  FUN_027fa2dc(param_1,uVar9,&DAT_05586008,0);
                }
                else {
                  FUN_01af2bc0(&local_98,local_ac);
                  local_a8 = local_90;
                  uStack_a4 = uStack_8c;
                  FUN_027fa2dc(param_1,uVar9,&local_a8,0);
                  local_ac = 0;
                }
              }
              else {
                FUN_01af2bc0(&local_98);
                local_a8 = local_90;
                uStack_a4 = uStack_8c;
                FUN_027fa2dc(param_1,uVar9,&local_a8,0);
                local_ac = local_ac - iVar7;
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
        psVar16 = psVar16 + 4;
      } while (uVar2 != uVar9);
    }
  }
  return;
}

