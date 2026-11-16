
/* WARNING: Removing unreachable block (ram,0x02910e2c) */

void FUN_02910de0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a4 [31];
  undefined1 local_85;
  long local_80 [2];
  short *local_70;
  uint *puStack_68;
  
  local_b8._0_4_ = 9;
  (**(code **)(DAT_055cc2a8 + 0x18))(&DAT_055cc2a8);
  local_b8 = (undefined *)((ulong)local_b8._5_3_ << 0x28);
  uVar9 = FUN_03ea9450(param_1,&local_b8,DAT_055cc2b0);
  if (((uVar9 & 1) != 0) && (local_b8._4_1_ - 0xc0 < 2)) {
    local_70 = (short *)*param_1;
    puStack_68 = (uint *)((long)local_70 + ((ulong)local_b8 & 0xffffffff));
    if ((local_70 != (short *)0x0) && ((*puStack_68 & 0xfe) == 0xc0)) {
      uVar5 = *puStack_68 >> 8;
      if (*local_70 == 0x5942) {
        uVar5 = uVar5 & 0xff00 | *puStack_68 >> 0x18 | (uVar5 & 0xff) << 0x10;
      }
      if (uVar5 != 0) {
        uVar13 = 0;
        puVar1 = PTR_DAT_04bb2028 + 0x10;
        puVar2 = PTR_DAT_04bb2a08 + 0x10;
        do {
          FUN_03ea9348(local_80,&local_70,uVar13);
          if (local_80[0] != 0) {
            local_b8._0_4_ = 0x26;
            (**(code **)(DAT_055cc478 + 0x18))(&DAT_055cc478);
            local_b8 = (undefined *)((ulong)local_b8._5_3_ << 0x28);
            uVar9 = FUN_03ea9450(local_80,&local_b8,DAT_055cc480);
            if (((uVar9 & 1) != 0) && (local_b8._4_1_ != -1)) {
              uVar8 = (uint)local_b8;
              if (local_b8._4_1_ == -0x2f) {
                if (-1 < (int)(uint)local_b8) goto LAB_02910ff4;
              }
              else if (local_b8._4_1_ == -0x2d) {
LAB_02910ff4:
                iVar18 = 0;
                local_a8 = 0x20;
                local_85 = 0;
                local_a4[0] = 0;
                iVar17 = 0x18;
                local_b8 = puVar1;
                local_b0 = local_a4;
                do {
                  puVar3 = local_b0;
                  lVar11 = (long)((ulong)(uint)(iVar18 + iVar17) << 0x20) >> 0x21;
                  if ((&DAT_05747a28)[lVar11 * 0x10] == uVar8) {
                    plVar15 = &DAT_05747a30 + lVar11 * 8;
                    (**(code **)(*plVar15 + 0x18))(plVar15);
                    puVar14 = (undefined1 *)(&DAT_05747a38)[lVar11 * 8];
                    if (puVar3 != puVar14) {
                      (**(code **)(*plVar15 + 0x18))(plVar15);
                      lVar10 = 0;
                      do {
                        if (*(char *)((&DAT_05747a38)[lVar11 * 8] + lVar10) == '\0')
                        goto LAB_02911020;
                        lVar4 = (&DAT_05747a38)[lVar11 * 8] + lVar10;
                        if (*(char *)(lVar4 + 1) == '\0') {
                          lVar10 = lVar10 + 1;
                          goto LAB_02911020;
                        }
                        if (*(char *)(lVar4 + 2) == '\0') {
                          lVar10 = lVar10 + 2;
                          goto LAB_02911020;
                        }
                        lVar10 = lVar10 + 3;
                      } while (lVar10 != 0x80001);
                      lVar10 = 0;
LAB_02911020:
                      iVar6 = (int)lVar10;
                      if (local_a8 <= (int)lVar10) {
                        iVar6 = local_a8 + -1;
                      }
                      memcpy(puVar3,puVar14,(long)iVar6);
                      puVar3[iVar6] = 0;
                    }
                  }
                  plVar15 = DAT_055c8800;
                  iVar16 = iVar18 + iVar17 >> 1;
                  iVar6 = iVar16 + -1;
                  if ((uint)(&DAT_05747a28)[lVar11 * 0x10] < uVar8) {
                    iVar18 = iVar16 + 1;
                    iVar6 = iVar17;
                  }
                  iVar17 = iVar6;
                } while (iVar18 <= iVar6);
                if (DAT_055c87f8 < DAT_055c8810) {
                  if (DAT_055c8800 != (long *)0x0) {
                    DAT_055c8800 = (long *)*DAT_055c8800;
                  }
                  puVar3 = (undefined1 *)((long)plVar15 + 0x14);
                  *(undefined1 *)((long)plVar15 + 0x33) = 0;
                  *(undefined4 *)(plVar15 + 2) = 0x20;
                  *plVar15 = (long)puVar2;
                  plVar15[1] = (long)puVar3;
                  (**(code **)(local_b8 + 0x18))(&local_b8);
                  puVar14 = local_b0;
                  if (puVar3 != local_b0) {
                    (**(code **)(local_b8 + 0x18))(&local_b8);
                    lVar11 = 0;
                    do {
                      if (local_b0[lVar11] == '\0') goto LAB_029111b0;
                      if (local_b0[lVar11 + 1] == '\0') {
                        lVar11 = lVar11 + 1;
                        goto LAB_029111b0;
                      }
                      if (local_b0[lVar11 + 2] == '\0') {
                        lVar11 = lVar11 + 2;
                        goto LAB_029111b0;
                      }
                      lVar11 = lVar11 + 3;
                    } while (lVar11 != 0x80001);
                    lVar11 = 0;
LAB_029111b0:
                    iVar18 = (int)lVar11;
                    if ((int)plVar15[2] <= (int)lVar11) {
                      iVar18 = (int)plVar15[2] + -1;
                    }
                    memcpy(puVar3,puVar14,(long)iVar18);
                    puVar3[iVar18] = 0;
                  }
                  plVar12 = plVar15 + 7;
                  *plVar12 = 0;
                  *plVar15 = (long)(PTR_DAT_04bb2028 + 0x10);
                  plVar7 = DAT_055c87e8;
                  DAT_055c87e8 = plVar12;
                  plVar15[8] = (long)&DAT_055c87e8;
                  *plVar12 = (long)plVar7;
                  if (plVar7 != (long *)0x0) {
                    plVar7[1] = (long)plVar12;
                  }
                  DAT_055c87f8 = DAT_055c87f8 + 1;
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar5);
      }
    }
  }
  return;
}

