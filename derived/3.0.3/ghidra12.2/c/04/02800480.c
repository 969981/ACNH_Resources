
int FUN_02800480(long param_1,int param_2,int param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  short *psVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  ulong uVar19;
  short sVar20;
  short *psVar21;
  short *psVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  int local_a4;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  local_a4 = 0;
  uVar19 = 0;
  iVar18 = 0;
  uVar9 = 0;
  if (*(byte *)(param_1 + 0x178) < 3) {
    uVar9 = (uint)*(byte *)(param_1 + 0x178);
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar9);
  ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  psVar21 = (short *)(param_1 + 0xb8);
  do {
    puVar7 = PTR_DAT_04bb43c0;
    uVar9 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar9) {
      uVar9 = 0x14;
    }
    if (uVar19 < uVar9) {
      psVar22 = psVar21;
      if (*psVar21 == -2) {
        sVar20 = -2;
      }
      else {
LAB_028005b4:
        lVar23 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(psVar22);
        if (*(long *)puVar7 == 0) goto LAB_02800620;
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        psVar14 = (short *)PTR_DAT_04bb37e0;
        if (uVar9 < *(uint *)(lVar23 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
            psVar14 = psVar22;
          }
        }
LAB_02800628:
        sVar20 = *psVar14;
        psVar22 = psVar14;
      }
    }
    else {
      uVar15 = (uint)(uVar19 + -uVar9);
      if ((int)uVar15 < 0) {
LAB_02800620:
        psVar14 = (short *)PTR_DAT_04bb37e0;
        goto LAB_02800628;
      }
      uVar24 = *(uint *)(param_1 + 0xa0);
      if (0x13 < uVar24) {
        uVar24 = 0x14;
      }
      psVar14 = (short *)PTR_DAT_04bb37e0;
      if (uVar24 <= uVar15) goto LAB_02800628;
      psVar22 = (short *)(param_1 + (uVar19 + -uVar9 & 0xffffffff) * 8);
      if (*psVar22 != -2) goto LAB_028005b4;
      sVar20 = -2;
    }
    puVar7 = PTR_DAT_04bb43c0;
    uVar5 = (undefined1)psVar22[1];
    uVar6 = *(undefined1 *)((long)psVar22 + 3);
    uVar4 = *(undefined4 *)(psVar22 + 2);
    local_88 = CONCAT44(uVar4,CONCAT13(uVar6,CONCAT12(uVar5,sVar20)));
    if (sVar20 == -2) {
LAB_02800504:
      iVar18 = iVar18 + 1;
    }
    else {
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_88);
      lVar25 = *(long *)puVar7;
      if (lVar25 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_78._0_3_ = CONCAT12(uVar5,sVar20);
          local_78._0_4_ = CONCAT13(uVar6,(undefined3)local_78);
          local_78 = (short *)CONCAT44(uVar4,(undefined4)local_78);
          local_70 = (undefined1 *)0x0;
          local_80 = ppuVar1;
          uVar9 = FUN_0277d6c4(&local_78);
          if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_028007d4:
            uVar13 = 0xbc;
          }
          else {
            lVar23 = *(long *)(lVar25 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            uVar13 = 0xbc;
            if (uVar9 < *(uint *)(lVar23 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) == 0)
              goto LAB_028007d4;
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_88);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              uVar13 = 0xbc;
              if (uVar9 < *(uint *)(lVar23 + 0x1d8)) {
                puVar16 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8);
                if (puVar16 == (uint *)0x0) goto LAB_028007d4;
                uVar9 = *puVar16;
                uVar13 = 0;
                if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
                  puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
                  uVar13 = 0;
                  if (*puVar17 != 0) {
                    uVar9 = puVar17[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                      lVar23 = 0xc;
                      if (*(char *)((long)puVar17 + 10) != '\0') {
                        lVar23 = 0x1c;
                      }
                      lVar23 = (long)puVar17 + lVar23 + (ulong)(ushort)puVar17[2] * 8;
                      if (lVar23 != 0) {
                        uVar15 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar15 = (uint)((ulong)((long)puVar16 - lVar23) / (ulong)uVar9);
                        }
                        if (*puVar17 <= uVar15) {
                          uVar15 = 0xffffffff;
                        }
                        if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar13 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2),
                           uVar13 < 0xbd)) goto LAB_028007d8;
                      }
                    }
                    uVar13 = 0;
                  }
                }
              }
            }
          }
