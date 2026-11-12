
undefined8 FUN_0093b18c(undefined8 param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  short *psVar13;
  undefined8 uVar14;
  ushort uVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  bool bVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  char cVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  
  puVar7 = PTR_DAT_04bb2720;
  puVar6 = PTR_DAT_04bb2640;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return 7;
  }
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    return 7;
  }
  if (*(long *)(lVar16 + 0x330) == 0) {
    return 7;
  }
  puVar12 = (undefined8 *)
            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
  iVar8 = FUN_006bd550(*puVar12,0);
  if (iVar8 != 0x758f7eaf) {
    return 7;
  }
  lVar16 = *(long *)puVar7;
  if (lVar16 == 0) {
    return 7;
  }
  lVar16 = *(long *)(lVar16 + 0x330);
  if (lVar16 == 0) {
    return 7;
  }
  if (*(int *)(lVar16 + 0x244) == 0) {
    return 7;
  }
  local_78 = 0xfffe;
  FUN_0277d4ac(&local_78);
  puVar5 = PTR_DAT_04bb2010;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = 0;
  local_90 = 0;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  local_80 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_7c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  lVar16 = *(long *)puVar7;
  local_88 = local_98;
  if (lVar16 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)puVar6 + 0x18))
                          (*(long **)puVar6,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar12 + 7);
  local_a0 = FUN_017baf44();
  local_a0 = local_a0 & 1;
  psVar13 = (short *)FUN_01a5190c(&local_b0,6,&local_88,&local_98);
  puVar6 = PTR_DAT_04bb43c0;
  local_78._0_4_ = *(undefined4 *)psVar13;
  local_78._4_4_ = *(undefined4 *)(psVar13 + 2);
  if (*psVar13 == -2) {
    return 7;
  }
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_78);
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    return 7;
  }
  lVar23 = *(long *)(lVar23 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if (*(uint *)(lVar23 + 0x1d8) <= uVar9) {
    return 7;
  }
  if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return 7;
  }
  local_b8 = (uint *)0x0;
  local_c8 = PTR_DAT_04bc0510 + 0x10;
  local_c0 = (undefined4)local_78;
  uStack_bc = local_78._4_4_;
  uVar9 = FUN_0277d6c4(&local_c0);
  if (*(long *)puVar6 == 0) {
LAB_0093b44c:
    if (local_b8 != (uint *)0x0) goto LAB_0093b45c;
    puVar24 = (uint *)0x0;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,7);
    uVar9 = 0xbc;
    bVar19 = true;
LAB_0093b5d0:
    if (uVar9 != (uint)local_f0) {
      return 7;
    }
    if (bVar19) goto LAB_0093b998;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0093b44c;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(&local_78);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (puVar24 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar24 == (uint *)0x0)) goto LAB_0093b44c;
    local_b8 = puVar24;
LAB_0093b45c:
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,6);
    uVar9 = *local_b8;
    uVar15 = 0;
    if ((uVar9 != 0) && (local_b8 != (uint *)(ulong)uVar9)) {
      puVar24 = (uint *)((long)local_b8 - (long)(ulong)uVar9);
      uVar15 = 0;
      if (*puVar24 != 0) {
        uVar9 = puVar24[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
          lVar16 = 0xc;
          if (*(char *)((long)puVar24 + 10) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar24 + lVar16 + (ulong)(ushort)puVar24[2] * 8;
          if (lVar16 != 0) {
            uVar22 = 0;
            if ((ulong)uVar9 != 0) {
              uVar22 = (uint)((ulong)((long)local_b8 - lVar16) / (ulong)uVar9);
            }
            if (*puVar24 <= uVar22) {
              uVar22 = 0xffffffff;
            }
            if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2),
               uVar15 < 0xbd)) goto LAB_0093b4e8;
          }
        }
        uVar15 = 0;
      }
    }
