
void FUN_03bc4d10(long param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  float *pfVar17;
  long *plVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_c0;
  float local_bc;
  undefined8 local_b8;
  float local_b0 [2];
  float *local_a8;
  float local_a0 [7];
  undefined4 local_84;
  
  plVar5 = (long *)PTR_DAT_04bc3ee8;
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  bVar3 = false;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0xb0) + 0x60);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 8) != lVar11)) {
      lVar6 = (long)*(int *)(lVar11 + 0x14);
      lVar15 = *(long *)(lVar11 + 8) - lVar6;
      do {
        if ((*(int *)(lVar15 + 0xc) != 0) && (*(int *)(lVar15 + 0xc) != 7)) {
          bVar3 = true;
          goto LAB_03bc4da8;
        }
        lVar15 = *(long *)(lVar15 + lVar6 + 8) - lVar6;
      } while (lVar15 != lVar11 - lVar6);
    }
    bVar3 = false;
  }
LAB_03bc4da8:
  if ((*(long *)(param_1 + 0xc0) != 0) &&
     (uVar10 = (ulong)*(uint *)(param_1 + 0xb8), 0 < (int)*(uint *)(param_1 + 0xb8))) {
    piVar12 = (int *)(*(long *)(param_1 + 0xc0) + 8);
    do {
      lVar11 = *(long *)(piVar12 + -2);
      if ((((lVar11 != 0) && (*piVar12 == *(int *)(lVar11 + 0x10))) && (*(int *)(lVar11 + 0xc) != 0)
          ) && (*(int *)(lVar11 + 0xc) != 7)) {
        bVar3 = true;
        goto LAB_03bc4e18;
      }
      piVar12 = piVar12 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if ((bool)(*(char *)(param_1 + 0x168) == '\0' & (bVar3 ^ 1U))) {
    return;
  }
LAB_03bc4e18:
  uVar14 = *(uint *)(param_1 + 200);
  if (0 < (int)uVar14) {
    uVar9 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0xd0);
      uVar8 = uVar9;
      if (uVar14 <= uVar9) {
        uVar8 = 0;
      }
      lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
      fVar20 = *(float *)(lVar15 + 0x28);
      if (*(float *)(lVar15 + 0x20) != fVar20) {
        *(float *)(lVar15 + 0x20) = *(float *)(lVar15 + 0x24);
        fVar21 = *(float *)(lVar15 + 0x24) +
                 *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * *(float *)(lVar15 + 0x2c);
        if (0.0 <= *(float *)(lVar15 + 0x2c)) {
          if (fVar20 < fVar21) goto LAB_03bc4ea8;
        }
        else if (fVar21 < fVar20) {
LAB_03bc4ea8:
          fVar21 = fVar20;
        }
        *(float *)(lVar15 + 0x24) = fVar21;
      }
      lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
      pfVar19 = (float *)(lVar15 + 0x38);
      fVar20 = *(float *)(lVar15 + 0x40);
      if (*pfVar19 != fVar20) {
        lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
        pfVar17 = (float *)(lVar15 + 0x3c);
        fVar21 = *pfVar17;
        *pfVar19 = fVar21;
        fVar24 = *(float *)(lVar15 + 0x44);
        fVar21 = fVar21 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar24;
        if (0.0 <= fVar24) {
          if (fVar20 < fVar21) goto LAB_03bc4ef4;
        }
        else if (fVar21 < fVar20) {
LAB_03bc4ef4:
          fVar21 = fVar20;
        }
        *pfVar17 = fVar21;
      }
      lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
      pfVar19 = (float *)(lVar15 + 0x50);
      fVar20 = *(float *)(lVar15 + 0x58);
      if (*pfVar19 != fVar20) {
        lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
        pfVar17 = (float *)(lVar15 + 0x54);
        fVar21 = *pfVar17;
        *pfVar19 = fVar21;
        fVar24 = *(float *)(lVar15 + 0x5c);
        fVar21 = fVar21 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar24;
        if (0.0 <= fVar24) {
          if (fVar20 < fVar21) goto LAB_03bc4f40;
        }
        else if (fVar21 < fVar20) {
LAB_03bc4f40:
          fVar21 = fVar20;
        }
        *pfVar17 = fVar21;
      }
      lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
      pfVar19 = (float *)(lVar15 + 0x68);
      fVar20 = *(float *)(lVar15 + 0x70);
      if (*pfVar19 != fVar20) {
        lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
        pfVar17 = (float *)(lVar15 + 0x6c);
        fVar21 = *pfVar17;
        *pfVar19 = fVar21;
        fVar24 = *(float *)(lVar15 + 0x74);
        fVar21 = fVar21 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar24;
        if (0.0 <= fVar24) {
          if (fVar20 < fVar21) goto LAB_03bc4f8c;
        }
        else if (fVar21 < fVar20) {
LAB_03bc4f8c:
          fVar21 = fVar20;
        }
        *pfVar17 = fVar21;
      }
      lVar15 = lVar11 + (ulong)uVar8 * 0xa8;
      pfVar19 = (float *)(lVar15 + 0x80);
      fVar20 = *(float *)(lVar15 + 0x88);
      if (*pfVar19 != fVar20) {
        lVar11 = lVar11 + (ulong)uVar8 * 0xa8;
        pfVar17 = (float *)(lVar11 + 0x84);
        fVar21 = *pfVar17;
        *pfVar19 = fVar21;
        fVar24 = *(float *)(lVar11 + 0x8c);
        fVar21 = fVar21 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar24;
        if (0.0 <= fVar24) {
          if (fVar20 < fVar21) goto LAB_03bc4e40;
        }
        else if (fVar21 < fVar20) {
LAB_03bc4e40:
          fVar21 = fVar20;
        }
        *pfVar17 = fVar21;
      }
      uVar14 = *(uint *)(param_1 + 200);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar14);
  }
  fVar20 = *(float *)(param_1 + 0x100);
  if (*(float *)(param_1 + 0xf8) != fVar20) {
    *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xfc);
    fVar21 = *(float *)(param_1 + 0xfc) +
             *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * *(float *)(param_1 + 0x104);
    if (0.0 <= *(float *)(param_1 + 0x104)) {
      if (fVar20 < fVar21) goto LAB_03bc5068;
    }
    else if (fVar21 < fVar20) {
LAB_03bc5068:
      fVar21 = fVar20;
    }
    *(float *)(param_1 + 0xfc) = fVar21;
  }
  fVar20 = *(float *)(param_1 + 0x118);
  if (*(float *)(param_1 + 0x110) != fVar20) {
    *(float *)(param_1 + 0x110) = *(float *)(param_1 + 0x114);
    fVar21 = *(float *)(param_1 + 0x114) +
             *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * *(float *)(param_1 + 0x11c);
    if (0.0 <= *(float *)(param_1 + 0x11c)) {
      if (fVar20 < fVar21) goto LAB_03bc50ac;
    }
    else if (fVar21 < fVar20) {
LAB_03bc50ac:
      fVar21 = fVar20;
    }
    *(float *)(param_1 + 0x114) = fVar21;
  }
  *(bool *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa0) == 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    if (bVar3) {
      return;
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xe4) = 0x7f7fffff7f7fffff;
  iVar4 = *(int *)(*(long *)(*plVar5 + 0x20) + 0x10);
  if (iVar4 == 0) {
    fVar21 = 0.0;
    fVar24 = 1.0;
    fVar20 = 0.0;
LAB_03bc5840:
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else {
    plVar18 = *(long **)(*(long *)(*plVar5 + 0x20) + 0x18);
    fVar21 = 3.4028235e+38;
    uVar14 = 0;
    fVar26 = -3.4028235e+38;
    plVar1 = plVar18 + iVar4;
    fVar24 = 3.4028235e+38;
    do {
      if ((int)*(uint *)(param_1 + 0x80) <= (int)uVar14) break;
      uVar9 = uVar14;
      if (*(uint *)(param_1 + 0x80) <= uVar14) {
        uVar9 = 0;
      }
      lVar11 = *plVar18;
      puVar7 = (uint *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 0x28);
      uVar9 = *puVar7;
      if (0 < (int)uVar9) {
        uVar8 = 0;
        do {
          uVar2 = uVar8;
          if (uVar9 <= uVar8) {
            uVar2 = 0;
          }
          uVar8 = uVar8 + 1;
          puVar13 = *(undefined8 **)(*(long *)(puVar7 + 2) + (ulong)uVar2 * 8);
          *puVar13 = 0;
          puVar13[1] = 0x7f7fffff00000000;
          *(undefined4 *)(puVar13 + 2) = 0x7f7fffff;
          *(undefined1 *)((long)puVar13 + 0x14) = 0;
          uVar9 = *puVar7;
        } while ((int)uVar8 < (int)uVar9);
      }
      if ((uVar14 < 0x10) && ((*(ushort *)(param_1 + 0x128) >> (ulong)(uVar14 & 0x1f) & 1) == 0)) {
        uVar9 = uVar14;
        if (*(uint *)(param_1 + 200) <= uVar14) {
          uVar9 = 0;
        }
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0xd0) + (ulong)uVar9 * 0xa8);
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0x10] = 0;
        puVar13[0x11] = 0;
        puVar13[0x13] = 0;
        puVar13[0x14] = 0;
        puVar7 = *(uint **)(param_1 + 0x1c0);
        if (puVar7 != (uint *)0x0) {
          uVar9 = uVar14;
          if (*puVar7 <= uVar14) {
            uVar9 = 0;
          }
          *(undefined4 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 4) = 0;
        }
      }
      else {
        nn::os::LockMutex((MutexType *)(param_1 + 400));
        for (lVar15 = *(long *)(param_1 + 0x98); lVar15 != param_1 + 0x90;
            lVar15 = *(long *)(lVar15 + 8)) {
          plVar5 = *(long **)(lVar15 + 0x10);
          if ((plVar5 != (long *)0x0) &&
             (uVar10 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar11,local_a0,local_b0),
             (uVar10 & 1) != 0)) {
            uVar9 = uVar14;
            if (*(uint *)(param_1 + 0x80) <= uVar14) {
              uVar9 = 0;
            }
            puVar7 = (uint *)(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 0x28);
            fVar20 = local_a0[1] * local_a0[1] + local_a0[0] * local_a0[0] +
                     local_a0[2] * local_a0[2];
            if (fVar20 < (float)puVar7[6]) {
              iVar4 = FUN_006f0400((ulong)local_a8 & 0xffffffff,local_b0[0]);
              uVar9 = 0x19;
              if (DAT_05aec0b8 == '\0') {
                uVar9 = 0x1a;
              }
              uVar9 = iVar4 + 0x40000000U >> (ulong)uVar9;
              if (*puVar7 <= uVar9) {
                uVar9 = 0;
              }
              pfVar19 = *(float **)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 8);
              if (fVar20 < pfVar19[3]) {
                pfVar19[3] = fVar20;
                *(undefined1 *)(pfVar19 + 5) = 1;
                *pfVar19 = local_a0[0];
                pfVar19[1] = local_a0[1];
                pfVar19[2] = local_a0[2];
                pfVar19[4] = local_a8._0_4_ * local_a8._0_4_ + local_b0[0] * local_b0[0];
              }
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 400));
        local_b0[0] = 1.4013e-45;
        local_a8 = local_a0;
        local_a0[0] = 0.0;
        local_a0[1] = 0.0;
        local_c0 = 0;
        local_bc = 1.0;
        local_b8 = 0;
        local_a0[2] = 0.0;
        local_a0[3] = 0.0;
        local_a0[4] = 0.0;
        local_a0[5] = 0.0;
        uVar9 = uVar14;
        if (*(uint *)(param_1 + 0x80) <= uVar14) {
          uVar9 = 0;
        }
        FUN_03bc6330(*(long *)(param_1 + 0x88) + (ulong)uVar9 * 0x28,local_b0,(long)&local_b8 + 4,
                     &local_b8,&local_bc,lVar11,1,&local_c0);
        plVar5 = (long *)PTR_DAT_04bc3ee8;
        local_84 = 0;
        lVar15 = *(long *)(param_1 + 0xd0);
        uVar9 = uVar14;
        if (*(uint *)(param_1 + 200) <= uVar14) {
          uVar9 = 0;
        }
        fVar20 = *(float *)(param_1 + 0x130) * 255.0;
        if (0.0 <= fVar20) {
          lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
          fVar22 = *local_a8;
          pfVar19 = (float *)(lVar6 + 0x20);
          fVar23 = *pfVar19;
          *(float *)(lVar6 + 0x28) = fVar22;
          if ((fVar20 == 0.0) || (fVar23 == fVar22)) {
            *pfVar19 = fVar22;
            lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
            *(float *)(lVar6 + 0x24) = fVar22;
            *(undefined4 *)(lVar6 + 0x2c) = 0;
          }
          else {
            fVar25 = fVar20;
            if (fVar22 - fVar23 <= 0.0) {
              fVar25 = -fVar20;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x2c) = fVar25;
            fVar23 = fVar23 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar25;
            if (0.0 <= fVar25) {
              if (fVar22 < fVar23) goto LAB_03bc53c8;
            }
            else if (fVar23 < fVar22) {
LAB_03bc53c8:
              fVar23 = fVar22;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x24) = fVar23;
          }
        }
        puVar16 = (undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8);
        *puVar16 = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x20);
        if (0.0 <= fVar20) {
          lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
          fVar22 = local_a8[1];
          pfVar19 = (float *)(lVar6 + 0x38);
          fVar23 = *pfVar19;
          *(float *)(lVar6 + 0x40) = fVar22;
          if ((fVar20 == 0.0) || (fVar23 == fVar22)) {
            *pfVar19 = fVar22;
            lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
            *(float *)(lVar6 + 0x3c) = fVar22;
            *(undefined4 *)(lVar6 + 0x44) = 0;
          }
          else {
            fVar25 = fVar20;
            if (fVar22 - fVar23 <= 0.0) {
              fVar25 = -fVar20;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x44) = fVar25;
            fVar23 = fVar23 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar25;
            if (0.0 <= fVar25) {
              if (fVar22 < fVar23) goto LAB_03bc547c;
            }
            else if (fVar23 < fVar22) {
LAB_03bc547c:
              fVar23 = fVar22;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x3c) = fVar23;
          }
        }
        puVar16[1] = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x38);
        if (0.0 <= fVar20) {
          lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
          fVar22 = local_a8[2];
          pfVar19 = (float *)(lVar6 + 0x50);
          fVar23 = *pfVar19;
          *(float *)(lVar6 + 0x58) = fVar22;
          if ((fVar20 == 0.0) || (fVar23 == fVar22)) {
            *pfVar19 = fVar22;
            lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
            *(float *)(lVar6 + 0x54) = fVar22;
            *(undefined4 *)(lVar6 + 0x5c) = 0;
          }
          else {
            fVar25 = fVar20;
            if (fVar22 - fVar23 <= 0.0) {
              fVar25 = -fVar20;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x5c) = fVar25;
            fVar23 = fVar23 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar25;
            if (0.0 <= fVar25) {
              if (fVar22 < fVar23) goto LAB_03bc552c;
            }
            else if (fVar23 < fVar22) {
LAB_03bc552c:
              fVar23 = fVar22;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x54) = fVar23;
          }
        }
        puVar16[2] = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x50);
        if (0.0 <= fVar20) {
          lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
          fVar22 = local_a8[3];
          pfVar19 = (float *)(lVar6 + 0x68);
          fVar23 = *pfVar19;
          *(float *)(lVar6 + 0x70) = fVar22;
          if ((fVar20 == 0.0) || (fVar23 == fVar22)) {
            *pfVar19 = fVar22;
            lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
            *(float *)(lVar6 + 0x6c) = fVar22;
            *(undefined4 *)(lVar6 + 0x74) = 0;
          }
          else {
            fVar25 = fVar20;
            if (fVar22 - fVar23 <= 0.0) {
              fVar25 = -fVar20;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x74) = fVar25;
            fVar23 = fVar23 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar25;
            if (0.0 <= fVar25) {
              if (fVar22 < fVar23) goto LAB_03bc55dc;
            }
            else if (fVar23 < fVar22) {
LAB_03bc55dc:
              fVar23 = fVar22;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x6c) = fVar23;
          }
        }
        puVar16[3] = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x68);
        if (0.0 <= fVar20) {
          lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
          fVar22 = local_a8[4];
          pfVar19 = (float *)(lVar6 + 0x80);
          fVar23 = *pfVar19;
          *(float *)(lVar6 + 0x88) = fVar22;
          if ((fVar20 == 0.0) || (fVar23 == fVar22)) {
            lVar6 = lVar15 + (ulong)uVar9 * 0xa8;
            *pfVar19 = fVar22;
            *(float *)(lVar6 + 0x84) = fVar22;
            *(undefined4 *)(lVar6 + 0x8c) = 0;
          }
          else {
            if (fVar22 - fVar23 <= 0.0) {
              fVar20 = -fVar20;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x8c) = fVar20;
            fVar23 = fVar23 + *(float *)(*(long *)(*plVar5 + 0x10) + 0x1c) * fVar20;
            if (0.0 <= fVar20) {
              if (fVar22 < fVar23) goto LAB_03bc568c;
            }
            else if (fVar23 < fVar22) {
LAB_03bc568c:
              fVar23 = fVar22;
            }
            *(float *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x84) = fVar23;
          }
        }
        puVar16[4] = *(undefined4 *)(lVar15 + (ulong)uVar9 * 0xa8 + 0x80);
        puVar7 = *(uint **)(param_1 + 0x1c0);
        if (local_b8._4_4_ <= fVar21) {
          fVar21 = local_b8._4_4_;
        }
        if ((float)local_b8 <= fVar24) {
          fVar24 = (float)local_b8;
        }
        if (fVar26 <= local_bc) {
          fVar26 = local_bc;
        }
        fVar20 = *(float *)(param_1 + 0xe4);
        if (*(float *)(lVar11 + 0x58) <= *(float *)(param_1 + 0xe4)) {
          fVar20 = *(float *)(lVar11 + 0x58);
        }
        *(float *)(param_1 + 0xe4) = fVar20;
        fVar20 = *(float *)(param_1 + 0xe8);
        if (*(float *)(lVar11 + 0x5c) <= *(float *)(param_1 + 0xe8)) {
          fVar20 = *(float *)(lVar11 + 0x5c);
        }
        *(float *)(param_1 + 0xe8) = fVar20;
        if (puVar7 != (uint *)0x0) {
          uVar9 = uVar14;
          if (*puVar7 <= uVar14) {
            uVar9 = 0;
          }
          *(undefined4 *)(*(long *)(puVar7 + 2) + (ulong)uVar9 * 4) = local_c0;
        }
      }
      plVar18 = plVar18 + 1;
      uVar14 = uVar14 + 1;
    } while (plVar18 != plVar1);
    fVar20 = 0.0;
    if (fVar21 != 3.4028235e+38) {
      fVar20 = fVar21;
    }
    fVar21 = 0.0;
    if (fVar24 != 3.4028235e+38) {
      fVar21 = fVar24;
    }
    fVar24 = 1.0;
    if (fVar26 != -3.4028235e+38) {
      fVar24 = fVar26;
    }
    if (*(float *)(param_1 + 0xe4) == 3.4028235e+38) goto LAB_03bc5840;
  }
  if (*(float *)(param_1 + 0xe8) == 3.4028235e+38) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  fVar23 = *(float *)(param_1 + 0x134);
  fVar26 = *(float *)(param_1 + 0xf8);
  if (0.0 <= fVar23) {
    *(float *)(param_1 + 0x100) = fVar20;
    if ((fVar23 == 0.0) || (fVar26 == fVar20)) {
      *(float *)(param_1 + 0xf8) = fVar20;
      *(float *)(param_1 + 0xfc) = fVar20;
      *(undefined4 *)(param_1 + 0x104) = 0;
      fVar26 = fVar20;
    }
    else {
      lVar11 = *plVar5;
      if (fVar20 - fVar26 <= 0.0) {
        fVar23 = -fVar23;
      }
      *(float *)(param_1 + 0x104) = fVar23;
      fVar22 = fVar26 + *(float *)(*(long *)(lVar11 + 0x10) + 0x1c) * fVar23;
      if (0.0 <= fVar23) {
        if (fVar20 < fVar22) goto LAB_03bc58b0;
      }
      else if (fVar22 < fVar20) {
LAB_03bc58b0:
        fVar22 = fVar20;
      }
      *(float *)(param_1 + 0xfc) = fVar22;
    }
  }
  *(float *)(param_1 + 0xd8) = fVar26;
  fVar20 = *(float *)(param_1 + 0x138);
  fVar26 = *(float *)(param_1 + 0x110);
  if (fVar20 < 0.0) goto LAB_03bc5940;
  *(float *)(param_1 + 0x118) = fVar21;
  if ((fVar20 == 0.0) || (fVar26 == fVar21)) {
    *(float *)(param_1 + 0x110) = fVar21;
    *(float *)(param_1 + 0x114) = fVar21;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    fVar26 = fVar21;
    goto LAB_03bc5940;
  }
  lVar11 = *plVar5;
  if (fVar21 - fVar26 <= 0.0) {
    fVar20 = -fVar20;
  }
  *(float *)(param_1 + 0x11c) = fVar20;
  fVar23 = fVar26 + *(float *)(*(long *)(lVar11 + 0x10) + 0x1c) * fVar20;
  if (0.0 <= fVar20) {
    if (fVar21 < fVar23) goto LAB_03bc5924;
  }
  else if (fVar23 < fVar21) {
LAB_03bc5924:
    fVar23 = fVar21;
  }
  *(float *)(param_1 + 0x114) = fVar23;
LAB_03bc5940:
  *(float *)(param_1 + 0xdc) = fVar26;
  *(float *)(param_1 + 0xe0) = fVar24;
  *(undefined1 *)(param_1 + 0x158) = 0;
  return;
}

