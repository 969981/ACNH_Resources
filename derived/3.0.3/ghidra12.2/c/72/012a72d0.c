
/* WARNING: Removing unreachable block (ram,0x012a7364) */
/* WARNING: Removing unreachable block (ram,0x012a7374) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012a72d0(long param_1)

{
  int iVar1;
  void *__s;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined8 *local_24a0;
  uint local_2498;
  uint uStack_2494;
  undefined8 local_2490;
  undefined4 local_2488;
  undefined **local_2480;
  char *apcStack_2478 [1152];
  undefined *local_78;
  undefined8 local_70;
  
  if (*(int *)(DAT_0519d040 + 0x200) != 1) {
    local_2480 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    apcStack_2478[0] = "SandBankDisable";
    uVar8 = FUN_0273f0a0(&local_2480);
    if ((uVar8 & 1) == 0) {
      local_24a0._0_4_ = 1;
      local_2480 = (undefined **)CONCAT44(local_2480._4_4_,1);
      lVar20 = *(long *)(DAT_0519d040 + 0x38);
      if (lVar20 != 0) {
        fVar23 = *(float *)(*(long *)PTR_DAT_04bb5c90 + 0x40);
        fVar24 = *(float *)(*(long *)PTR_DAT_04bb5c90 + 0x48);
        uVar14 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        uVar15 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
        memset(apcStack_2478,0,0x2400);
        local_2480 = &PTR_LAB_0498b708;
        local_70 = 0;
        local_78 = PTR_DAT_04bb2e18 + 0x10;
        if ((((uVar14 < 0x121) && (uVar15 < 0x101)) && (uVar14 < 0x120)) && (uVar15 != 0x100)) {
          uVar8 = (ulong)(uVar14 + uVar15 * 0x120 >> 5);
          *(uint *)((long)apcStack_2478 + uVar8 * 4) =
               *(uint *)((long)apcStack_2478 + uVar8 * 4) | 1 << (ulong)(uVar14 & 0x1f);
        }
        local_2488 = 0;
        local_2490 = 0;
        local_24a0 = (undefined8 *)CONCAT44(local_24a0._4_4_,0xc);
        local_2490 = 0x1022;
        local_2480 = &PTR_LAB_0498b708;
        local_2488 = 0;
        if (((DAT_0516be38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0516be38), iVar7 != 0)) {
          DAT_0516bdb8 = &DAT_048f9750;
          DAT_0516bdc0 = 0xffffffff00000000;
          DAT_0516bdd8 = &DAT_048f9750;
          DAT_0516bde0 = 0xffffffff;
          DAT_0516bde8 = &DAT_048f9750;
          DAT_0516bdf0 = 1;
          DAT_0516bdf8 = &DAT_048f9750;
          DAT_0516be00 = 0xffffffffffffffff;
          DAT_0516be08 = &DAT_048f9750;
          DAT_0516be10 = 0xffffffff00000001;
          DAT_0516be18 = &DAT_048f9750;
          DAT_0516be20 = 0x100000001;
          DAT_0516bdc8 = &DAT_048f9750;
          DAT_0516bdd0 = 0x100000000;
          DAT_0516be28 = &DAT_048f9750;
          DAT_0516be30 = 0x1ffffffff;
          __cxa_guard_release(&DAT_0516be38);
        }
        plVar11 = (long *)PTR_DAT_04bb27c8;
        uVar16 = uVar14;
        uVar17 = uVar15;
        uVar18 = uVar14;
        uVar6 = uVar15;
        uVar9 = uVar14;
        uVar10 = uVar15;
        do {
          iVar7 = *(int *)(lVar20 + 0x34) + 1;
          iVar21 = *(int *)(lVar20 + 0x24);
          if (iVar7 == iVar21) break;
          iVar2 = *(int *)(lVar20 + 0x20);
          bVar13 = false;
          iVar19 = iVar2;
          do {
            uVar22 = iVar19 - (int)local_70;
            if ((int)local_70 <= iVar19 && iVar19 <= (int)local_70 + 0x120) {
              if (((local_70._4_4_ <= iVar21) && (iVar21 <= local_70._4_4_ + 0x100)) &&
                 ((uVar22 < 0x120 &&
                  (((uint)(iVar21 - local_70._4_4_) < 0x100 &&
                   ((*(uint *)((long)apcStack_2478 +
                              (ulong)(uVar22 + (iVar21 - local_70._4_4_) * 0x120 >> 5) * 4) >>
                     (ulong)(uVar22 & 0x1f) & 1) != 0)))))) {
                uVar22 = 0;
                do {
                  local_24a0 = &DAT_048f9750;
                  lVar12 = (long)((ulong)uVar22 << 0x20) >> 0x1c;
                  local_2498 = *(int *)((long)&DAT_0516bdc0 + lVar12) + iVar19;
                  uStack_2494 = *(int *)((long)&DAT_0516bdc0 + lVar12 + 4) + iVar21;
                  if (*(int *)(lVar20 + 0x20) <= (int)local_2498 &&
                      (int)local_2498 <= *(int *)(lVar20 + 0x30)) {
                    if (*(int *)(lVar20 + 0x24) <= (int)uStack_2494) {
                      if ((int)uStack_2494 <= *(int *)(lVar20 + 0x34)) {
                        iVar4 = (int)local_70;
                        iVar1 = (int)local_70 + 0x120;
                        uVar3 = local_2498 - (int)local_70;
                        if (((int)local_70 <= (int)local_2498) && ((int)local_2498 <= iVar1)) {
                          if ((local_70._4_4_ <= (int)uStack_2494) &&
                             ((((int)uStack_2494 <= local_70._4_4_ + 0x100 && (uVar3 < 0x120)) &&
                              (uStack_2494 - local_70._4_4_ < 0x100)))) {
                            if ((*(uint *)((long)apcStack_2478 +
                                          (ulong)(uVar3 + (uStack_2494 - local_70._4_4_) * 0x120 >>
                                                 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0)
                            goto LAB_012a7670;
                          }
                        }
                        lVar12 = *plVar11;
                        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x90) != 0)) {
                          uVar8 = FUN_0094b728(lVar12 + 0x28,&local_24a0,&local_2490);
                          plVar11 = (long *)PTR_DAT_04bb27c8;
                          if ((uVar8 & 1) != 0) {
                            goto LAB_012a7670;
                          }
                        }
                        uVar3 = local_2498 - iVar4;
                        if ((iVar4 <= (int)local_2498) && ((int)local_2498 <= iVar1)) {
                          if ((local_70._4_4_ <= (int)uStack_2494) &&
                             ((((int)uStack_2494 <= local_70._4_4_ + 0x100 && (uVar3 < 0x120)) &&
                              (uStack_2494 - local_70._4_4_ < 0x100)))) {
                            uVar8 = (ulong)(uVar3 + (uStack_2494 - local_70._4_4_) * 0x120 >> 5);
                            *(uint *)((long)apcStack_2478 + uVar8 * 4) =
                                 *(uint *)((long)apcStack_2478 + uVar8 * 4) |
                                 1 << (ulong)(uVar3 & 0x1f);
                          }
                        }
                        bVar13 = true;
                        uVar3 = uStack_2494;
                        uVar5 = local_2498;
                        if ((int)local_2498 <= (int)uVar9) {
                          uVar3 = uVar10;
                          uVar5 = uVar9;
                        }
                        uVar9 = uVar5;
                        uVar10 = uStack_2494;
                        uVar5 = local_2498;
                        if ((int)uVar18 <= (int)local_2498) {
                          uVar10 = uVar6;
                          uVar5 = uVar18;
                        }
                        uVar18 = uVar5;
                        uVar6 = uStack_2494;
                        uVar5 = local_2498;
                        if ((int)uStack_2494 <= (int)uVar17) {
                          uVar6 = uVar17;
                          uVar5 = uVar16;
                        }
                        uVar16 = uVar5;
                        uVar17 = uStack_2494;
                        uVar5 = local_2498;
                        if ((int)uVar15 <= (int)uStack_2494) {
                          uVar17 = uVar15;
                          uVar5 = uVar14;
                        }
                        uVar14 = uVar5;
                        uVar15 = uVar17;
                        uVar17 = uVar6;
                        uVar6 = uVar10;
                        uVar10 = uVar3;
                      }
                    }
                  }
LAB_012a7670:
                  uVar22 = uVar22 + 1;
                } while (uVar22 != 8);
              }
            }
            if (iVar19 < *(int *)(lVar20 + 0x30)) {
              iVar19 = iVar19 + 1;
            }
            else {
              iVar19 = *(int *)(lVar20 + 0x20);
              iVar21 = iVar21 + 1;
            }
          } while ((iVar2 != iVar19) || (iVar7 != iVar21));
        } while (bVar13);
        __s = (void *)(param_1 + 8);
        *(uint *)(param_1 + 0x2410) = uVar9;
        *(uint *)(param_1 + 0x2414) = uVar10;
        *(uint *)(param_1 + 0x2424) = uVar6;
        *(uint *)(param_1 + 0x2420) = uVar18;
        *(uint *)(param_1 + 0x2430) = uVar16;
        *(uint *)(param_1 + 0x2434) = uVar17;
        *(uint *)(param_1 + 0x2440) = uVar14;
        *(uint *)(param_1 + 0x2444) = uVar15;
        memset(__s,0,0x2400);
        uVar14 = *(int *)(lVar20 + 0x34) + 1;
        uVar15 = *(uint *)(lVar20 + 0x24);
        if (uVar14 != uVar15) {
          uVar18 = *(uint *)(lVar20 + 0x20);
          uVar9 = uVar18;
          do {
            uVar16 = uVar9 - (int)local_70;
            if (((((int)local_70 <= (int)uVar9) && ((int)uVar9 <= (int)local_70 + 0x120)) &&
                ((local_70._4_4_ <= (int)uVar15 &&
                 (((((int)uVar15 <= local_70._4_4_ + 0x100 && (uVar15 - local_70._4_4_ < 0x100)) &&
                   (uVar16 < 0x120)) && ((uVar15 < 0x100 && (uVar9 < 0x120)))))))) &&
               ((*(uint *)((long)apcStack_2478 +
                          (ulong)(uVar16 + (uVar15 - local_70._4_4_) * 0x120 >> 5) * 4) &
                1 << (ulong)(uVar16 & 0x1f)) != 0)) {
              lVar12 = (ulong)(uVar9 + uVar15 * 0x120 >> 5) * 4;
              *(uint *)((long)__s + lVar12) =
                   *(uint *)((long)__s + lVar12) | 1 << (ulong)(uVar9 & 0x1f);
            }
            if ((int)uVar9 < *(int *)(lVar20 + 0x30)) {
              uVar9 = uVar9 + 1;
            }
            else {
              uVar9 = *(uint *)(lVar20 + 0x20);
              uVar15 = uVar15 + 1;
            }
          } while ((uVar18 != uVar9) || (uVar14 != uVar15));
        }
      }
    }
  }
  return;
}