LAB_0093b4e8:
    puVar24 = local_b8;
    if (uVar15 != 6) {
      uVar9 = 0;
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,7);
      uVar22 = *local_b8;
      if ((uVar22 != 0) && (local_b8 != (uint *)(ulong)uVar22)) {
        puVar20 = (uint *)((long)local_b8 - (long)(ulong)uVar22);
        uVar9 = 0;
        if (*puVar20 != 0) {
          uVar9 = puVar20[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar16 != 0) {
              uVar22 = 0;
              if ((ulong)uVar9 != 0) {
                uVar22 = (uint)((ulong)((long)local_b8 - lVar16) / (ulong)uVar9);
              }
              if (*puVar20 <= uVar22) {
                uVar22 = 0xffffffff;
              }
              if (uVar22 < *(uint *)PTR_DAT_04bc00c8) {
                uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar22 * 2);
                if (0xbc < uVar9) {
                  bVar19 = false;
                  uVar9 = 0;
                  goto LAB_0093b5d0;
                }
                goto LAB_0093b5cc;
              }
            }
          }
          uVar9 = 0;
        }
      }
LAB_0093b5cc:
      bVar19 = false;
      goto LAB_0093b5d0;
    }
  }
  puVar7 = PTR_DAT_04bbfe90;
  puVar6 = PTR_DAT_04bbfe88;
  uVar9 = *puVar24;
  if (uVar9 != 0) {
    cVar25 = *PTR_DAT_04bbfe88;
    do {
      if (cVar25 == '\0') {
        cVar25 = '\x01';
        *puVar6 = 1;
        memset(puVar7,0xff,0x1ac);
        uVar9 = *puVar24;
      }
      else {
        uVar22 = *(uint *)(puVar7 + 0x170);
        if (-1 < (int)uVar22) {
          if (((char *)((ulong)uVar22 + (long)puVar24) != (char *)0x0) &&
             (*(char *)((ulong)uVar22 + (long)puVar24) != '\0')) {
            iVar10 = FUN_0277d6c4(&local_78);
            iVar11 = FUN_01ae98d0(&local_c8);
            puStack_e8 = puVar5 + 0x10;
            local_e0 = 0;
            local_d0 = 0;
            local_f0 = PTR_DAT_04bbc1a0 + 0x10;
            local_d8 = puStack_e8;
            FUN_01afb480(&local_c8,&local_f0);
            iVar8 = (int)local_90 + (int)local_e0;
            local_d0._0_4_ = (int)local_d0 + (int)local_90;
            iVar1 = local_90._4_4_ + local_e0._4_4_;
            local_d0._4_4_ = local_d0._4_4_ + local_90._4_4_;
            iVar2 = iVar8;
            if ((int)local_d0 <= iVar8) {
              iVar2 = (int)local_d0;
            }
            if (iVar8 <= (int)local_d0) {
              iVar8 = (int)local_d0;
            }
            iVar3 = iVar1;
            if (local_d0._4_4_ <= iVar1) {
              iVar3 = local_d0._4_4_;
            }
            if (iVar1 <= local_d0._4_4_) {
              iVar1 = local_d0._4_4_;
            }
            local_e0 = CONCAT44(iVar3,iVar2);
            local_d0 = CONCAT44(iVar1,iVar8);
            fVar29 = *param_2 - ((float)iVar2 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5;
            fVar27 = param_2[2] - ((float)iVar3 * 5.0 + (float)iVar1 * 5.0 + 5.0) * 0.5;
            fVar26 = -fVar29;
            if (iVar11 != 3) {
              fVar28 = fVar29;
              fVar4 = fVar27;
              if (iVar11 == 1) {
                fVar28 = -fVar27;
                fVar4 = fVar29;
              }
              fVar26 = -fVar27;
              fVar27 = -fVar29;
              if (iVar11 != 2) {
                fVar26 = fVar4;
                fVar27 = fVar28;
              }
            }
            lVar16 = *(long *)PTR_DAT_04bb2228;
            uVar9 = *(uint *)(lVar16 + 0xdb8);
            if (0 < (int)uVar9) {
              uVar17 = 0;
              goto LAB_0093b7dc;
            }
          }
          break;
        }
        if (uVar22 != 0xffffffff) break;
      }
      lVar16 = (long)puVar24 - (ulong)uVar9;
      if (((ulong)uVar9 == 0) || (lVar16 == 0)) break;
      lVar23 = 0xc;
      if (*(char *)(lVar16 + 10) != '\0') {
        lVar23 = 0x1c;
      }
      if (lVar23 + lVar16 == 0) break;
      uVar17 = (ulong)*(ushort *)(lVar16 + 8);
      *(undefined4 *)(puVar7 + 0x170) = 0xfffffffe;
      if (uVar17 == 0) break;
      piVar21 = (int *)(lVar23 + lVar16 + 4);
      while (piVar21[-1] != -0x5b24697b) {
        piVar21 = piVar21 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto LAB_0093b998;
      }
      iVar8 = 0;
      if (*piVar21 != -1) {
        iVar8 = *piVar21;
      }
      *(int *)(puVar7 + 0x170) = iVar8;
      uVar9 = *puVar24;
      if (uVar9 == 0) break;
    } while( true );
  }
LAB_0093b998:
  uVar14 = FUN_01b022d0(&local_c8);
  return uVar14;
  while (uVar17 = uVar17 + 1, uVar9 != uVar17) {
LAB_0093b7dc:
    if (*(int *)(*(long *)(lVar16 + 0xdc0) + uVar17 * 4) == iVar10) {
      uVar22 = (uint)uVar17;
      if (uVar22 != 0xffffffff) {
        lVar23 = 0;
        if ((-1 < (int)uVar22) && ((int)uVar22 < *(int *)(lVar16 + 0xdd8))) {
          if (*(uint *)(lVar16 + 0xe10) <= uVar22) {
            uVar17 = 0;
          }
          lVar23 = *(long *)(lVar16 + 0xe18) + uVar17 * 0x28 + 8;
        }
        goto LAB_0093b838;
      }
      break;
    }
  }
  lVar23 = 0;
LAB_0093b838:
  uVar17 = 0;
  do {
    if (*(int *)(*(long *)(lVar16 + 0xdc0) + uVar17 * 4) == iVar10) {
      uVar9 = (uint)uVar17;
      if (((uVar9 != 0xffffffff) && (-1 < (int)uVar9)) && ((int)uVar9 < *(int *)(lVar16 + 0xdd8))) {
        uVar17 = uVar17 & 0xffffffff;
        if (*(uint *)(lVar16 + 0xe10) <= uVar9) {
          uVar17 = 0;
        }
        if ((lVar23 != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar16 + 0xe18) + uVar17 * 0x28 + 0x20), lVar16 != 0)) {
          fVar27 = fVar27 - (float)*(int *)(lVar23 + 0xc) * 5.0;
          fVar26 = fVar26 - (float)*(int *)(lVar23 + 0x10) * 5.0;
          uVar9 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
          if ((int)uVar9 < 0) {
            return 7;
          }
          if (*(uint *)(lVar23 + 4) <= uVar9) {
            return 7;
          }
          uVar22 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
          if ((int)uVar22 < 0) {
            return 7;
          }
          if (*(uint *)(lVar23 + 8) <= uVar22) {
            return 7;
          }
          pcVar18 = (char *)(lVar16 + (ulong)(uVar9 + *(uint *)(lVar23 + 4) * uVar22) * 4);
          fVar27 = fVar27 + (float)(int)uVar9 * -5.0;
          fVar26 = fVar26 + (float)(int)uVar22 * -5.0;
          fVar29 = fVar27 + fVar26 + -5.0;
          if (0.0 <= fVar26 - fVar27) {
            if (0.0 <= fVar29) {
              pcVar18 = pcVar18 + 2;
            }
            else {
              pcVar18 = pcVar18 + 1;
            }
          }
          else if (0.0 <= fVar29) {
            pcVar18 = pcVar18 + 3;
          }
          if (*pcVar18 != '\x1e') {
            return 7;
          }
        }
      }
      break;
    }
    uVar17 = uVar17 + 1;
  } while (uVar9 != uVar17);
  goto LAB_0093b998;
}