LAB_028007d8:
          puVar7 = PTR_DAT_04bb43c0;
          local_78._0_3_ = CONCAT12(uVar5,sVar20);
          local_78._0_4_ = CONCAT13(uVar6,(undefined3)local_78);
          if (uVar13 == 0x86) {
            iVar18 = iVar18 + 1;
          }
          local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_78 = (short *)CONCAT44(uVar4,(undefined4)local_78);
          local_70 = (undefined1 *)0x0;
          lVar23 = *(long *)PTR_DAT_04bb43c0;
          uVar9 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar7 != 0) {
            lVar23 = *(long *)(lVar23 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_88);
              puVar7 = PTR_DAT_04bb43c0;
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
                 (((puVar16 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar16 != (uint *)0x0 && (uVar9 = *puVar16, uVar9 != 0)) &&
                  (puVar16 != (uint *)(ulong)uVar9)))) {
                puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
                if (((*puVar17 != 0) && (uVar9 = puVar17[1], uVar9 != 0)) &&
                   ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar17 + lVar23 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar23 != 0) {
                    uVar15 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar15 = (uint)((ulong)((long)puVar16 - lVar23) / (ulong)uVar9);
                    }
                    if (*puVar17 <= uVar15) {
                      uVar15 = 0xffffffff;
                    }
                    if (((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                        (uVar13 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2),
                        uVar13 < 0xbd)) && (uVar13 == 0x91)) {
                      local_78._0_3_ = CONCAT12(uVar5,sVar20);
                      local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                      local_78._0_4_ = CONCAT13(uVar6,(undefined3)local_78);
                      local_78 = (short *)CONCAT44(uVar4,(undefined4)local_78);
                      local_70 = (undefined1 *)0x0;
                      lVar23 = *(long *)PTR_DAT_04bb43c0;
                      uVar9 = FUN_0277d6c4(&local_78);
                      if (*(long *)puVar7 != 0) {
                        lVar23 = *(long *)(lVar23 + 0x57e58);
                        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                        if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                          lVar23 = *(long *)PTR_DAT_04bc0428;
                          uVar9 = FUN_0277d6c4(&local_88);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                          if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
                             (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8),
                             lVar23 != 0)) {
                            local_70 = (undefined1 *)lVar23;
                          }
                        }
                      }
                      iVar8 = FUN_01af02d0(&local_80);
                      local_a4 = iVar8 + local_a4;
                      goto LAB_02800504;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar19 = uVar19 + 1;
    psVar21 = psVar21 + 4;
    uVar9 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar9 = (uint)*(byte *)(param_1 + 0x178);
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar9);
    uVar2 = 0x1e;
    if (uVar9 != 1) {
      uVar2 = 0x14;
    }
    uVar3 = 0x28;
    if (uVar9 != 2) {
      uVar3 = uVar2;
    }
    if (uVar3 <= uVar19) {
      local_88 = 0x8a4;
      FUN_0277d4ac(&local_88);
      puVar7 = PTR_DAT_04bb43c0;
      local_70 = (undefined1 *)0x0;
      local_78 = (short *)local_88;
      local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar7 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_88);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
             (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8), lVar23 != 0)) {
            local_70 = (undefined1 *)lVar23;
          }
        }
      }
      iVar10 = FUN_01aed730(&local_80);
      uVar9 = *(uint *)(param_1 + 0x170);
      iVar8 = 0;
      if ((*(byte *)(param_1 + 0x177) != 0 ||
           (((ulong)uVar9 != 0 || *(ushort *)(param_1 + 0x174) != 0) ||
           *(byte *)(param_1 + 0x176) != 0)) &&
         ((uint)*(byte *)(param_1 + 0x177) ==
          ((uVar9 + (uVar9 >> 0x10) + (uVar9 >> 0x18) + (uVar9 >> 8)) - 0x2d & 0xff))) {
        lVar23 = (ulong)uVar9 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
        iVar8 = ((int)lVar23 - (uint)*(ushort *)(param_1 + 0x174)) + (int)((ulong)lVar23 >> 0x20) +
                -0x7f1cd4ef;
      }
      local_70 = &LAB_028012e0;
      uStack_68 = 0;
      local_80 = &PTR_LAB_04a915d0;
      uVar9 = *(uint *)(param_1 + 0x158);
      if (0x13 < uVar9) {
        uVar9 = 0x14;
      }
      local_78 = (short *)(param_1 + 0xb8);
      iVar11 = FUN_0277c8f0(uVar9,&local_80);
      local_80 = &PTR_LAB_04a915f8;
      uVar9 = *(uint *)(param_1 + 0xa0);
      local_70 = &LAB_028012f0;
      uStack_68 = 0;
      if (0x13 < uVar9) {
        uVar9 = 0x14;
      }
      local_78 = (short *)param_1;
      iVar12 = FUN_0277c8f0(uVar9,&local_80);
      for (iVar8 = (iVar8 - param_2) + iVar11 + iVar12 + -99999; 0 < iVar8; iVar8 = iVar8 - iVar10)
      {
        iVar18 = iVar18 + -1;
      }
      local_90 = 0x172c;
      local_a4 = local_a4 - param_3;
      FUN_0277d4ac(&local_90);
      puVar7 = PTR_DAT_04bb43c0;
      local_70 = (undefined1 *)0x0;
      local_78 = (short *)local_90;
      local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar7 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_90);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar23 + 0x1d8)) &&
             (lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8), lVar23 != 0)) {
            local_70 = (undefined1 *)lVar23;
          }
        }
      }
      iVar8 = FUN_01af2610(&local_80);
      for (; 0 < local_a4; local_a4 = local_a4 - iVar8) {
        iVar18 = iVar18 + -1;
      }
      return iVar18;
    }
  } while( true );
}

