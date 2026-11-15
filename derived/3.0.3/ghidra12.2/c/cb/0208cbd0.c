
/* WARNING: Removing unreachable block (ram,0x0208cdf4) */
/* WARNING: Removing unreachable block (ram,0x0208ce88) */
/* WARNING: Removing unreachable block (ram,0x0208ce94) */
/* WARNING: Removing unreachable block (ram,0x0208cd68) */
/* WARNING: Removing unreachable block (ram,0x0208cea8) */
/* WARNING: Removing unreachable block (ram,0x0208ceb4) */
/* WARNING: Removing unreachable block (ram,0x0208ce3c) */
/* WARNING: Removing unreachable block (ram,0x0208ce98) */
/* WARNING: Removing unreachable block (ram,0x0208cea4) */
/* WARNING: Removing unreachable block (ram,0x0208cdb0) */
/* WARNING: Removing unreachable block (ram,0x0208ce84) */
/* WARNING: Removing unreachable block (ram,0x0208cdb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0208cbd0(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined8 *****pppppuVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  uint local_118 [2];
  undefined8 *****local_110;
  undefined8 *****local_108;
  undefined8 *****pppppuStack_100;
  undefined8 *****local_f8;
  undefined8 *****local_f0;
  undefined8 ****local_e8;
  undefined8 ***local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *****local_c0;
  undefined8 *****local_b8;
  undefined8 *****local_b0;
  undefined8 *****local_a8;
  undefined8 *****local_a0;
  undefined8 *****local_98;
  undefined8 *****local_90;
  undefined4 local_84;
  undefined *local_80;
  char *pcStack_78;
  
  bVar5 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar5 < 5) {
    local_84 = 5;
  }
  else if (bVar5 < 8) {
    local_84 = 0;
  }
  else if (bVar5 < 0xc) {
    local_84 = 1;
  }
  else if (bVar5 < 0x10) {
    local_84 = 2;
  }
  else {
    local_84 = 3;
    if (0x12 < bVar5) {
      local_84 = 4;
    }
  }
  uVar8 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  puVar6 = PTR_DAT_04bb39d8;
  local_c8 = 0;
  local_f0 = &local_e8;
  local_e8 = &local_e0;
  local_e0 = &local_d8;
  uVar2 = 2;
  if ((uVar8 & 0xfffffffd) != 5) {
    uVar2 = 3 < uVar8;
  }
  local_d8 = &local_d0;
  local_d0 = &local_c8;
  pppppuStack_100 = &local_f8;
  local_118[0] = 0;
  local_118[1] = 0;
  local_110 = (undefined8 *****)0x0;
  local_108 = pppppuStack_100;
  local_f8 = &local_f0;
  if (&local_c0 != (undefined8 ******)0x0) {
    local_f8 = (undefined8 *****)((ulong)&local_f0 & 0xffffffff00000000);
    local_118[1] = 7;
    local_108 = &local_f0;
    if (&local_f0 != (undefined8 ******)0x0) {
      local_108 = local_f0;
    }
    pppppuVar14 = local_108;
    local_f0 = (undefined8 *****)((ulong)local_f0 & 0xffffffff00000000);
    local_b8 = &local_f0;
    if (local_108 != (undefined8 *****)0x0) {
      local_108 = (undefined8 *****)*local_108;
    }
    pppppuVar7 = local_108;
    local_c0 = pppppuStack_100;
    *(undefined4 *)pppppuVar14 = 0;
    local_b0 = pppppuVar14;
    if (local_108 != (undefined8 *****)0x0) {
      local_108 = (undefined8 *****)*local_108;
    }
    pppppuVar14 = local_108;
    *(undefined4 *)pppppuVar7 = 0;
    local_a8 = pppppuVar7;
    if (local_108 != (undefined8 *****)0x0) {
      local_108 = (undefined8 *****)*local_108;
    }
    pppppuVar7 = local_108;
    *(undefined4 *)pppppuVar14 = 0;
    local_a0 = pppppuVar14;
    if (local_108 != (undefined8 *****)0x0) {
      local_108 = (undefined8 *****)*local_108;
    }
    pppppuVar14 = local_108;
    *(undefined4 *)pppppuVar7 = 0;
    local_98 = pppppuVar7;
    if (local_108 != (undefined8 *****)0x0) {
      local_108 = (undefined8 *****)*local_108;
    }
    *(undefined4 *)pppppuVar14 = 0;
    local_90 = pppppuVar14;
    local_118[0] = 7;
    local_110 = &local_c0;
  }
  iVar11 = *(int *)(param_1 + 0x30);
  if (iVar11 != 0) {
    iVar16 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x2c) + iVar16;
      iVar3 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar1) {
        iVar3 = *(int *)(param_1 + 0x28);
      }
      puVar13 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar1 - iVar3) * 0x10);
      piVar17 = puVar13 + 1;
      if ((*piVar17 == 0) || (*piVar17 == 1)) {
        *(undefined4 *)*local_110 = 0;
        *(undefined4 *)local_110[1] = 0;
        *(undefined4 *)local_110[2] = 0;
        *(undefined4 *)local_110[3] = 0;
        *(undefined4 *)local_110[4] = 0;
        *(undefined4 *)local_110[5] = 0;
        *(undefined4 *)local_110[6] = 0;
        FUN_02091a70(local_118,param_1,piVar17,&local_84,uVar2,0);
        if (0 < (int)local_118[0]) {
          if (local_118[0] < 4) {
            lVar15 = 0;
            fVar20 = 0.0;
          }
          else {
            fVar20 = 0.0;
            lVar15 = 0;
            pppppuVar14 = local_110 + 2;
            do {
              lVar15 = lVar15 + -4;
              fVar20 = fVar20 + *(float *)pppppuVar14[-2] + *(float *)pppppuVar14[-1] +
                       *(float *)*pppppuVar14 + *(float *)pppppuVar14[1];
              pppppuVar14 = pppppuVar14 + 4;
            } while (-lVar15 != ((ulong)local_118[0] & 0xfffffffc));
            lVar15 = -lVar15;
          }
          if ((local_118[0] & 3) != 0) {
            uVar12 = (ulong)local_118[0] & 3;
            pppppuVar14 = local_110 + lVar15;
            do {
              uVar12 = uVar12 - 1;
              fVar20 = fVar20 + *(float *)*pppppuVar14;
              pppppuVar14 = pppppuVar14 + 1;
            } while (uVar12 != 0);
          }
          if (0.0 < fVar20) {
            puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
            uVar8 = *puVar9 ^ *puVar9 << 0xb;
            uVar4 = puVar9[3];
            *puVar9 = puVar9[1];
            puVar9[1] = puVar9[2];
            uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
            puVar9[2] = uVar4;
            puVar9[3] = uVar8;
            if (local_118[0] != 0) {
              fVar19 = 0.0;
              uVar12 = 0;
              lVar15 = (long)(int)local_118[0] << 3;
              pppppuVar14 = local_110;
              do {
                fVar19 = fVar19 + *(float *)*pppppuVar14;
                if (fVar20 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) < fVar19) {
                  if (6 < (uint)uVar12) {
                    uVar12 = 0;
                  }
                  uVar10 = (&DAT_041796ac)[uVar12];
                  goto LAB_0208cef4;
                }
                uVar12 = (ulong)((uint)uVar12 + 1);
                pppppuVar14 = pppppuVar14 + 1;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
            }
          }
        }
        uVar10 = DAT_053d970c;
LAB_0208cef4:
        *puVar13 = uVar10;
        *(undefined1 *)((long)puVar13 + 0xd) = 1;
        puVar13[2] = local_84;
      }
      iVar16 = iVar16 + 1;
    } while (iVar11 != iVar16);
  }
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar11 = *(int *)PTR_DAT_04bc2808;
      goto joined_r0x0208d3f8;
    }
    iVar16 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
    iVar11 = 0;
    if (*(int *)(param_1 + 0x28) <= iVar16) {
      iVar11 = *(int *)(param_1 + 0x28);
    }
    iVar11 = *(int *)(*(long *)(param_1 + 0x20) + (long)(iVar16 - iVar11) * 0x10 + 4);
    if (iVar11 != 0) goto LAB_0208d104;
LAB_0208d114:
    *(undefined4 *)*local_110 = 0;
    *(undefined4 *)local_110[1] = 0;
    *(undefined4 *)local_110[2] = 0;
    *(undefined4 *)local_110[3] = 0;
    *(undefined4 *)local_110[4] = 0;
    *(undefined4 *)local_110[5] = 0;
    *(undefined4 *)local_110[6] = 0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
    FUN_02091a70(local_118,param_1,&local_80,&local_84,uVar2,0);
    if (0 < (int)local_118[0]) {
      if (local_118[0] == 1) {
        uVar12 = 0;
        fVar20 = 0.0;
      }
      else {
        fVar20 = 0.0;
        uVar12 = 0;
        do {
          pppppuVar14 = local_110 + uVar12;
          uVar12 = uVar12 + 2;
          fVar20 = fVar20 + *(float *)*pppppuVar14 + *(float *)pppppuVar14[1];
        } while (((ulong)local_118[0] & 0xfffffffe) != uVar12);
      }
      if ((local_118[0] & 1) != 0) {
        fVar20 = fVar20 + *(float *)local_110[uVar12];
      }
      if (0.0 < fVar20) {
        puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
        uVar8 = *puVar9 ^ *puVar9 << 0xb;
        uVar4 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
        puVar9[2] = uVar4;
        puVar9[3] = uVar8;
        if (local_118[0] != 0) {
          uVar12 = 0;
          lVar15 = (long)(int)local_118[0] << 3;
          puVar13 = &DAT_053d970c;
          fVar19 = 0.0;
          pppppuVar14 = local_110;
          do {
            fVar19 = fVar19 + *(float *)*pppppuVar14;
            if (fVar20 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0) < fVar19) {
              puVar13 = &DAT_041796ac + uVar12;
              if (6 < (uint)uVar12) {
                puVar13 = &DAT_041796ac;
              }
              break;
            }
            uVar12 = (ulong)((uint)uVar12 + 1);
            pppppuVar14 = pppppuVar14 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
          goto LAB_0208d300;
        }
      }
    }
    puVar13 = &DAT_053d970c;
LAB_0208d300:
    uVar10 = *puVar13;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x58);
joined_r0x0208d3f8:
    if (iVar11 == 0) goto LAB_0208d114;
LAB_0208d104:
    if (iVar11 != 1) {
      if (iVar11 != 2) goto LAB_0208d308;
      goto LAB_0208d114;
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar16 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
      iVar11 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar16) {
        iVar11 = *(int *)(param_1 + 0x28);
      }
      puVar13 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)(iVar16 - iVar11) * 0x10);
      goto LAB_0208d300;
    }
    uVar10 = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar10;
LAB_0208d308:
  FUN_02093bb8(param_1);
  lVar15 = FUN_021c9770(*(undefined4 *)(param_1 + 0xc),1);
  if (lVar15 != 0) {
    lVar18 = *(long *)PTR_DAT_04bb3968;
    puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
    uVar8 = *puVar9 ^ *puVar9 << 0xb;
    uVar4 = puVar9[3];
    *puVar9 = puVar9[1];
    puVar9[1] = puVar9[2];
    uVar8 = uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4;
    puVar9[2] = uVar4;
    puVar9[3] = uVar8;
    puVar9 = (uint *)(**(code **)(*(long *)(lVar18 + 0x2dd8) + 0xf0))(lVar18 + 0x2dd8);
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pcStack_78 = "IsEatCucumber";
    FUN_021c2600(lVar15,&local_80,(uint)((ulong)uVar8 * 100 >> 0x20) < *puVar9);
  }
  piVar17 = (int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(int *)(param_1 + 0x30) < 1) {
      piVar17 = (int *)PTR_DAT_04bc2808;
    }
    else {
      iVar16 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) + -1;
      iVar11 = 0;
      if (*(int *)(param_1 + 0x28) <= iVar16) {
        iVar11 = *(int *)(param_1 + 0x28);
      }
      piVar17 = (int *)(*(long *)(param_1 + 0x20) + (long)(iVar16 - iVar11) * 0x10 + 4);
    }
  }
  if (*piVar17 == 0) {
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    FUN_0220f914(&local_80);
  }
  else {
    local_80._0_4_ = 0;
  }
  *(undefined4 *)(param_1 + 0x10c) = local_80._0_4_;
  return;
}

