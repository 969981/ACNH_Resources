
/* WARNING: Removing unreachable block (ram,0x03681d2c) */
/* WARNING: Removing unreachable block (ram,0x03682000) */
/* WARNING: Removing unreachable block (ram,0x03682028) */

void FUN_03681cd0(int *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  int local_bc;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  long *local_68;
  
  puVar9 = PTR_DAT_04bb2200;
  local_68 = (long *)0x0;
  if (*(long *)PTR_DAT_04bb2200 != 0) {
    lVar16 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50);
    if (lVar16 != 0) {
      local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
      plVar22 = *(long **)(lVar16 + 0x118);
      if ((plVar22 != (long *)0x0) && ((char)plVar22[7] != '\0')) {
        uVar14 = (**(code **)(*plVar22 + 0xc0))(plVar22);
        if ((uVar14 & 1) != 0) {
          local_68 = plVar22;
        }
      }
    }
  }
  local_78 = 0;
  local_80 = PTR_DAT_04bbfe68 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar12 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_74 = *(undefined4 *)(puVar23 + 7);
  local_70 = FUN_017baf44();
  puVar10 = PTR_DAT_04bb27c8;
  local_70 = local_70 & 1;
  iVar12 = *param_1;
  uVar18 = 0;
  if (iVar12 != 0) {
    uVar18 = *(int *)(param_2 + 0x10) / iVar12;
  }
  uVar6 = 0;
  if (iVar12 != 0) {
    uVar6 = *(int *)(param_2 + 0x20) / iVar12;
  }
  if ((int)uVar18 <= (int)uVar6) {
    uVar7 = 0;
    if (iVar12 != 0) {
      uVar7 = *(int *)(param_2 + 0x14) / iVar12;
    }
    uVar8 = 0;
    if (iVar12 != 0) {
      uVar8 = *(int *)(param_2 + 0x24) / iVar12;
    }
    if ((int)uVar7 <= (int)uVar8) {
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        uVar19 = uVar7;
        local_bc = uVar7 << 1;
        do {
          lVar16 = (long)(int)(uVar18 + param_1[6] * uVar19);
          if ((uint)param_1[7] <= uVar19 || (uint)param_1[6] <= uVar18) {
            lVar16 = 0;
          }
          lVar16 = *(long *)(param_1 + 8) + lVar16 * 0x23c;
          FUN_03680b14(lVar16);
          iVar12 = *param_1;
          if (0 < iVar12) {
            iVar21 = 0;
            iVar4 = iVar12 * uVar18;
            iVar5 = iVar12 * uVar19;
            do {
              if (0 < iVar12) {
                iVar24 = 0;
                iVar25 = iVar21 + iVar4;
                do {
                  local_90 = (undefined *)0x0;
                  if (local_68 != (long *)0x0) {
                    if ((*(long *)puVar9 == 0) ||
                       (lVar17 = *(long *)(*(long *)puVar9 + 0x50), lVar17 == 0)) {
LAB_03681f44:
                      if (0 < *(int *)(local_68[0x164] + (long)(int)local_68[0x166] * 0x10)) {
LAB_03681f5c:
                        lVar17 = local_68[0x168];
                        iVar12 = iVar25;
                        if (*(int *)(lVar17 + 0x20) <= iVar25) {
                          iVar12 = *(int *)(lVar17 + 0x20);
                        }
                        iVar13 = iVar5 + iVar24;
                        iVar2 = 0;
                        if (*(int *)(lVar17 + 0x10) <= iVar25) {
                          iVar2 = iVar12 - *(int *)(lVar17 + 0x10);
                        }
                        iVar12 = iVar13;
                        if (*(int *)(lVar17 + 0x24) <= iVar13) {
                          iVar12 = *(int *)(lVar17 + 0x24);
                        }
                        iVar3 = 0;
                        if (*(int *)(lVar17 + 0x14) <= iVar13) {
                          iVar3 = iVar12 - *(int *)(lVar17 + 0x14);
                        }
                        local_90 = (undefined *)CONCAT44(iVar3,iVar2);
                      }
                    }
                    else {
                      uVar14 = (ulong)local_a0 >> 0x20;
                      local_a0 = (undefined *)(uVar14 << 0x20);
                      if ((*(long *)(lVar17 + 0x118) == 0) ||
                         (*(char *)(*(long *)(lVar17 + 0x118) + 0xe0b) != '\0')) {
                        local_a0 = (undefined *)(uVar14 << 0x20);
                        if ((*(long *)(lVar17 + 0x118) == 0) ||
                           (*(char *)(*(long *)(lVar17 + 0x118) + 0xe0b) != '\0'))
                        goto LAB_03681f44;
                        goto LAB_03681f5c;
                      }
                    }
                  }
                  iVar13 = FUN_015af618(&local_68,&local_90,0);
                  iVar24 = iVar24 + 1;
                  iVar12 = 3;
                  if (iVar13 != 2) {
                    iVar12 = iVar13;
                  }
                  *(short *)(lVar16 + 0x2a) = (short)iVar12 + *(short *)(lVar16 + 0x2a);
                  iVar12 = *param_1;
                } while (iVar24 < iVar12);
              }
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar12);
            if (0 < iVar12) {
              iVar21 = 0;
              iVar4 = uVar18 * 2 * iVar12;
              iVar5 = local_bc * iVar12;
              do {
                if (iVar12 < 1) {
                  iVar24 = iVar12 << 1;
                }
                else {
                  iVar25 = 0;
                  do {
                    iStack_84 = iVar5 + iVar25;
                    local_98 = 0;
                    local_a0 = puVar1;
                    local_90 = puVar1;
                    local_88 = iVar21 + iVar4;
                    uVar15 = FUN_01a5190c(&local_80,0,&local_90,&local_a0);
                    FUN_03680bd0(lVar16,uVar15,
                                 local_88 == (int)local_98 && iStack_84 == local_98._4_4_,1);
                    uVar15 = FUN_01a5190c(&local_80,1,&local_90,&local_a0);
                    FUN_03681570(lVar16,uVar15,
                                 local_88 == (int)local_98 && iStack_84 == local_98._4_4_,1);
                    lVar17 = *(long *)puVar10;
                    local_b0 = 0;
                    local_a8 = 0;
                    if ((lVar17 == 0) || (*(long *)(lVar17 + 0xa8) == 0)) {
                      local_b0._0_4_ = 0;
                      local_b0._4_4_ = 0;
                      local_a8._0_4_ = 0;
                      local_a8._4_4_ = 0;
                    }
                    else {
                      FUN_00948e68(lVar17 + 0x28,&local_90,(long)&local_a8 + 4,(long)&local_b0 + 4,
                                   &local_a8,&local_b0);
                    }
                    uVar20 = (uint)(local_a8._4_4_ == 8);
                    if ((int)local_a8 == 8) {
                      uVar20 = uVar20 + 1;
                    }
                    if (local_b0._4_4_ == 8) {
                      uVar20 = uVar20 + 1;
                    }
                    if (uVar20 != -(uint)((int)local_b0 == 8)) {
                      *(short *)(lVar16 + 0x2c) = *(short *)(lVar16 + 0x2c) + 1;
                    }
                    iVar12 = *param_1;
                    iVar25 = iVar25 + 1;
                    iVar24 = iVar12 * 2;
                  } while (iVar25 < iVar24);
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < iVar24);
            }
          }
          bVar11 = uVar19 != uVar8;
          uVar19 = uVar19 + 1;
          local_bc = local_bc + 2;
        } while (bVar11);
        bVar11 = uVar18 != uVar6;
        uVar18 = uVar18 + 1;
      } while (bVar11);
    }
  }
  return;
}

