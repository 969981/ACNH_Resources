
void FUN_03f23ce0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_c4;
  float local_c0;
  float local_bc [3];
  float *local_b0;
  float local_a8 [6];
  float local_88 [2];
  
  puVar2 = PTR_DAT_04bc3ee8;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar10) {
    uVar3 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x28);
      uVar1 = uVar3;
      if (uVar10 <= uVar3) {
        uVar1 = 0;
      }
      lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
      fVar16 = *(float *)(lVar12 + 0x28);
      if (*(float *)(lVar12 + 0x20) != fVar16) {
        *(float *)(lVar12 + 0x20) = *(float *)(lVar12 + 0x24);
        fVar18 = *(float *)(lVar12 + 0x24) +
                 *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * *(float *)(lVar12 + 0x2c);
        if (0.0 <= *(float *)(lVar12 + 0x2c)) {
          if (fVar16 < fVar18) goto LAB_03f23da8;
        }
        else if (fVar18 < fVar16) {
LAB_03f23da8:
          fVar18 = fVar16;
        }
        *(float *)(lVar12 + 0x24) = fVar18;
      }
      lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
      pfVar14 = (float *)(lVar12 + 0x38);
      fVar16 = *(float *)(lVar12 + 0x40);
      if (*pfVar14 != fVar16) {
        lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
        pfVar13 = (float *)(lVar12 + 0x3c);
        fVar18 = *pfVar13;
        *pfVar14 = fVar18;
        fVar21 = *(float *)(lVar12 + 0x44);
        fVar18 = fVar18 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar21;
        if (0.0 <= fVar21) {
          if (fVar16 < fVar18) goto LAB_03f23df4;
        }
        else if (fVar18 < fVar16) {
LAB_03f23df4:
          fVar18 = fVar16;
        }
        *pfVar13 = fVar18;
      }
      lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
      pfVar14 = (float *)(lVar12 + 0x50);
      fVar16 = *(float *)(lVar12 + 0x58);
      if (*pfVar14 != fVar16) {
        lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
        pfVar13 = (float *)(lVar12 + 0x54);
        fVar18 = *pfVar13;
        *pfVar14 = fVar18;
        fVar21 = *(float *)(lVar12 + 0x5c);
        fVar18 = fVar18 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar21;
        if (0.0 <= fVar21) {
          if (fVar16 < fVar18) goto LAB_03f23e40;
        }
        else if (fVar18 < fVar16) {
LAB_03f23e40:
          fVar18 = fVar16;
        }
        *pfVar13 = fVar18;
      }
      lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
      pfVar14 = (float *)(lVar12 + 0x68);
      fVar16 = *(float *)(lVar12 + 0x70);
      if (*pfVar14 != fVar16) {
        lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
        pfVar13 = (float *)(lVar12 + 0x6c);
        fVar18 = *pfVar13;
        *pfVar14 = fVar18;
        fVar21 = *(float *)(lVar12 + 0x74);
        fVar18 = fVar18 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar21;
        if (0.0 <= fVar21) {
          if (fVar16 < fVar18) goto LAB_03f23e8c;
        }
        else if (fVar18 < fVar16) {
LAB_03f23e8c:
          fVar18 = fVar16;
        }
        *pfVar13 = fVar18;
      }
      lVar12 = lVar9 + (ulong)uVar1 * 0xa8;
      pfVar14 = (float *)(lVar12 + 0x80);
      fVar16 = *(float *)(lVar12 + 0x88);
      if (*pfVar14 != fVar16) {
        lVar9 = lVar9 + (ulong)uVar1 * 0xa8;
        pfVar13 = (float *)(lVar9 + 0x84);
        fVar18 = *pfVar13;
        *pfVar14 = fVar18;
        fVar21 = *(float *)(lVar9 + 0x8c);
        fVar18 = fVar18 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar21;
        if (0.0 <= fVar21) {
          if (fVar16 < fVar18) goto LAB_03f23d40;
        }
        else if (fVar18 < fVar16) {
LAB_03f23d40:
          fVar18 = fVar16;
        }
        *pfVar13 = fVar18;
      }
      uVar10 = *(uint *)(param_1 + 0x20);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar10);
  }
  fVar16 = *(float *)(param_1 + 0x60);
  if (*(float *)(param_1 + 0x58) != fVar16) {
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x5c);
    fVar18 = *(float *)(param_1 + 0x5c) +
             *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
             *(float *)(param_1 + 100);
    if (0.0 <= *(float *)(param_1 + 100)) {
      if (fVar16 < fVar18) goto LAB_03f23f70;
    }
    else if (fVar18 < fVar16) {
LAB_03f23f70:
      fVar18 = fVar16;
    }
    *(float *)(param_1 + 0x5c) = fVar18;
  }
  fVar16 = *(float *)(param_1 + 0x78);
  if (*(float *)(param_1 + 0x70) != fVar16) {
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x74);
    fVar18 = *(float *)(param_1 + 0x74) +
             *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
             *(float *)(param_1 + 0x7c);
    if (0.0 <= *(float *)(param_1 + 0x7c)) {
      if (fVar16 < fVar18) goto LAB_03f23fbc;
    }
    else if (fVar18 < fVar16) {
LAB_03f23fbc:
      fVar18 = fVar16;
    }
    *(float *)(param_1 + 0x74) = fVar18;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    piVar7 = (int *)(*(long *)(param_1 + 0x18) + 0x44);
    do {
      if (0 < *piVar7) {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined8 *)(param_1 + 0x3c) = 0x7f7fffff7f7fffff;
        puVar2 = PTR_DAT_04bc3ee8;
        lVar9 = 0;
        if (*(long *)PTR_DAT_04bc3ee8 != 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
        }
        lVar12 = *(long *)(lVar9 + 0x28);
        if (lVar12 == lVar9 + 0x20) {
          fVar16 = 0.0;
          fVar18 = 1.0;
          fVar22 = 0.0;
          goto LAB_03f245c4;
        }
        fVar16 = 3.4028235e+38;
        uVar10 = 0;
        lVar15 = lVar12 + -0x1b8;
        fVar21 = -3.4028235e+38;
        fVar22 = *(float *)(param_1 + 0x80) * 255.0;
        fVar18 = 3.4028235e+38;
        fVar23 = -fVar22;
        goto LAB_03f240e4;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 0x1a;
    } while (uVar4 != 0);
  }
