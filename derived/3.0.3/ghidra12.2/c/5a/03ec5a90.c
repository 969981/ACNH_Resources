
void FUN_03ec5a90(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  long lVar15;
  float *pfVar16;
  uint uVar17;
  bool bVar18;
  float *pfVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float __x;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  if ((*(char *)(param_1 + 0x18) != '\0') && ((long *)*param_2 != (long *)0x0)) {
    uVar8 = (**(code **)(*(long *)*param_2 + 0x58))();
    if (0 < (int)uVar8) {
      uVar17 = 0;
      bVar18 = true;
      do {
        lVar15 = *(long *)(param_1 + 0x10);
        uVar20 = uVar17;
        if (*(uint *)(param_1 + 8) <= uVar17) {
          uVar20 = 0;
        }
        uVar9 = (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,uVar17);
        if (0 < (int)uVar9) {
          puVar1 = (uint *)(lVar15 + (ulong)uVar20 * 0x10);
          uVar20 = 0;
LAB_03ec5b7c:
          uVar5 = *(uint *)(param_2 + 1);
          uVar2 = uVar20;
          if (*puVar1 <= uVar20) {
            uVar2 = 0;
          }
          if (0 < (int)uVar5) {
            lVar15 = *(long *)(puVar1 + 2);
            uVar12 = 0;
            bVar7 = false;
            bVar11 = false;
            pfVar16 = (float *)(lVar15 + (ulong)uVar2 * 0x28);
            fVar21 = 1.0;
LAB_03ec5bc0:
            plVar10 = param_2 + 0x23 + uVar12;
            uVar12 = uVar12 + 1;
            do {
              plVar4 = plVar10 + -0x20;
              plVar6 = plVar10;
              if (0x1f < uVar12 - 1) {
                plVar4 = param_2 + 3;
                plVar6 = param_2 + 0x23;
              }
              fVar29 = *(float *)(*plVar6 + 0xc);
              if (fVar29 < 1.0) {
                lVar13 = *plVar4;
                if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
                  uVar3 = uVar17;
                  if (*(uint *)(lVar13 + 8) <= uVar17) {
                    uVar3 = 0;
                  }
                  if ((*(uint *)(*(long *)(lVar13 + 0x10) + (ulong)uVar3 * 0x80 +
                                (ulong)(uVar20 >> 5) * 4) & 1 << (ulong)(uVar20 & 0x1f)) == 0)
                  goto LAB_03ec5bd0;
                }
                if ((fVar29 < fVar21) && (0.0 < fVar29)) goto code_r0x03ec5c44;
              }
LAB_03ec5bd0:
              uVar12 = uVar12 + 1;
              plVar10 = plVar10 + 1;
              if (uVar12 - uVar5 == 1) {
                fVar29 = fVar21;
                bVar14 = bVar18;
                if (bVar11) goto LAB_03ec5c80;
                break;
              }
            } while( true );
          }
          fVar21 = 1.0;
          lVar15 = param_2[2];
          goto joined_r0x03ec60a4;
        }
LAB_03ec5b10:
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar8);
      if (!bVar18) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
code_r0x03ec5c44:
  bVar18 = false;
  bVar14 = false;
  bVar11 = true;
  bVar7 = *(char *)(*plVar6 + 0x10) != '\0';
  fVar21 = fVar29;
  if (uVar12 == uVar5) goto LAB_03ec5c80;
  goto LAB_03ec5bc0;
LAB_03ec5c80:
  fVar21 = 1.0;
  if (!bVar7) goto LAB_03ec5fc8;
  fVar30 = 1.0 - fVar29;
  (**(code **)(*(long *)*param_2 + 0x78))((long *)*param_2,&local_d8,&local_e4,uVar17,uVar20);
  lVar13 = lVar15 + (ulong)uVar2 * 0x28;
  *(float *)(lVar13 + 0x1c) = fVar30 * *(float *)(lVar13 + 0x1c) + fVar29 * local_e4;
  *(float *)(lVar13 + 0x20) = fVar30 * *(float *)(lVar13 + 0x20) + fVar29 * fStack_e0;
  *(float *)(lVar13 + 0x24) = fVar30 * *(float *)(lVar13 + 0x24) + fVar29 * local_dc;
  *pfVar16 = fVar29 * local_cc + fVar30 * *pfVar16;
  pfVar16[1] = fVar29 * local_bc + fVar30 * pfVar16[1];
  pfVar16[2] = fVar29 * local_ac + fVar30 * pfVar16[2];
  fVar27 = (local_d8 + local_c4 + local_b0 + 1.0) * 0.25;
  fVar28 = fVar27 + (local_c4 + local_b0) * -0.5;
  fVar25 = fVar27 + (local_d8 + local_b0) * -0.5;
  fVar21 = fVar27 + (local_d8 + local_c4) * -0.5;
  if (fVar27 <= fVar28) {
    if (fVar28 <= fVar25) goto code_r0x03ec5e10;
    if (fVar28 <= fVar21) goto LAB_03ec5e50;
    fVar21 = SQRT(fVar28);
    if (NAN(fVar21)) {
      fVar21 = sqrtf(fVar28);
    }
    fVar25 = 0.25 / fVar21;
    fVar28 = fVar25 * (fStack_b4 - local_c0);
    fVar27 = fVar25 * (local_d4 + local_c8);
    fVar25 = fVar25 * (local_d0 + local_b8);
  }
  else {
    if (fVar27 <= fVar25) {
code_r0x03ec5e10:
      if (fVar21 < fVar25) {
        fVar27 = SQRT(fVar25);
        if (NAN(fVar27)) {
          fVar27 = sqrtf(fVar25);
        }
        fVar21 = 0.25 / fVar27;
        fVar28 = fVar21 * (local_d0 - local_b8);
        fVar25 = fVar21 * (local_c0 + fStack_b4);
        fVar21 = fVar21 * (local_c8 + local_d4);
        goto LAB_03ec5e88;
      }
    }
    else if (fVar21 < fVar27) {
      fVar28 = SQRT(fVar27);
      if (NAN(fVar28)) {
        fVar28 = sqrtf(fVar27);
      }
      fVar25 = 0.25 / fVar28;
      fVar21 = fVar25 * (fStack_b4 - local_c0);
      fVar27 = fVar25 * (local_d0 - local_b8);
      fVar25 = fVar25 * (local_c8 - local_d4);
      goto LAB_03ec5e88;
    }
LAB_03ec5e50:
    fVar25 = SQRT(fVar21);
    if (NAN(fVar25)) {
      fVar25 = sqrtf(fVar21);
    }
    fVar27 = 0.25 / fVar25;
    fVar28 = fVar27 * (local_c8 - local_d4);
    fVar21 = fVar27 * (local_b8 + local_d0);
    fVar27 = fVar27 * (fStack_b4 + local_c0);
  }
LAB_03ec5e88:
  lVar13 = lVar15 + (ulong)uVar2 * 0x28;
  pfVar19 = (float *)(lVar13 + 0xc);
  fVar22 = fVar27 * *(float *)(lVar13 + 0x10) + fVar21 * *pfVar19 +
           fVar25 * *(float *)(lVar13 + 0x14) + fVar28 * *(float *)(lVar13 + 0x18);
  fVar26 = 1.0;
  if ((fVar22 <= 1.0) && (fVar26 = fVar22, fVar22 < -1.0)) {
    fVar26 = -1.0;
  }
  fVar22 = fVar26;
  if (fVar26 < 0.0) {
    fVar22 = -fVar26;
  }
  __x = acosf(fVar22);
  fVar23 = sinf(__x);
  fVar22 = -fVar23;
  if (0.0 <= fVar23) {
    fVar22 = fVar23;
  }
  fVar24 = fVar29;
  if (1.1920929e-07 <= fVar22) {
    fVar30 = sinf(__x - fVar29 * __x);
    fVar30 = (1.0 / fVar23) * fVar30;
    fVar24 = sinf(fVar29 * __x);
    fVar24 = (1.0 / fVar23) * fVar24;
  }
  if (fVar26 < 0.0) {
    fVar24 = -fVar24;
  }
  fVar26 = fVar21 * fVar24 + *pfVar19 * fVar30;
  fVar21 = fVar27 * fVar24 + *(float *)(lVar13 + 0x10) * fVar30;
  fVar27 = fVar28 * fVar24 + *(float *)(lVar13 + 0x18) * fVar30;
  fVar30 = fVar25 * fVar24 + *(float *)(lVar13 + 0x14) * fVar30;
  *pfVar19 = fVar26;
  *(float *)(lVar13 + 0x10) = fVar21;
  *(float *)(lVar13 + 0x14) = fVar30;
  *(float *)(lVar13 + 0x18) = fVar27;
  fVar25 = SQRT(fVar26 * fVar26 + fVar27 * fVar27 + fVar21 * fVar21 + fVar30 * fVar30);
  if (0.0 < fVar25) {
    fVar25 = 1.0 / fVar25;
    *pfVar19 = fVar26 * fVar25;
    *(float *)(lVar13 + 0x10) = fVar21 * fVar25;
    *(float *)(lVar13 + 0x14) = fVar30 * fVar25;
    *(float *)(lVar13 + 0x18) = fVar27 * fVar25;
  }
  fVar21 = fVar29;
LAB_03ec5fc8:
  lVar15 = lVar15 + (ulong)uVar2 * 0x28;
  fVar30 = *(float *)(lVar15 + 0xc);
  fVar29 = *(float *)(lVar15 + 0x10);
  fVar27 = *(float *)(lVar15 + 0x14);
  fVar28 = *(float *)(lVar15 + 0x18) + *(float *)(lVar15 + 0x18);
  fVar26 = fVar30 + fVar30;
  fVar25 = fVar29 * (fVar29 + fVar29);
  fStack_b4 = (fVar29 + fVar29) * fVar27;
  local_c4 = fVar27 * (fVar27 + fVar27);
  local_d4 = fVar29 * fVar26 - fVar27 * fVar28;
  local_c8 = fVar29 * fVar26 + fVar27 * fVar28;
  local_d8 = (1.0 - fVar25) - local_c4;
  local_d0 = fVar27 * fVar26 + fVar29 * fVar28;
  local_b8 = fVar27 * fVar26 - fVar29 * fVar28;
  local_b0 = 1.0 - fVar30 * fVar26;
  local_c4 = local_b0 - local_c4;
  local_c0 = fStack_b4 - fVar30 * fVar28;
  fStack_b4 = fStack_b4 + fVar30 * fVar28;
  local_b0 = local_b0 - fVar25;
  local_cc = *pfVar16;
  local_bc = pfVar16[1];
  local_ac = pfVar16[2];
  (**(code **)(*(long *)*param_2 + 0x88))((long *)*param_2,&local_d8,lVar15 + 0x1c,uVar17,uVar20);
  lVar15 = param_2[2];
  bVar18 = bVar14;
joined_r0x03ec60a4:
  if ((lVar15 != 0) && ((*(byte *)(lVar15 + 300) & 1) != 0)) {
    uVar2 = uVar17;
    if (*(uint *)(lVar15 + 0x150) <= uVar17) {
      uVar2 = 0;
    }
    lVar15 = *(long *)(lVar15 + 0x158) + (ulong)uVar2 * 0x18;
    uVar2 = uVar20;
    if (*(uint *)(lVar15 + 8) <= uVar20) {
      uVar2 = 0;
    }
    plVar10 = *(long **)(*(long *)(lVar15 + 0x10) + (ulong)uVar2 * 0x10 + 8);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x50))(fVar21);
    }
  }
  uVar20 = uVar20 + 1;
  if (uVar20 == uVar9) goto LAB_03ec5b10;
  goto LAB_03ec5b7c;
}

