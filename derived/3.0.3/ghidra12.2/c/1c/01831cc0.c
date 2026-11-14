
/* WARNING: Removing unreachable block (ram,0x01831d58) */
/* WARNING: Removing unreachable block (ram,0x01831db4) */
/* WARNING: Removing unreachable block (ram,0x01831fac) */
/* WARNING: Removing unreachable block (ram,0x01831fd4) */

undefined8 FUN_01831cc0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  short *psVar18;
  float *pfVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long local_120;
  uint local_114;
  undefined **local_110;
  undefined4 local_108;
  undefined4 local_104;
  byte local_100;
  undefined8 *local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  float local_e0;
  int local_d8;
  int iStack_d4;
  float local_cc;
  float fStack_c8;
  float local_c4;
  int local_c0;
  int iStack_bc;
  long *local_b8;
  uint local_ac [3];
  
  iVar23 = *(int *)(param_1 + 0x3a8);
  if (iVar23 < 0xd95) {
    if ((iVar23 != 0x248) && (iVar23 != 0x262)) {
      return 0;
    }
  }
  else if ((iVar23 != 0xd9c) && (iVar23 != 0xd95)) {
    return 0;
  }
  if (DAT_05231900 == 0) {
    return 0;
  }
  if (*(long *)(DAT_05231900 + 0x50) == 0) {
    return 0;
  }
  local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
  plVar25 = *(long **)(*(long *)(DAT_05231900 + 0x50) + 0x118);
  if (plVar25 == (long *)0x0) {
    return 0;
  }
  if ((char)plVar25[7] == '\0') {
    return 0;
  }
  uVar16 = (**(code **)(*plVar25 + 0xc0))(plVar25);
  if ((uVar16 & 1) == 0) {
    return 0;
  }
  if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) {
    local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
    lVar20 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
    if ((lVar20 != 0) && (*(char *)(lVar20 + 0xe0b) == '\0')) {
      return 0;
    }
  }
  fVar27 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) + -10.0;
  fVar28 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) + -10.0;
  iVar9 = (int)((float)(int)fVar27 / 10.0) - (uint)(fVar27 < 0.0);
  iVar23 = (int)((float)(int)fVar28 / 10.0) - (uint)(fVar28 < 0.0);
  if ((long)(short)DAT_04c487d4 != 0xffffffffffffffff) {
    local_110 = (undefined **)CONCAT44(local_110._4_4_,0x1a);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
    if (0xff < DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x1a & 1) != 0) {
      local_110 = (undefined **)CONCAT44(local_110._4_4_,1);
      local_120 = 0;
      if (((*puVar4 >> 1 & 1) == 0) || (*(char *)(param_1 + 0x494) != '\0')) goto LAB_01831f14;
      local_110 = (undefined **)CONCAT44(local_110._4_4_,0x1a);
      if (((*puVar4 >> 0x1a & 1) != 0) &&
         (local_110 = (undefined **)CONCAT44(local_110._4_4_,1), (*puVar4 >> 1 & 1) != 0)) {
        local_120 = 0;
        if (DAT_05abff60 != 0) {
          local_120 = DAT_05abff60 + 0x18;
        }
        goto LAB_01831f14;
      }
    }
  }
  local_120 = 0;
