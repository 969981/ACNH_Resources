
undefined8 FUN_013b6a10(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  long *plVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  char *pcStack_98;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x464);
  if ((((uVar7 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                            ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar7)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar2;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar7 = 1;
      goto joined_r0x013b6ae8;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013b6ae8;
    }
  }
  uVar7 = 0;
joined_r0x013b6ae8:
  if (plVar16 != (long *)0x0) {
    lVar13 = plVar16[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbc7b0);
    puVar2 = PTR_DAT_04bb27d0;
    uVar4 = 0;
    if ((int)lVar13 == 1) {
      uVar4 = uVar7;
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (uVar4 == 0) {
      return 0;
    }
    if (((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) ||
        (uVar10 = FUN_013e53dc(plVar16), (uVar10 & 1) != 0)) &&
       (puVar5 = PTR_DAT_04bb5038, lVar13 = *(long *)PTR_DAT_04bb48a0, lVar13 != 0)) {
      if (1 < *(byte *)(**(long **)puVar2 + 0x476)) {
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,6);
        if ((*(byte *)((long)plVar16 + 0x274) & 0x40) != 0) {
          return 0;
        }
      }
      iVar6 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        pbVar1 = puVar5 + iVar6;
        bVar17 = *(byte *)(lVar13 + 0x44);
        bVar15 = *pbVar1;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (7 < bVar17) {
          bVar17 = 0xff;
        }
        if (bVar15 == bVar17) {
          lVar14 = 0;
LAB_013b6d40:
          lVar14 = lVar13 + 0x40 + lVar14 * 0x20;
        }
        else {
          bVar17 = *(byte *)(lVar13 + 100);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 1;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0x84);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 2;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0xa4);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 3;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0xc4);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 4;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0xe4);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 5;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0x104);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          if (bVar15 == bVar17) {
            lVar14 = 6;
            goto LAB_013b6d40;
          }
          bVar17 = *(byte *)(lVar13 + 0x124);
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          lVar14 = lVar13 + 0x140;
          if (bVar15 == bVar17) {
            lVar14 = 7;
            goto LAB_013b6d40;
          }
        }
        uVar10 = FUN_007d42c8(lVar14);
        if ((uVar10 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(lVar14 + 0x10);
          *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(lVar14 + 0x14);
          *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(lVar14 + 0x18);
          lVar11 = FUN_013b65c4(param_1);
          pfVar12 = (float *)(**(code **)(**(long **)(*(long *)(lVar11 + 0x6e0) +
                                                     (long)*(int *)(param_1 + 0x304) * 8) + 0xf0))()
          ;
          fVar18 = *(float *)(param_1 + 0x3f4) - *pfVar12;
          *(float *)(param_1 + 0x3f4) = fVar18;
          uVar10 = FUN_0142ae90(*(undefined4 *)(param_1 + 0x3f0),fVar18,
                                *(undefined4 *)(param_1 + 0x3f8),2);
          if ((uVar10 & 1) != 0) {
            fVar21 = *(float *)(param_1 + 0x38c);
            fVar22 = *(float *)(param_1 + 0x3f0);
            fVar23 = *(float *)(param_1 + 0x394);
            fVar24 = *(float *)(param_1 + 0x3f8);
            uVar7 = FUN_006f0400(fVar22 - fVar21,fVar24 - fVar23);
            fVar18 = (float)uVar7 * 8.381903e-08;
            if (fVar18 <= 360.0) {
              if (fVar18 < 0.0) {
                fVar19 = fVar18 / 360.0 + -1.0;
                goto LAB_013b6e04;
              }
            }
            else {
              fVar19 = fVar18 / 360.0;
LAB_013b6e04:
              fVar18 = fVar18 - (float)(int)fVar19 * 360.0;
            }
            fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x39c));
            fVar19 = fVar19 * 8.381903e-08;
            if (fVar19 <= 360.0) {
              if (fVar19 < 0.0) {
                fVar20 = fVar19 / 360.0 + -1.0;
                goto LAB_013b6e48;
              }
            }
            else {
              fVar20 = fVar19 / 360.0;
LAB_013b6e48:
              fVar19 = fVar19 - (float)(int)fVar20 * 360.0;
            }
            fVar21 = fVar21 - fVar22;
            fVar23 = fVar23 - fVar24;
            fVar22 = fVar18 - fVar19;
            if (fVar18 <= fVar19) {
              fVar22 = fVar19 - fVar18;
            }
            if (180.0 < fVar22) {
              fVar22 = 360.0 - fVar22;
            }
            fVar24 = 0.0;
            if (fVar18 != fVar19) {
              fVar24 = fVar22;
            }
            if (SQRT(fVar23 * fVar23 + fVar21 * fVar21) <= *(float *)(param_1 + 0x414)) {
              fVar18 = -fVar24;
              if (0.0 <= fVar24) {
                fVar18 = fVar24;
              }
              if (fVar18 <= *(float *)(param_1 + 0x418)) {
                local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
                if (((*(byte *)((long)plVar16 + 0x274) & 1) != 0) && (*pbVar1 < 8)) {
                  FUN_025196e4(&local_a0);
                  bVar15 = *pbVar1;
                  if (7 < bVar15) {
                    bVar15 = 0xff;
                  }
                  bVar17 = (byte)local_a0;
                  if (7 < (byte)local_a0) {
                    bVar17 = 0xff;
                  }
                  if (bVar15 == bVar17) {
                    pcStack_98 = "CatchFishFesQuestStart";
                    local_a0 = puVar2;
                    iVar8 = FUN_02743000(&local_a0);
                    if (iVar8 != 0) {
                      FUN_013e63b0(plVar16);
                    }
                    puVar3 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_98 = "BeyDaily_QuestStart";
                    local_a0 = puVar3;
                    iVar8 = FUN_0274bce0(pbVar1,&local_a0);
                    if (iVar8 != 0) {
                      pcStack_a8 = "BeyDaily_QuestClear";
                      local_b0 = puVar3;
                      iVar8 = FUN_0274bce0(pbVar1,&local_b0);
                      if (iVar8 == 0) {
                        FUN_013e63b0(plVar16);
                      }
                    }
                    uVar10 = FUN_0122c5a8(pbVar1);
                    if (((uVar10 & 1) != 0) || (uVar10 = FUN_02672fb0(pbVar1), (uVar10 & 1) != 0))
                    goto LAB_013b6c28;
                  }
                  FUN_013e63b0(plVar16);
                }
LAB_013b6c28:
                uVar10 = FUN_013ec620(lVar14 + 0xc);
                if ((uVar10 & 1) == 0) {
                  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,8);
                  *(byte *)(param_1 + 0x301) = *(byte *)(param_1 + 0x301) | 1;
                  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,8);
                  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
                    FUN_013e6154(plVar16,pbVar1);
                    return 1;
                  }
                  bVar15 = *pbVar1;
                  if (7 < bVar15) {
                    bVar15 = 0xff;
                  }
                  *(byte *)(param_1 + 0x468) = bVar15;
                  FUN_013e666c(plVar16,pbVar1);
                  FUN_013b711c(param_1,6);
                  return 1;
                }
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          bVar15 = *PTR_DAT_04bb32e0;
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          *(byte *)(param_1 + 0x468) = bVar15;
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

