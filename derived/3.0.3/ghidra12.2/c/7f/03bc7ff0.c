
/* WARNING: Removing unreachable block (ram,0x03bc8c6c) */
/* WARNING: Removing unreachable block (ram,0x03bc83b8) */
/* WARNING: Removing unreachable block (ram,0x03bc8884) */
/* WARNING: Removing unreachable block (ram,0x03bc88a8) */
/* WARNING: Removing unreachable block (ram,0x03bc83e0) */
/* WARNING: Removing unreachable block (ram,0x03bc8c9c) */
/* WARNING: Removing unreachable block (ram,0x03bc85dc) */
/* WARNING: Removing unreachable block (ram,0x03bc857c) */
/* WARNING: Removing unreachable block (ram,0x03bc88d0) */
/* WARNING: Removing unreachable block (ram,0x03bc8bd8) */
/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc85a4) */
/* WARNING: Removing unreachable block (ram,0x03bc8cec) */
/* WARNING: Removing unreachable block (ram,0x03bc8bb0) */
/* WARNING: Removing unreachable block (ram,0x03bc8604) */
/* WARNING: Removing unreachable block (ram,0x03bc8ec8) */
/* WARNING: Removing unreachable block (ram,0x03bc8c00) */
/* WARNING: Removing unreachable block (ram,0x03bc8cc4) */
/* WARNING: Removing unreachable block (ram,0x03bc8eec) */
/* WARNING: Removing unreachable block (ram,0x03bc8f14) */
/* WARNING: Removing unreachable block (ram,0x03bc8f44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bc7ff0(long param_1)

{
  float *pfVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  uint local_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  
  puVar17 = *(uint **)(*(long *)PTR_DAT_04bc3ee8 + 0x10);
  uVar18 = 0x40;
  if (*PTR_DAT_04bd22e0 != '\0') {
    uVar18 = 0x80;
  }
  iVar19 = 0x2000000;
  if (*PTR_DAT_04bd22e0 != '\0') {
    iVar19 = 0x1000000;
  }
  lVar21 = *(long *)(*(long *)(puVar17 + 2) + 8);
  if (lVar21 == 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      uVar16 = 0;
      do {
        uVar20 = 0;
        lVar21 = 0;
        while( true ) {
          do {
            uVar7 = uVar16;
            if (**(uint **)(param_1 + 8) <= uVar16) {
              uVar7 = 0;
            }
            puVar17 = (uint *)(*(long *)(*(uint **)(param_1 + 8) + 2) + (ulong)uVar7 * 0x300 +
                              lVar21);
            lVar21 = lVar21 + 0x10;
            uVar7 = uVar20;
            if (*puVar17 <= uVar20) {
              uVar7 = 0;
            }
            puVar5 = (undefined4 *)
                     (*(long *)(puVar17 + 2) + (long)(int)uVar7 + (long)(int)uVar7 * 4);
            *puVar5 = 0xb4b4;
            *(undefined1 *)(puVar5 + 1) = 0;
          } while (lVar21 != 0x300);
          uVar20 = uVar20 + 1;
          if (uVar20 == uVar18) break;
          lVar21 = 0;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    uVar16 = *puVar17;
    local_c0 = CONCAT44((int)(local_c0 >> 0x20),uVar16);
    puVar6 = puVar17 + 0x65 + uVar16;
    if (2 < uVar16) {
      puVar6 = puVar17 + 0x65;
    }
    uVar20 = *puVar6;
    uVar16 = 0;
    if (*(long *)(lVar21 + 0x10) != 0) {
      uVar16 = *(uint *)(lVar21 + 8);
    }
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar16) {
      uVar16 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x1c) = uVar16;
    if (0 < (int)uVar16) {
      uVar7 = (uVar18 - 1) - (uVar18 - 1 >> 1 & 0x55555555);
      uVar28 = 0;
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      do {
        if ((*(long *)(lVar21 + 0x10) == 0) || (uVar22 = *(uint *)(lVar21 + 8), uVar22 == 0)) {
LAB_03bc8fe4:
          uVar22 = 0;
          do {
            lVar27 = 0;
            do {
              uVar10 = uVar28;
              if (**(uint **)(param_1 + 8) <= uVar28) {
                uVar10 = 0;
              }
              puVar17 = (uint *)(*(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300 + lVar27);
              lVar27 = lVar27 + 0x10;
              uVar11 = uVar22;
              if (*puVar17 <= uVar22) {
                uVar11 = 0;
              }
              puVar5 = (undefined4 *)
                       (*(long *)(puVar17 + 2) + (long)(int)uVar11 + (long)(int)uVar11 * 4);
              *puVar5 = 0xb4b4;
              *(undefined1 *)(puVar5 + 1) = 0;
            } while (lVar27 != 0x300);
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar18);
          fVar38 = 1.414;
        }
        else {
          uVar11 = (uint)uVar28;
          if (-1 < (int)*(uint *)(lVar21 + 0x18)) {
            uVar11 = *(uint *)(lVar21 + 0x18);
          }
          if ((int)uVar22 <= (int)uVar11) {
            uVar11 = 0;
          }
          if ((uVar22 <= uVar11) ||
             (plVar26 = *(long **)(*(long *)(lVar21 + 0x10) + (long)(int)uVar11 * 8),
             plVar26 == (long *)0x0)) goto LAB_03bc8fe4;
          fVar35 = *(float *)((long)plVar26 + 0x1c);
          fVar38 = 0.0;
          uVar22 = 0;
          uVar11 = (uint)(fVar35 * 2.1474836e+09);
          fVar37 = 1.0 - fVar35;
          if (uVar11 < 2) {
            uVar11 = 1;
          }
          fVar36 = (float)uVar11 + (float)uVar11;
          do {
            iVar23 = (uVar22 << (ulong)(0x20 - (uVar7 + (uVar7 >> 4) & 0xf0f0f0f) & 0x1f)) + iVar19;
            uVar10 = (**(code **)(*plVar26 + 0x28))(plVar26);
            if ((uVar10 & 1) == 0) {
              if (*PTR_DAT_04bc43e8 == '\0') {
                iVar2 = iVar23 + -0x40000000;
                uVar10 = uVar28;
                if (**(uint **)(param_1 + 8) <= uVar28) {
                  uVar10 = 0;
                }
                puVar17 = (uint *)(*(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300);
                lVar27 = *(long *)(puVar17 + 2);
                uVar8 = uVar22;
                if (*puVar17 <= uVar22) {
                  uVar8 = 0;
                }
                if (fVar35 == 0.0) {
                  iVar14 = 0;
                  local_b0 = 0.0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  local_e0 = CONCAT44(local_e0._4_4_,3);
                  if (iVar2 < 0) {
                    local_e0 = (ulong)local_e0._4_4_ << 0x20;
                    local_d0 = 3;
                    iVar14 = -0x80000000;
                  }
                  fVar29 = (float)(uint)(iVar14 + iVar2) * 4.656613e-10;
                  if (uVar20 == 1) {
                    fVar32 = SQRT(1.0 - fVar29);
                    if (NAN(fVar32)) {
                      fVar32 = sqrtf(1.0 - fVar29);
                    }
                    fVar30 = SQRT(fVar29);
                    if (NAN(fVar30)) {
                      fVar30 = sqrtf(fVar29);
                    }
                  }
                  else {
                    pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                                      (ulong)((uint)(int)(fVar29 * 1.0737418e+09) >> 0x18) * 0x10);
                    fVar29 = (float)((int)(fVar29 * 1.0737418e+09) & 0xffffff) * 5.9604645e-08;
                    fVar30 = *pfVar1 + fVar29 * pfVar1[1];
                    fVar32 = pfVar1[2] + fVar29 * pfVar1[3];
                  }
                  *(float *)((long)&local_c0 + (long)(int)local_d0 * 4) = fVar32;
                  *(float *)((long)&local_c0 + (long)(int)local_e0 * 4) = fVar30;
                }
                else {
                  local_b0 = 0.0;
                  local_d0 = iVar2 - uVar11;
                  local_c8 = 0xffffffff;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  uStack_cc = uVar11 + 0xbfffffff + iVar23;
                  if (uStack_cc < local_d0) {
                    local_c8 = CONCAT44(0xffffffff,local_d0);
                    local_d0 = 0;
                  }
                  local_d8 = 3;
                  local_d4 = 0;
                  local_e0 = 0x7fffffff00000000;
                  FUN_03bc97c4(fVar36,&local_c0,(long)&uStack_b8 + 4,&local_e0,&local_d0,uVar20);
                  local_d8 = 0;
                  local_d4 = 3;
                  local_e0 = 0xffffffff80000000;
                  FUN_03bc97c4(fVar36,(long)&uStack_b8 + 4,&local_c0,&local_e0,&local_d0,uVar20);
                  if (uVar20 == 1) {
                    fVar29 = SQRT((float)local_c0);
                    if (NAN(fVar29)) {
                      fVar29 = sqrtf((float)local_c0);
                    }
                    local_c0._0_4_ = fVar29;
                    if (NAN(SQRT(uStack_b8._4_4_))) {
                      uStack_b8._4_4_ = sqrtf(uStack_b8._4_4_);
                    }
                    else {
                      uStack_b8._4_4_ = SQRT(uStack_b8._4_4_);
                    }
                  }
                  else {
                  }
                }
                iVar14 = 1;
                lVar24 = lVar27 + (long)(int)uVar8 * 5;
                lVar25 = 0;
                *(undefined1 *)(lVar24 + 4) = 0;
                *(undefined2 *)(lVar24 + 2) = 0;
                local_c0._0_4_ = (float)local_c0 * 255.0;
                uStack_b8._4_4_ = uStack_b8._4_4_ * 255.0;
                fVar29 = 255.0;
                if ((float)local_c0 <= 255.0) {
                  fVar29 = (float)local_c0;
                }
                fVar30 = 0.0;
                if (0.0 <= (float)local_c0) {
                  fVar30 = fVar29;
                }
                fVar29 = 255.0;
                if (uStack_b8._4_4_ <= 255.0) {
                  fVar29 = uStack_b8._4_4_;
                }
                fVar32 = 0.0;
                if (0.0 <= uStack_b8._4_4_) {
                  fVar32 = fVar29;
                }
                *(char *)(lVar24 + 1) = (char)(int)fVar30;
                *(char *)(lVar27 + (long)(int)uVar8 + (long)(int)uVar8 * 4) = (char)(int)fVar32;
                do {
                  uVar10 = uVar28;
                  if (**(uint **)(param_1 + 8) <= uVar28) {
                    uVar10 = 0;
                  }
                  lVar27 = *(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300 + lVar25;
                  lVar24 = *(long *)(lVar27 + 0x18);
                  local_b0 = 0.0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_c8 = 0xffffffff;
                  uVar8 = uVar22;
                  if (*(uint *)(lVar27 + 0x10) <= uVar22) {
                    uVar8 = 0;
                  }
                  uVar15 = (uint)((fVar35 + fVar37 * ((float)iVar14 / 47.0)) * 2.1474836e+09);
                  if (uVar15 < 2) {
                    uVar15 = 1;
                  }
                  local_d0 = iVar2 - uVar15;
                  uStack_cc = iVar23 + -0x40000001 + uVar15;
                  if (uStack_cc < local_d0) {
                    local_c8 = CONCAT44(0xffffffff,local_d0);
                    local_d0 = 0;
                  }
                  local_d8 = 3;
                  local_d4 = 0;
                  local_e0 = 0x7fffffff00000000;
                  fVar29 = (float)uVar15 + (float)uVar15;
                  FUN_03bc97c4(fVar29,&local_c0,(long)&uStack_b8 + 4,&local_e0,&local_d0,uVar20);
                  local_d8 = 0;
                  local_d4 = 3;
                  local_e0 = 0xffffffff80000000;
                  FUN_03bc97c4(fVar29,(long)&uStack_b8 + 4,&local_c0,&local_e0,&local_d0,uVar20);
                  if (uVar20 == 1) {
                    fVar29 = SQRT((float)local_c0);
                    if (NAN(fVar29)) {
                      fVar29 = sqrtf((float)local_c0);
                    }
                    if (NAN(SQRT(uStack_b8._4_4_))) {
                      fVar30 = sqrtf(uStack_b8._4_4_);
                    }
                    else {
                      fVar30 = SQRT(uStack_b8._4_4_);
                    }
                  }
                  else {
                    fVar29 = (float)local_c0;
                    fVar30 = uStack_b8._4_4_;
                  }
                  lVar25 = lVar25 + 0x10;
                  iVar14 = iVar14 + 1;
                  lVar27 = lVar24 + (long)(int)uVar8 * 5;
                  *(undefined1 *)(lVar27 + 4) = 0;
                  *(undefined2 *)(lVar27 + 2) = 0;
                  fVar29 = fVar29 * 255.0;
                  fVar30 = fVar30 * 255.0;
                  fVar32 = 255.0;
                  if (fVar29 <= 255.0) {
                    fVar32 = fVar29;
                  }
                  fVar33 = 0.0;
                  if (0.0 <= fVar29) {
                    fVar33 = fVar32;
                  }
                  fVar29 = 255.0;
                  if (fVar30 <= 255.0) {
                    fVar29 = fVar30;
                  }
                  fVar32 = 0.0;
                  if (0.0 <= fVar30) {
                    fVar32 = fVar29;
                  }
                  *(char *)(lVar27 + 1) = (char)(int)fVar33;
                  *(char *)(lVar24 + (long)(int)uVar8 + (long)(int)uVar8 * 4) = (char)(int)fVar32;
                } while (lVar25 != 0x2f0);
              }
              else {
                uVar8 = iVar23 - *(int *)((long)plVar26 + 0x24);
                uVar10 = uVar28;
                if (**(uint **)(param_1 + 8) <= uVar28) {
                  uVar10 = 0;
                }
                puVar17 = (uint *)(*(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300);
                lVar27 = *(long *)(puVar17 + 2);
                uVar15 = uVar22;
                if (*puVar17 <= uVar22) {
                  uVar15 = 0;
                }
                puVar4 = (undefined1 *)(lVar27 + (long)(int)uVar15 + (long)(int)uVar15 * 4);
                if (fVar35 == 0.0) {
                  local_b0 = 0.0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d4 = _DAT_041022b0;
                  local_e0 = CONCAT44(local_e0._4_4_,_DAT_04102370);
                  local_d0 = 0;
                  uVar13 = *(uint *)((long)plVar26 + 0x2c);
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                  local_d0 = 1;
                  if ((uVar8 < uVar13) || (uVar9 = (int)plVar26[6] - 1, uVar9 < uVar8)) {
                    local_d4 = DAT_041022b4;
                    local_e0 = CONCAT44(local_e0._4_4_,DAT_04102374);
                    local_d0 = 1;
                    uVar13 = *(uint *)(plVar26 + 6);
                    (**(code **)(*plVar26 + 0x18))(plVar26);
                    local_d0 = 2;
                    if ((uVar13 <= uVar8) &&
                       (uVar9 = *(int *)((long)plVar26 + 0x34) - 1, uVar8 <= uVar9))
                    goto LAB_03bc8d38;
                    local_d4 = DAT_041022b8;
                    local_e0 = CONCAT44(local_e0._4_4_,DAT_04102378);
                    local_d0 = 2;
                    uVar13 = *(uint *)((long)plVar26 + 0x34);
                    (**(code **)(*plVar26 + 0x18))(plVar26);
                    local_d0 = 3;
                    if ((uVar13 <= uVar8) && (uVar9 = (int)plVar26[7] - 1, uVar8 <= uVar9))
                    goto LAB_03bc8d38;
                    local_d4 = DAT_041022bc;
                    local_e0 = CONCAT44(local_e0._4_4_,DAT_0410237c);
                    local_d0 = 3;
                    uVar13 = *(uint *)(plVar26 + 7);
                    uVar10 = (**(code **)(*plVar26 + 0x18))(plVar26);
                    uVar9 = 0xffffffff;
                    if ((uVar10 & 1) != 0) {
                      local_d0 = 4;
                      uVar9 = *(int *)((long)plVar26 + 0x3c) - 1;
                    }
                    if ((uVar13 <= uVar8) && (uVar8 <= uVar9)) goto LAB_03bc8d38;
                    fVar30 = 0.0;
                    fVar29 = 0.0;
                  }
                  else {
LAB_03bc8d38:
                    fVar29 = (float)(uVar8 - uVar13) / (float)((uVar9 - uVar13) + 1);
                    *(float *)((long)&local_c0 + (long)(int)local_e0 * 4) =
                         *(float *)((long)&local_c0 + (long)(int)local_e0 * 4) + (1.0 - fVar29);
                    *(float *)((long)&local_c0 + (long)local_d4 * 4) =
                         fVar29 + *(float *)((long)&local_c0 + (long)local_d4 * 4);
                    fVar29 = (float)local_c0;
                    fVar30 = uStack_b8._4_4_;
                  }
                  fVar32 = SQRT(fVar29);
                  if (NAN(fVar32)) {
                    fVar32 = sqrtf(fVar29);
                  }
                  fVar29 = SQRT(fVar30);
                  if (NAN(fVar29)) {
                    fVar29 = sqrtf(fVar30);
                  }
                  lVar27 = lVar27 + (long)(int)uVar15 * 5;
                  *(undefined1 *)(lVar27 + 4) = 0;
                  *(undefined2 *)(lVar27 + 2) = 0;
                  fVar32 = fVar32 * 255.0;
                  fVar29 = fVar29 * 255.0;
                  fVar30 = 255.0;
                  if (fVar32 <= 255.0) {
                    fVar30 = fVar32;
                  }
                  fVar33 = 0.0;
                  if (0.0 <= fVar32) {
                    fVar33 = fVar30;
                  }
                  fVar30 = 255.0;
                  if (fVar29 <= 255.0) {
                    fVar30 = fVar29;
                  }
                  fVar32 = 0.0;
                  if (0.0 <= fVar29) {
                    fVar32 = fVar30;
                  }
                  *(char *)(lVar27 + 1) = (char)(int)fVar33;
                  *puVar4 = (char)(int)fVar32;
                }
                else {
                  FUN_03bc9418(fVar35,puVar4,plVar26,uVar8);
                }
                lVar27 = 0;
                iVar23 = 1;
                do {
                  uVar10 = uVar28;
                  if (**(uint **)(param_1 + 8) <= uVar28) {
                    uVar10 = 0;
                  }
                  lVar25 = *(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300 + lVar27;
                  uVar15 = uVar22;
                  if (*(uint *)(lVar25 + 0x10) <= uVar22) {
                    uVar15 = 0;
                  }
                  FUN_03bc9418(fVar35 + fVar37 * ((float)iVar23 / 47.0),
                               *(long *)(lVar25 + 0x18) + (long)(int)uVar15 + (long)(int)uVar15 * 4,
                               plVar26,uVar8);
                  lVar27 = lVar27 + 0x10;
                  iVar23 = iVar23 + 1;
                } while (lVar27 != 0x2f0);
              }
            }
            else {
              uVar8 = iVar23 - *(int *)((long)plVar26 + 0x24);
              uVar10 = uVar28;
              if (**(uint **)(param_1 + 8) <= uVar28) {
                uVar10 = 0;
              }
              puVar17 = (uint *)(*(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300);
              lVar27 = *(long *)(puVar17 + 2);
              uVar15 = uVar22;
              if (*puVar17 <= uVar22) {
                uVar15 = 0;
              }
              puVar4 = (undefined1 *)(lVar27 + (long)(int)uVar15 + (long)(int)uVar15 * 4);
              if (fVar35 == 0.0) {
                local_b0 = 0.0;
                local_c0 = 0;
                uStack_b8 = 0;
                uVar9 = (**(code **)(*plVar26 + 0x18))(plVar26);
                local_d0 = 0;
                uVar13 = *(uint *)((long)plVar26 + 0x2c);
                (**(code **)(*plVar26 + 0x18))(plVar26);
                local_d0 = 1;
                if ((uVar8 < uVar13) || (uVar12 = (int)plVar26[6] - 1, uVar12 < uVar8)) {
                  lVar25 = 1;
                  local_d0 = 1;
                  uVar13 = *(uint *)(plVar26 + 6);
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                  local_d0 = 2;
                  if ((uVar13 <= uVar8) &&
                     (uVar12 = *(int *)((long)plVar26 + 0x34) - 1, uVar8 <= uVar12))
                  goto LAB_03bc8624;
                  lVar25 = 2;
                  local_d0 = 2;
                  uVar13 = *(uint *)((long)plVar26 + 0x34);
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                  local_d0 = 3;
                  if ((uVar13 <= uVar8) && (uVar12 = (int)plVar26[7] - 1, uVar8 <= uVar12))
                  goto LAB_03bc8624;
                  local_d0 = 3;
                  uVar13 = *(uint *)(plVar26 + 7);
                  uVar10 = (**(code **)(*plVar26 + 0x18))(plVar26);
                  uVar12 = 0xffffffff;
                  if ((uVar10 & 1) != 0) {
                    local_d0 = 4;
                    uVar12 = *(int *)((long)plVar26 + 0x3c) - 1;
                  }
                  if ((uVar13 <= uVar8) && (uVar8 <= uVar12)) {
                    lVar25 = 3;
                    goto LAB_03bc8624;
                  }
                  fVar29 = 0.0;
                  if ((uVar9 & 1) != 0) {
                    lVar25 = 4;
                    local_d0 = 4;
                    uVar13 = *(uint *)((long)plVar26 + 0x3c);
                    (**(code **)(*plVar26 + 0x18))(plVar26);
                    if (uVar13 <= uVar8) {
                      uVar12 = 0xffffffff;
                      goto LAB_03bc8624;
                    }
                  }
                }
                else {
                  lVar25 = 0;
LAB_03bc8624:
                  fVar29 = (float)(uVar8 - uVar13) / (float)((uVar12 - uVar13) + 1);
                  if (uVar20 == 1) {
                    fVar30 = SQRT(1.0 - fVar29);
                    if (NAN(fVar30)) {
                      fVar30 = sqrtf(1.0 - fVar29);
                    }
                    fVar29 = SQRT(fVar29);
                  }
                  else {
                    pfVar1 = (float *)(PTR_DAT_04bb2d00 +
                                      (ulong)((uint)(int)(fVar29 * 1.0737418e+09) >> 0x18) * 0x10);
                    fVar30 = (float)((int)(fVar29 * 1.0737418e+09) & 0xffffff) * 5.9604645e-08;
                    fVar29 = *pfVar1 + fVar30 * pfVar1[1];
                    fVar30 = pfVar1[2] + fVar30 * pfVar1[3];
                  }
                  *(float *)((long)&local_c0 + lVar25 * 4) = fVar30;
                  uVar13 = 3;
                  if ((uVar9 & 1) != 0) {
                    uVar13 = 4;
                  }
                  if ((uint)lVar25 < uVar13) {
                    *(float *)((long)&local_c0 + (ulong)((uint)lVar25 + 1) * 4) = fVar29;
                    fVar29 = (float)local_c0;
                  }
                }
                lVar27 = lVar27 + (long)(int)uVar15 * 5;
                fVar34 = local_b0 * 255.0;
                fVar33 = *(float *)(plVar26 + 4) * local_c0._4_4_ * 255.0;
                fVar32 = *(float *)(plVar26 + 4) * (float)uStack_b8 * 255.0;
                fVar30 = 255.0;
                if (fVar34 <= 255.0) {
                  fVar30 = fVar34;
                }
                fVar31 = 0.0;
                if (0.0 <= fVar34) {
                  fVar31 = fVar30;
                }
                fVar29 = fVar29 * 255.0;
                fVar30 = 255.0;
                if (fVar29 <= 255.0) {
                  fVar30 = fVar29;
                }
                *(char *)(lVar27 + 4) = (char)(int)fVar31;
                fVar34 = 0.0;
                if (0.0 <= fVar29) {
                  fVar34 = fVar30;
                }
                fVar29 = 255.0;
                if (fVar33 <= 255.0) {
                  fVar29 = fVar33;
                }
                fVar30 = 0.0;
                if (0.0 <= fVar33) {
                  fVar30 = fVar29;
                }
                fVar29 = 255.0;
                if (fVar32 <= 255.0) {
                  fVar29 = fVar32;
                }
                fVar33 = 0.0;
                if (0.0 <= fVar32) {
                  fVar33 = fVar29;
                }
                *(char *)(lVar27 + 1) = (char)(int)fVar34;
                *(char *)(lVar27 + 3) = (char)(int)fVar30;
                *(char *)(lVar27 + 2) = (char)(int)fVar33;
                fVar30 = uStack_b8._4_4_ * 255.0;
                fVar29 = 255.0;
                if (fVar30 <= 255.0) {
                  fVar29 = fVar30;
                }
                fVar32 = 0.0;
                if (0.0 <= fVar30) {
                  fVar32 = fVar29;
                }
                *puVar4 = (char)(int)fVar32;
              }
              else {
                FUN_03bc9140(fVar35,puVar4,plVar26,uVar8,uVar20);
              }
              lVar27 = 0;
              iVar23 = 1;
              do {
                uVar10 = uVar28;
                if (**(uint **)(param_1 + 8) <= uVar28) {
                  uVar10 = 0;
                }
                lVar25 = *(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300 + lVar27;
                uVar15 = uVar22;
                if (*(uint *)(lVar25 + 0x10) <= uVar22) {
                  uVar15 = 0;
                }
                FUN_03bc9140(fVar35 + fVar37 * ((float)iVar23 / 47.0),
                             *(long *)(lVar25 + 0x18) + (long)(int)uVar15 + (long)(int)uVar15 * 4,
                             plVar26,uVar8,uVar20);
                lVar27 = lVar27 + 0x10;
                iVar23 = iVar23 + 1;
              } while (lVar27 != 0x2f0);
            }
            local_c0 = local_c0 & 0xffffffff00000000;
            uVar10 = uVar28;
            if (**(uint **)(param_1 + 8) <= uVar28) {
              uVar10 = 0;
            }
            lVar27 = *(long *)(*(uint **)(param_1 + 8) + 2) + uVar10 * 0x300;
            uVar8 = uVar22;
            if (*(uint *)(lVar27 + 0x2f0) <= uVar22) {
              uVar8 = 0;
            }
            uVar22 = uVar22 + 1;
            pbVar3 = (byte *)(*(long *)(lVar27 + 0x2f8) + (long)(int)uVar8 + (long)(int)uVar8 * 4);
            fVar29 = (float)NEON_ucvtf((uint)*pbVar3);
            fVar30 = (float)NEON_ucvtf((uint)pbVar3[1]);
            fVar32 = (float)NEON_ucvtf((uint)pbVar3[2]);
            fVar33 = (float)NEON_ucvtf((uint)pbVar3[3]);
            fVar34 = (float)NEON_ucvtf((uint)pbVar3[4]);
            fVar29 = fVar29 / 255.0 + fVar30 / 255.0 + fVar32 / 255.0 + fVar33 / 255.0 +
                     fVar34 / 255.0;
            if (fVar29 <= fVar38) {
              fVar29 = fVar38;
            }
            fVar38 = fVar29;
          } while (uVar22 != uVar18);
        }
        *(float *)(*(long *)(param_1 + 0x10) + uVar28 * 4) = fVar38;
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar16);
    }
  }
  return;
}