LAB_01831f14:
  iVar1 = iVar23 + 3;
  iVar24 = iVar9;
  local_b8 = plVar25;
  do {
    local_c0 = 0;
    iStack_bc = 0;
    if (local_b8 != (long *)0x0) {
      if ((DAT_05231900 == 0) || (lVar20 = *(long *)(DAT_05231900 + 0x50), lVar20 == 0)) {
LAB_01831ff0:
        if (0 < *(int *)(local_b8[0x164] + (long)(int)local_b8[0x166] * 0x10)) {
LAB_01832008:
          lVar20 = local_b8[0x168];
          iVar3 = iVar24;
          if (*(int *)(lVar20 + 0x20) <= iVar24) {
            iVar3 = *(int *)(lVar20 + 0x20);
          }
          local_c0 = 0;
          if (*(int *)(lVar20 + 0x10) <= iVar24) {
            local_c0 = iVar3 - *(int *)(lVar20 + 0x10);
          }
          iVar3 = iVar23;
          if (*(int *)(lVar20 + 0x24) <= iVar23) {
            iVar3 = *(int *)(lVar20 + 0x24);
          }
          iStack_bc = 0;
          if (*(int *)(lVar20 + 0x14) <= iVar23) {
            iStack_bc = iVar3 - *(int *)(lVar20 + 0x14);
          }
        }
      }
      else {
        uVar16 = (ulong)local_110 >> 0x20;
        local_110 = (undefined **)(uVar16 << 0x20);
        if ((*(long *)(lVar20 + 0x118) == 0) ||
           (*(char *)(*(long *)(lVar20 + 0x118) + 0xe0b) != '\0')) {
          local_110 = (undefined **)(uVar16 << 0x20);
          if ((*(long *)(lVar20 + 0x118) == 0) ||
             (*(char *)(*(long *)(lVar20 + 0x118) + 0xe0b) != '\0')) goto LAB_01831ff0;
          goto LAB_01832008;
        }
      }
    }
    fVar27 = (float)iVar24 * 10.0;
    fVar28 = (float)iVar23 * 10.0;
    fVar29 = fVar27 + 2.5;
    fVar30 = fVar28 + 2.5;
    fVar27 = fVar27 + 10.0 + -2.5;
    fVar28 = fVar28 + 10.0 + -2.5;
    uVar10 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
    uVar15 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
    uVar21 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
    uVar22 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    uVar5 = uVar10;
    if ((int)uVar21 <= (int)uVar10) {
      uVar5 = uVar21;
    }
    if ((int)uVar10 <= (int)uVar21) {
      uVar10 = uVar21;
    }
    uVar21 = uVar15;
    if ((int)uVar22 <= (int)uVar15) {
      uVar21 = uVar22;
    }
    if ((int)uVar15 <= (int)uVar22) {
      uVar15 = uVar22;
    }
    if (uVar15 + 1 != uVar21) {
      uVar22 = uVar5;
      do {
        if ((((((*(long *)PTR_DAT_04bb27c8 != 0) && (-1 < (int)uVar22)) &&
              (lVar20 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar20 != 0)) &&
             ((-1 < (int)uVar21 && (uVar22 < *(uint *)(lVar20 + 0x38))))) &&
            (uVar21 < *(uint *)(lVar20 + 0x3c))) &&
           ((uVar6 = uVar22 + *(uint *)(lVar20 + 0x38) * uVar21, uVar6 < *(uint *)(lVar20 + 0x68) &&
            (*(long *)(lVar20 + 0x70) != 0)))) {
          local_110 = (undefined **)CONCAT44(local_110._4_4_,3);
          if ((*(uint *)(*(long *)(lVar20 + 0x70) + (long)(int)uVar6 * 4) >> 3 & 1) != 0)
          goto LAB_01832600;
        }
        if ((int)uVar22 < (int)uVar10) {
          uVar22 = uVar22 + 1;
        }
        else {
          uVar21 = uVar21 + 1;
          uVar22 = uVar5;
        }
      } while ((uVar5 != uVar22) || (uVar15 + 1 != uVar21));
    }
    local_cc = (float)iVar24 * 10.0 + 5.0;
    local_c4 = (float)iVar23 * 10.0 + 5.0;
    iVar13 = FUN_015aff78(&local_b8,&local_c0,0);
    iVar12 = iStack_bc;
    iVar3 = local_c0;
    if (0 < iVar13) {
      iVar26 = 0;
      uVar5 = *(uint *)(param_1 + 1000) ^ *(uint *)(param_1 + 1000) << 0xb;
      uVar15 = *(uint *)(param_1 + 0x3f4);
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
      *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3f0);
      iVar13 = local_c0 + 1;
      iVar7 = local_c0 + -1;
      *(uint *)(param_1 + 0x3f0) = uVar15;
      iVar2 = iStack_bc + 1;
      iVar8 = iStack_bc + -1;
      uVar10 = uVar5 ^ uVar15;
      *(uint *)(param_1 + 0x3f4) = uVar5 >> 8 ^ uVar15 >> 0x13 ^ uVar10;
      do {
        uVar5 = (uVar10 >> 0x1e) + iVar26 & 3;
        switch(uVar5) {
        case 0:
          _local_d8 = CONCAT44(iVar8,iVar3);
          fVar27 = 0.0;
          fVar28 = -6.0;
          break;
        case 1:
          _local_d8 = CONCAT44(iVar2,iVar3);
          fVar27 = 0.0;
          fVar28 = 6.0;
          break;
        case 2:
          _local_d8 = CONCAT44(iVar12,iVar7);
          fVar28 = 0.0;
          fVar27 = -6.0;
          break;
        case 3:
          fVar28 = 0.0;
          fVar27 = 6.0;
          _local_d8 = CONCAT44(iVar12,iVar13);
        }
        iVar14 = FUN_015af618(&local_b8,&local_d8,0);
        if (iVar14 == 0) {
          fVar27 = fVar27 + local_cc;
          local_e8 = CONCAT44(fStack_c8 + 0.0,fVar27);
          local_e0 = fVar28 + local_c4;
          if (*(long *)(PTR_DAT_04bbec30 + 8) != 0) {
            iVar14 = (int)((float)(int)fVar27 / 10.0) - (uint)(fVar27 < 0.0);
            iVar11 = (int)((float)(int)local_e0 / 10.0) - (uint)(local_e0 < 0.0);
            if (((DAT_052ae7c8 <= iVar14 && iVar14 <= DAT_052ae7d8) && DAT_052ae7cc <= iVar11) &&
                iVar11 <= DAT_052ae7dc) {
              lVar20 = (long)(int)((iVar14 - DAT_052ae7c8) +
                                  *(uint *)PTR_DAT_04bbec30 * (iVar11 - DAT_052ae7cc));
              if (*(uint *)(PTR_DAT_04bbec30 + 4) <= (uint)(iVar11 - DAT_052ae7cc) ||
                  *(uint *)PTR_DAT_04bbec30 <= (uint)(iVar14 - DAT_052ae7c8)) {
                lVar20 = 0;
              }
              if ((*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar20 * 8 + 4) == '\0') &&
                 ((local_120 == 0 ||
                  (((((float)*(int *)(local_120 + 0x10) * 5.0 <= fVar27 &&
                     (fVar27 < (float)*(int *)(local_120 + 0x20) * 5.0 + 5.0)) &&
                    ((float)*(int *)(local_120 + 0x14) * 5.0 <= local_e0)) &&
                   (local_e0 < (float)*(int *)(local_120 + 0x24) * 5.0 + 5.0)))))) {
                local_108 = 0;
                local_f8 = &DAT_048f9750;
                local_f0 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
                local_ec = (int)((float)(int)local_e0 / 5.0) - (uint)(local_e0 < 0.0);
                local_110 = &PTR_LAB_049ffa38;
                if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
                  puVar17 = &DAT_055c04a0;
                }
                else {
                  puVar17 = (undefined8 *)
                            (**(code **)(*DAT_05aed668 + 0x18))
                                      (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
                  iVar14 = FUN_006bd550(*puVar17,0);
                  puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar14 != 0x758f7eaf) {
                    puVar17 = &DAT_055c04a0;
                  }
                }
                local_104 = *(undefined4 *)(puVar17 + 7);
                local_100 = FUN_017baf44();
                local_100 = local_100 & 1;
                psVar18 = (short *)FUN_01a5190c(&local_110,0,&local_f8,0);
                if (*psVar18 == -2) {
                  uVar15 = FUN_01317b90(&local_cc,0);
                  local_ac[0] = uVar15;
                  local_114 = FUN_01317b90(&local_e8,0);
                  if (uVar15 == local_114) {
                    if ((DAT_04cfae30 == 0) ||
                       (lVar20 = *(long *)(DAT_04cfae30 + 0xa8), lVar20 == 0)) {
LAB_01832218:
                      fVar27 = -500.0;
                    }
                    else {
                      if (((-1 < (int)local_f0) &&
                          (((-1 < (int)local_ec && (local_f0 < *(uint *)(lVar20 + 0x38))) &&
                           (local_ec < *(uint *)(lVar20 + 0x3c))))) &&
                         (((uVar15 = local_f0 + *(uint *)(lVar20 + 0x38) * local_ec,
                           uVar15 < *(uint *)(lVar20 + 0x68) && (*(long *)(lVar20 + 0x70) != 0)) &&
                          (local_ac[0] = 5,
                          (*(uint *)(*(long *)(lVar20 + 0x70) + (long)(int)uVar15 * 4) >> 5 & 1) !=
                          0)))) goto LAB_01832230;
                      if (*(char *)(DAT_04cfae30 + 0x11c8) != '\0') goto LAB_01832218;
                      local_114 = local_114 & 0xffffff00;
                      if (DAT_04c487d4 == 0xffff) {
                        local_ac[0] = 7;
                      }
                      else {
                        puVar4 = (uint *)(PTR_DAT_04bc39f8 +
                                         (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
                        if (0xff < (uint)(int)(short)DAT_04c487d4) {
                          puVar4 = (uint *)PTR_DAT_04bc39f8;
                        }
                        local_ac[0] = 7;
                        if ((*puVar4 & 2) != 0) {
                          local_ac[0] = 5;
                        }
                      }
                      fVar27 = (float)FUN_00962700(lVar20,&local_e8,local_ac,1,&local_114);
                    }
                    if (fVar27 <= *(float *)(*(long *)(param_1 + 0x300) + 0x27c)) {
                      *(undefined8 *)(param_1 + 0x328) = local_e8;
                      *(float *)(param_1 + 0x330) = local_e0;
                      pfVar19 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x150)
                                                     + 0xf0))(*(long *)(param_1 + 0x4b0) + 0x150);
                      fVar28 = *pfVar19;
                      *(char *)(param_1 + 0x3fa) = (char)uVar5;
                      *(float *)(param_1 + 0x32c) = fVar27 + fVar28;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
LAB_01832230:
        iVar26 = iVar26 + 1;
      } while (iVar26 != 4);
    }
LAB_01832600:
    if (iVar24 < iVar9 + 2) {
      iVar24 = iVar24 + 1;
    }
    else {
      iVar23 = iVar23 + 1;
      iVar24 = iVar9;
    }
    if ((iVar9 == iVar24) && (iVar1 == iVar23)) {
      return 0;
    }
  } while( true );
}

