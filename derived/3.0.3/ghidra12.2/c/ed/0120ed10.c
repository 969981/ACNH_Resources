
/* WARNING: Removing unreachable block (ram,0x0120ef98) */
/* WARNING: Removing unreachable block (ram,0x0120ed94) */
/* WARNING: Removing unreachable block (ram,0x0120ee00) */
/* WARNING: Removing unreachable block (ram,0x0120efac) */

void FUN_0120ed10(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 local_2098;
  undefined8 *local_2090;
  uint local_2088;
  int iStack_2084;
  undefined1 auStack_2080 [8];
  uint local_2078;
  uint uStack_2074;
  undefined *local_2070;
  uint local_2068 [1024];
  undefined8 local_1068;
  undefined4 local_1060;
  undefined4 local_105c;
  byte local_1058;
  
  local_2070 = PTR_DAT_04bbdd38 + 0x10;
  lVar3 = param_1 + 0x1010;
  memset(local_2068,0,0x1000);
  lVar8 = 0;
  do {
    lVar9 = lVar8 + 8;
    uVar15 = ((uint *)(lVar3 + lVar8))[1];
    *(uint *)((long)local_2068 + lVar8 + 0x1000) =
         *(uint *)(lVar3 + lVar8) | *(uint *)((long)local_2068 + lVar8);
    *(uint *)((long)local_2068 + lVar8 + 0x1004) = uVar15 | *(uint *)((long)local_2068 + lVar8 + 4);
    lVar8 = lVar9;
  } while (lVar9 != 0x1000);
  memcpy(local_2068,&local_1068,0x1000);
  lVar8 = param_1 + 0x3020;
  lVar9 = 0;
  do {
    lVar4 = lVar9 + 8;
    uVar15 = ((uint *)(lVar8 + lVar9))[1];
    *(uint *)((long)local_2068 + lVar9 + 0x1000) =
         *(uint *)(lVar8 + lVar9) | *(uint *)((long)local_2068 + lVar9);
    *(uint *)((long)local_2068 + lVar9 + 0x1004) = uVar15 | *(uint *)((long)local_2068 + lVar9 + 4);
    lVar9 = lVar4;
  } while (lVar4 != 0x1000);
  memcpy(local_2068,&local_1068,0x1000);
  local_1060 = 0;
  if (DAT_05aed670 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar7 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_105c = *(undefined4 *)(puVar20 + 7);
  local_1058 = FUN_017baf44();
  local_1058 = local_1058 & 1;
  iVar7 = 0;
  local_1068 = PTR_DAT_04bb6268 + 0x10;
  lVar9 = 2;
  do {
    lVar4 = lVar9 + -2;
    lVar9 = lVar9 + 1;
    uVar15 = local_2068[lVar4] - (local_2068[lVar4] >> 1 & 0x55555555);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
    uVar15 = uVar15 + (uVar15 >> 8);
    iVar7 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar7;
  } while (lVar9 != 0x402);
  if (param_2 <= iVar7) {
    iVar7 = param_2;
  }
  if (0 < iVar7) {
    iVar19 = 0;
    lVar9 = param_1 + 8;
    do {
      FUN_01696d70(auStack_2080,&local_2070);
      iVar11 = DAT_05233980;
      iVar10 = DAT_05233970;
      bVar5 = (int)local_2078 < DAT_05233970;
      bVar6 = DAT_05233980 < (int)local_2078;
      iVar1 = (int)local_2078 >> 1;
      if ((((DAT_05233970 <= (int)local_2078 && (int)local_2078 <= DAT_05233980) &&
           (DAT_05233974 <= (int)uStack_2074)) && ((int)uStack_2074 <= DAT_05233984)) &&
         (uVar15 = (uStack_2074 & 0x1fffffe) * 0x80 + iVar1, uVar15 >> 0xf == 0)) {
        uVar15 = uVar15 >> 5;
        local_2068[uVar15] =
             local_2068[uVar15] & (1 << (ulong)(local_2078 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      uVar13 = local_2078 - 2;
      iVar14 = uStack_2074 - 2;
      uVar15 = 0;
      if ((int)uVar13 < iVar10 || iVar11 < (int)uVar13) {
        uVar18 = 0;
        if (!(bVar5 || bVar6)) goto LAB_0120f1a8;
LAB_0120f210:
        uVar13 = 0;
      }
      else {
        iVar16 = (int)uVar13 >> 1;
        if ((DAT_05233974 <= iVar14) && (iVar14 <= DAT_05233984)) {
          uVar15 = (iVar14 * 0x80 & 0xffffff00U) + iVar16;
          if (uVar15 >> 0xf == 0) {
            uVar15 = *(uint *)(lVar9 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar13 >> 1 & 0x1f) & 1;
          }
          else {
            uVar15 = 0;
          }
        }
        if (((DAT_05233974 <= (int)uStack_2074) && ((int)uStack_2074 <= DAT_05233984)) &&
           (uVar18 = (uStack_2074 & 0x1fffffe) * 0x80 + iVar16, uVar18 >> 0xf == 0)) {
          uVar15 = uVar15 | (uint)((*(uint *)(lVar9 + (ulong)(uVar18 >> 5) * 4) &
                                   1 << (ulong)(uVar13 >> 1 & 0x1f)) != 0) << 1;
        }
        iVar2 = uStack_2074 + 2;
        uVar18 = 0;
        if ((DAT_05233974 <= iVar2) && (iVar2 <= DAT_05233984)) {
          uVar18 = (iVar2 * 0x80 & 0xffffff00U) + iVar16;
          if (uVar18 >> 0xf != 0) {
            uVar18 = 0;
            if (iVar10 <= (int)local_2078 && (int)local_2078 <= iVar11) goto LAB_0120f1a8;
            goto LAB_0120f210;
          }
          uVar18 = (uint)((*(uint *)(lVar9 + (ulong)(uVar18 >> 5) * 4) &
                          1 << (ulong)(uVar13 >> 1 & 0x1f)) != 0) << 2;
        }
        if (!(!bVar5 && !bVar6)) goto LAB_0120f210;
LAB_0120f1a8:
        iVar16 = uStack_2074 + 2;
        uVar13 = 0;
        if ((DAT_05233974 <= iVar16) && (iVar16 <= DAT_05233984)) {
          uVar13 = (iVar16 * 0x80 & 0xffffff00U) + iVar1;
          if (uVar13 >> 0xf != 0) goto LAB_0120f210;
          uVar13 = (uint)((*(uint *)(lVar9 + (ulong)(uVar13 >> 5) * 4) &
                          1 << (ulong)(local_2078 >> 1 & 0x1f)) != 0) << 3;
        }
      }
      iVar16 = uStack_2074 + 2;
      uVar17 = 0;
      uVar13 = uVar18 | uVar15 | uVar13;
      uVar15 = local_2078 + 2;
      if (((int)uVar15 < iVar10) || (iVar11 < (int)uVar15)) {
        uVar18 = 0;
      }
      else {
        iVar2 = (int)uVar15 >> 1;
        if (((DAT_05233974 <= iVar16) && (iVar16 <= DAT_05233984)) &&
           (uVar18 = (iVar16 * 0x80 & 0xffffff00U) + iVar2, uVar18 >> 0xf == 0)) {
          uVar13 = uVar13 | (uint)((*(uint *)(lVar9 + (ulong)(uVar18 >> 5) * 4) &
                                   1 << (ulong)(uVar15 >> 1 & 0x1f)) != 0) << 4;
        }
        uVar17 = 0;
        if ((DAT_05233974 <= (int)uStack_2074) && ((int)uStack_2074 <= DAT_05233984)) {
          uVar18 = (uStack_2074 & 0x1fffffe) * 0x80 + iVar2;
          if (uVar18 >> 0xf == 0) {
            uVar17 = (uint)((*(uint *)(lVar9 + (ulong)(uVar18 >> 5) * 4) &
                            1 << (ulong)(uVar15 >> 1 & 0x1f)) != 0) << 5;
          }
          else {
            uVar17 = 0;
          }
        }
        uVar18 = 0;
        if ((DAT_05233974 <= iVar14) && (iVar14 <= DAT_05233984)) {
          uVar18 = (iVar14 * 0x80 & 0xffffff00U) + iVar2;
          if (uVar18 >> 0xf == 0) {
            uVar18 = (uint)((*(uint *)(lVar9 + (ulong)(uVar18 >> 5) * 4) &
                            1 << (ulong)(uVar15 >> 1 & 0x1f)) != 0) << 6;
          }
          else {
            uVar18 = 0;
          }
        }
      }
      uVar18 = uVar18 | uVar17 | uVar13;
      uVar15 = uVar18 - ((uVar17 | uVar13 & 0xaaaaaaaa) >> 1);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
      if (uVar15 != 0) {
        uVar13 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar13 = uVar13 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar13 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        local_2090 = &DAT_048f9750;
        if (uVar18 != 0) {
          iVar14 = (int)((ulong)uVar13 * (ulong)uVar15 >> 0x20) + 2;
          do {
            iVar14 = iVar14 + -1;
            if (iVar14 < 2) {
              uVar15 = uVar18 - 1 & (uVar18 ^ 0xffffffff);
              uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
              uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
              uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
              uVar15 = uVar15 + (uVar15 >> 8);
              uVar12 = (ulong)(uVar15 + (uVar15 >> 0x10) & 0x3f);
              goto LAB_0120f404;
            }
            uVar18 = uVar18 - 1 & uVar18;
          } while (uVar18 != 0);
        }
        uVar12 = 0xffffffff;
LAB_0120f404:
        uVar12 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
        local_2088 = *(int *)(&DAT_041747c8 + uVar12) + local_2078;
        iStack_2084 = *(int *)(&DAT_041747e4 + uVar12) + uStack_2074;
        DAT_0514cb64 = uVar13;
        if (iVar10 <= (int)local_2088 && (int)local_2088 <= iVar11) {
          if (DAT_05233974 <= iStack_2084) {
            if (iStack_2084 <= DAT_05233984) {
              uVar15 = (iStack_2084 * 0x80 & 0xffffff00U) + ((int)local_2088 >> 1);
              if (uVar15 >> 0xf == 0) {
                lVar4 = (ulong)(uVar15 >> 5) * 4;
                *(uint *)(lVar9 + lVar4) =
                     *(uint *)(lVar9 + lVar4) & (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU)
                ;
                iVar10 = DAT_05233970;
                iVar11 = DAT_05233980;
              }
            }
          }
        }
        if (iVar10 <= (int)local_2088) {
          if ((int)local_2088 <= iVar11) {
            if (DAT_05233974 <= iStack_2084) {
              if (iStack_2084 <= DAT_05233984) {
                uVar15 = (iStack_2084 * 0x80 & 0xffffff00U) + ((int)local_2088 >> 1);
                if (uVar15 >> 0xf == 0) {
                  lVar4 = (ulong)(uVar15 >> 5) * 4;
                  *(uint *)(param_1 + 0xa058 + lVar4) =
                       *(uint *)(param_1 + 0xa058 + lVar4) &
                       (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
                  iVar10 = DAT_05233970;
                  iVar11 = DAT_05233980;
                }
              }
            }
          }
        }
        if (iVar10 <= (int)local_2078) {
          if ((int)local_2078 <= iVar11) {
            if (DAT_05233974 <= (int)uStack_2074) {
              if ((int)uStack_2074 <= DAT_05233984) {
                uVar15 = (uStack_2074 & 0x1fffffe) * 0x80 + iVar1;
                if (uVar15 >> 0xf == 0) {
                  lVar4 = (ulong)(uVar15 >> 5) * 4;
                  *(uint *)(lVar3 + lVar4) =
                       *(uint *)(lVar3 + lVar4) &
                       (1 << (ulong)(local_2078 >> 1 & 0x1f) ^ 0xffffffffU);
                  iVar10 = DAT_05233970;
                  iVar11 = DAT_05233980;
                }
              }
            }
          }
        }
        if ((((iVar10 <= (int)local_2078) && ((int)local_2078 <= iVar11)) &&
            (DAT_05233974 <= (int)uStack_2074)) &&
           (((int)uStack_2074 <= DAT_05233984 &&
            (uVar15 = (uStack_2074 & 0x1fffffe) * 0x80 + iVar1, uVar15 >> 0xf == 0)))) {
          lVar4 = (ulong)(uVar15 >> 5) * 4;
          *(uint *)(lVar8 + lVar4) =
               *(uint *)(lVar8 + lVar4) & (1 << (ulong)(local_2078 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        local_2098 = 0x9c4;
        FUN_0277d4ac(&local_2098);
        FUN_01a50970(&local_1068,0,&local_2098,&local_2090);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != iVar7);
  }
  return;
}

