
void FUN_027f9960(long *param_1,long *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  short sVar5;
  long *plVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined **local_a8;
  long *local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  int local_84;
  undefined **local_80;
  long *plStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_a8 = (undefined **)0x94d;
  FUN_0277d4ac(&local_a8);
  iVar8 = FUN_027f9e60(param_1,&local_a8);
  plVar18 = param_1 + 0x17;
  local_80 = &PTR_LAB_04a91620;
  uVar9 = *(uint *)(param_1 + 0x2b);
  local_a8 = &PTR_LAB_04a91620;
  if (0x13 < uVar9) {
    uVar9 = 0x14;
  }
  local_70 = PTR_LAB_04bc3870;
  uStack_68 = 0;
  local_98 = PTR_LAB_04bc3870;
  uStack_90 = 0;
  local_a0 = plVar18;
  plStack_78 = plVar18;
  FUN_0277bf00(uVar9,&local_a8);
  uVar9 = *(uint *)(param_1 + 0x2b);
  if (0x13 < uVar9) {
    uVar9 = 0x14;
  }
  FUN_0277b6e0(param_2,uVar9,param_3,&local_80);
  local_70 = PTR_LAB_04bc3860;
  uStack_68 = 0;
  uVar9 = *(uint *)(param_1 + 0x14);
  local_98 = PTR_LAB_04bc3860;
  uStack_90 = 0;
  local_a8 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
  if (0x13 < uVar9) {
    uVar9 = 0x14;
  }
  local_a0 = param_1;
  local_80 = local_a8;
  plStack_78 = param_1;
  FUN_0277bf00(uVar9,&local_a8);
  uVar9 = *(uint *)(param_1 + 0x14);
  if (0x13 < uVar9) {
    uVar9 = 0x14;
  }
  FUN_0277b6e0(param_2,uVar9,param_3,&local_80);
  puVar7 = PTR_DAT_04bb43c0;
  if (*param_2 != 0) {
    uVar14 = 0;
    uVar9 = 0;
    if (*(byte *)(param_1 + 0x2f) < 3) {
      uVar9 = (uint)*(byte *)(param_1 + 0x2f);
    }
    local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar9);
    ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      uVar9 = *(uint *)(param_1 + 0x2b);
      if (0x13 < uVar9) {
        uVar9 = 0x14;
      }
      if (uVar14 < uVar9) {
        sVar5 = (short)*plVar18;
        plVar6 = plVar18;
joined_r0x027f9b48:
        plVar16 = plVar6;
        if (sVar5 != -2) {
          lVar15 = *(long *)puVar7;
          uVar9 = FUN_0277d6c4(plVar6);
          if (*(long *)puVar7 == 0) goto LAB_027f9bb0;
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          plVar16 = (long *)PTR_DAT_04bb37e0;
          if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
              plVar16 = plVar6;
            }
          }
        }
      }
      else {
        uVar11 = (uint)(uVar14 + -uVar9);
        if ((int)uVar11 < 0) {
LAB_027f9bb0:
          plVar16 = (long *)PTR_DAT_04bb37e0;
        }
        else {
          uVar19 = *(uint *)(param_1 + 0x14);
          if (0x13 < uVar19) {
            uVar19 = 0x14;
          }
          plVar16 = (long *)PTR_DAT_04bb37e0;
          if (uVar11 < uVar19) {
            sVar5 = (short)param_1[uVar14 + -uVar9 & 0xffffffff];
            plVar6 = param_1 + (uVar14 + -uVar9 & 0xffffffff);
            goto joined_r0x027f9b48;
          }
        }
      }
      lVar15 = *(long *)puVar7;
      uVar9 = FUN_0277d6c4(plVar16);
      lVar17 = *(long *)puVar7;
      if (lVar17 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_a0 = (long *)*plVar16;
          local_98 = (undefined *)0x0;
          local_a8 = ppuVar1;
          uVar9 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar7 != 0) {
            lVar15 = *(long *)(lVar17 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(plVar16);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
                 (((puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar12 != (uint *)0x0 && (uVar9 = *puVar12, uVar9 != 0)) &&
                  (puVar12 != (uint *)(ulong)uVar9)))) {
                puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
                if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) &&
                   ((ulong)(ushort)puVar13[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar13 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                  if (lVar15 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar9);
                    }
                    if (*puVar13 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2) == 0x35)
                       ) {
                      FUN_027fa2dc(param_1,uVar14,PTR_DAT_04bb37e0,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      plVar18 = plVar18 + 1;
      uVar9 = 0;
      if (*(byte *)(param_1 + 0x2f) < 3) {
        uVar9 = (uint)*(byte *)(param_1 + 0x2f);
      }
      local_a8 = (undefined **)CONCAT44(local_a8._4_4_,uVar9);
      uVar3 = 0x1e;
      if (uVar9 != 1) {
        uVar3 = 0x14;
      }
      uVar4 = 0x28;
      if (uVar9 != 2) {
        uVar4 = uVar3;
      }
    } while (uVar14 < uVar4);
  }
  local_a8 = (undefined **)0x94d;
  FUN_0277d4ac(&local_a8);
  iVar10 = FUN_027f9e60(param_1,&local_a8);
  if (iVar8 == iVar10) {
    return;
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  plStack_78 = (long *)0x407848d;
  local_80 = ppuVar1;
  FUN_026012f4(&local_a8,&local_80,param_3);
  ppuVar2 = (undefined **)(PTR_DAT_04bc34c8 + 0x10);
  local_80 = (undefined **)0x94d;
  local_a8 = ppuVar2;
  FUN_0277d4ac(&local_80);
  iVar10 = FUN_027f9e60(param_1,&local_80);
  FUN_02602950(&local_a8,0x3e);
  plStack_78 = (long *)0x4092d05;
  local_80 = ppuVar1;
  if (local_a0 != (long *)0x0) {
    FUN_026054d0(local_a0,&local_80,(long)(iVar8 - iVar10));
  }
  local_a8 = ppuVar2;
  iVar8 = FUN_025ee790(&local_a8);
  if (iVar8 != -1) {
    iVar8 = (*(code *)local_a8[4])(&local_a8);
    local_80 = (undefined **)CONCAT44(local_80._4_4_,iVar8);
    if (iVar8 < 0xd) goto LAB_027f9e34;
  }
  if (local_84 == 0) {
    local_84 = 1;
  }
LAB_027f9e34:
  FUN_02601530(&local_a8);
  return;
}