LAB_03f246c8:
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xe0);
  return;
LAB_03f240e4:
  do {
    uVar3 = uVar10;
    if (*(uint *)(param_1 + 0x10) <= uVar10) {
      uVar3 = 0;
    }
    if ((*(int *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x68 + 0x44) == 0) ||
       ((*(ushort *)(param_1 + 0x48) >> (ulong)(uVar10 & 0x1f) & 1) == 0)) {
      uVar3 = uVar10;
      if (*(uint *)(param_1 + 0x20) <= uVar10) {
        uVar3 = 0;
      }
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar3 * 0xa8);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
      uVar3 = uVar10;
      if (*(uint *)(param_1 + 0xd0) <= uVar10) {
        uVar3 = 0;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(*(long *)(param_1 + 0xd8) + (ulong)uVar3 * 4) = 0;
    }
    else {
      local_88[0] = 0.0;
      *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x68 + 0x10) = lVar15;
      local_a8[2] = 0.0;
      local_a8[3] = 0.0;
      local_a8[4] = 0.0;
      local_a8[5] = 0.0;
      local_bc[0] = 0.0;
      local_bc[1] = 1.4013e-45;
      local_b0 = local_a8;
      local_a8[0] = 0.0;
      local_a8[1] = 0.0;
      local_c4 = 0;
      local_c0 = 1.0;
      uVar3 = uVar10;
      if (*(uint *)(param_1 + 0x10) <= uVar10) {
        uVar3 = 0;
      }
      FUN_03f25110(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 0x68,local_bc + 1,local_88,local_bc,
                   &local_c0,&local_c4);
      local_88[1] = 0.0;
      lVar6 = *(long *)(param_1 + 0x28);
      uVar3 = uVar10;
      if (*(uint *)(param_1 + 0x20) <= uVar10) {
        uVar3 = 0;
      }
      if (0.0 <= fVar22) {
        lVar11 = lVar6 + (ulong)uVar3 * 0xa8;
        fVar17 = *local_b0;
        fVar19 = *(float *)(lVar11 + 0x20);
        *(float *)(lVar11 + 0x28) = fVar17;
        if ((fVar22 == 0.0) || (fVar19 == fVar17)) {
          *(float *)(lVar11 + 0x20) = fVar17;
          *(float *)(lVar11 + 0x2c) = 0.0;
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x24) = fVar17;
        }
        else {
          fVar20 = fVar22;
          if (fVar17 - fVar19 <= 0.0) {
            fVar20 = fVar23;
          }
          *(float *)(lVar11 + 0x2c) = fVar20;
          fVar19 = fVar19 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar20;
          if (0.0 <= fVar20) {
            if (fVar17 < fVar19) goto LAB_03f241dc;
          }
          else if (fVar19 < fVar17) {
LAB_03f241dc:
            fVar19 = fVar17;
          }
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x24) = fVar19;
        }
      }
      puVar8 = (undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8);
      *puVar8 = *(undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x20);
      if (0.0 <= fVar22) {
        lVar11 = lVar6 + (ulong)uVar3 * 0xa8;
        fVar17 = local_b0[1];
        fVar19 = *(float *)(lVar11 + 0x38);
        *(float *)(lVar11 + 0x40) = fVar17;
        if ((fVar22 == 0.0) || (fVar19 == fVar17)) {
          *(float *)(lVar11 + 0x38) = fVar17;
          *(float *)(lVar11 + 0x44) = 0.0;
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x3c) = fVar17;
        }
        else {
          fVar20 = fVar22;
          if (fVar17 - fVar19 <= 0.0) {
            fVar20 = fVar23;
          }
          *(float *)(lVar11 + 0x44) = fVar20;
          fVar19 = fVar19 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar20;
          if (0.0 <= fVar20) {
            if (fVar17 < fVar19) goto LAB_03f24288;
          }
          else if (fVar19 < fVar17) {
LAB_03f24288:
            fVar19 = fVar17;
          }
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x3c) = fVar19;
        }
      }
      puVar8[1] = *(undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x38);
      if (0.0 <= fVar22) {
        lVar11 = lVar6 + (ulong)uVar3 * 0xa8;
        fVar17 = local_b0[2];
        fVar19 = *(float *)(lVar11 + 0x50);
        *(float *)(lVar11 + 0x58) = fVar17;
        if ((fVar22 == 0.0) || (fVar19 == fVar17)) {
          *(float *)(lVar11 + 0x50) = fVar17;
          *(float *)(lVar11 + 0x5c) = 0.0;
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x54) = fVar17;
        }
        else {
          fVar20 = fVar22;
          if (fVar17 - fVar19 <= 0.0) {
            fVar20 = fVar23;
          }
          *(float *)(lVar11 + 0x5c) = fVar20;
          fVar19 = fVar19 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar20;
          if (0.0 <= fVar20) {
            if (fVar17 < fVar19) goto LAB_03f24330;
          }
          else if (fVar19 < fVar17) {
LAB_03f24330:
            fVar19 = fVar17;
          }
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x54) = fVar19;
        }
      }
      puVar8[2] = *(undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x50);
      if (0.0 <= fVar22) {
        lVar11 = lVar6 + (ulong)uVar3 * 0xa8;
        fVar17 = local_b0[3];
        fVar19 = *(float *)(lVar11 + 0x68);
        *(float *)(lVar11 + 0x70) = fVar17;
        if ((fVar22 == 0.0) || (fVar19 == fVar17)) {
          *(float *)(lVar11 + 0x68) = fVar17;
          *(float *)(lVar11 + 0x74) = 0.0;
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x6c) = fVar17;
        }
        else {
          fVar20 = fVar22;
          if (fVar17 - fVar19 <= 0.0) {
            fVar20 = fVar23;
          }
          *(float *)(lVar11 + 0x74) = fVar20;
          fVar19 = fVar19 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar20;
          if (0.0 <= fVar20) {
            if (fVar17 < fVar19) goto LAB_03f243d8;
          }
          else if (fVar19 < fVar17) {
LAB_03f243d8:
            fVar19 = fVar17;
          }
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x6c) = fVar19;
        }
      }
      puVar8[3] = *(undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x68);
      if (0.0 <= fVar22) {
        fVar17 = local_b0[4];
        lVar11 = lVar6 + (ulong)uVar3 * 0xa8;
        fVar19 = *(float *)(lVar11 + 0x80);
        *(float *)(lVar11 + 0x88) = fVar17;
        if ((fVar22 == 0.0) || (fVar19 == fVar17)) {
          *(float *)(lVar11 + 0x80) = fVar17;
          *(float *)(lVar11 + 0x8c) = 0.0;
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x84) = fVar17;
        }
        else {
          fVar20 = fVar22;
          if (fVar17 - fVar19 <= 0.0) {
            fVar20 = fVar23;
          }
          *(float *)(lVar11 + 0x8c) = fVar20;
          fVar19 = fVar19 + *(float *)(*(long *)(*(long *)puVar2 + 0x10) + 0x1c) * fVar20;
          if (0.0 <= fVar20) {
            if (fVar17 < fVar19) goto LAB_03f24480;
          }
          else if (fVar19 < fVar17) {
LAB_03f24480:
            fVar19 = fVar17;
          }
          *(float *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x84) = fVar19;
        }
      }
      puVar8[4] = *(undefined4 *)(lVar6 + (ulong)uVar3 * 0xa8 + 0x80);
      if (local_88[0] <= fVar16) {
        fVar16 = local_88[0];
      }
      if (local_bc[0] <= fVar18) {
        fVar18 = local_bc[0];
      }
      if (fVar21 <= local_c0) {
        fVar21 = local_c0;
      }
      fVar19 = *(float *)(param_1 + 0x3c);
      if (*(float *)(lVar15 + 0x58) <= *(float *)(param_1 + 0x3c)) {
        fVar19 = *(float *)(lVar15 + 0x58);
      }
      *(float *)(param_1 + 0x3c) = fVar19;
      fVar19 = *(float *)(param_1 + 0x40);
      if (*(float *)(lVar15 + 0x5c) <= *(float *)(param_1 + 0x40)) {
        fVar19 = *(float *)(lVar15 + 0x5c);
      }
      uVar3 = uVar10;
      if (*(uint *)(param_1 + 0xd0) <= uVar10) {
        uVar3 = 0;
      }
      *(float *)(param_1 + 0x40) = fVar19;
      *(undefined4 *)(*(long *)(param_1 + 0xd8) + (ulong)uVar3 * 4) = local_c4;
    }
    lVar12 = *(long *)(lVar12 + 8);
    uVar10 = uVar10 + 1;
    lVar15 = lVar12 + -0x1b8;
  } while (lVar15 != lVar9 + -0x198);
  fVar22 = 0.0;
  if (fVar16 != 3.4028235e+38) {
    fVar22 = fVar16;
  }
  fVar16 = 0.0;
  if (fVar18 != 3.4028235e+38) {
    fVar16 = fVar18;
  }
  fVar18 = 1.0;
  if (fVar21 != -3.4028235e+38) {
    fVar18 = fVar21;
  }
  if (*(float *)(param_1 + 0x3c) == 3.4028235e+38) {
LAB_03f245c4:
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(float *)(param_1 + 0x40) == 3.4028235e+38) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  fVar23 = *(float *)(param_1 + 0x84);
  fVar21 = *(float *)(param_1 + 0x58);
  if (0.0 <= fVar23) {
    *(float *)(param_1 + 0x60) = fVar22;
    if ((fVar23 == 0.0) || (fVar21 == fVar22)) {
      *(float *)(param_1 + 0x58) = fVar22;
      *(float *)(param_1 + 0x5c) = fVar22;
      *(undefined4 *)(param_1 + 100) = 0;
      fVar21 = fVar22;
    }
    else {
      lVar9 = *(long *)puVar2;
      if (fVar22 - fVar21 <= 0.0) {
        fVar23 = -fVar23;
      }
      *(float *)(param_1 + 100) = fVar23;
      fVar19 = fVar21 + *(float *)(*(long *)(lVar9 + 0x10) + 0x1c) * fVar23;
      if (0.0 <= fVar23) {
        if (fVar22 < fVar19) goto LAB_03f24634;
      }
      else if (fVar19 < fVar22) {
LAB_03f24634:
        fVar19 = fVar22;
      }
      *(float *)(param_1 + 0x5c) = fVar19;
    }
  }
  *(float *)(param_1 + 0x30) = fVar21;
  fVar21 = *(float *)(param_1 + 0x88);
  fVar22 = *(float *)(param_1 + 0x70);
  if (0.0 <= fVar21) {
    *(float *)(param_1 + 0x78) = fVar16;
    if ((fVar21 == 0.0) || (fVar22 == fVar16)) {
      *(float *)(param_1 + 0x70) = fVar16;
      *(float *)(param_1 + 0x74) = fVar16;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      fVar22 = fVar16;
    }
    else {
      lVar9 = *(long *)puVar2;
      if (fVar16 - fVar22 <= 0.0) {
        fVar21 = -fVar21;
      }
      *(float *)(param_1 + 0x7c) = fVar21;
      fVar23 = fVar22 + *(float *)(*(long *)(lVar9 + 0x10) + 0x1c) * fVar21;
      if (0.0 <= fVar21) {
        if (fVar16 < fVar23) goto LAB_03f246a4;
      }
      else if (fVar23 < fVar16) {
LAB_03f246a4:
        fVar23 = fVar16;
      }
      *(float *)(param_1 + 0x74) = fVar23;
    }
  }
  *(float *)(param_1 + 0x34) = fVar22;
  *(float *)(param_1 + 0x38) = fVar18;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  goto LAB_03f246c8;
}

