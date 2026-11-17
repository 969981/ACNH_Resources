
void FUN_02a57be0(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  long *plVar2;
  short *psVar3;
  undefined2 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined2 uVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long lStack_10098;
  int iStack_10090;
  int iStack_1008c;
  uint uStack_10088;
  uint uStack_10084;
  
  puVar13 = *(uint **)(param_3 + 0x10);
  uVar7 = param_3[0xe];
  uVar11 = *puVar13;
  if ((int)uVar7 < (int)uVar11) {
    uVar31 = uVar11 - uVar7;
    lVar26 = *(long *)(puVar13 + 2);
    lVar15 = lVar26 + (long)(int)uVar7 * 2;
    uVar30 = uVar31;
    if ((int)(uVar7 + param_3[0x14]) <= (int)uVar11) {
      uVar30 = param_3[0x14];
    }
    bVar9 = (int)uVar30 < 1;
    if (((uVar11 < uVar7 || uVar31 == 0) || lVar26 == 0) || bVar9) {
      uVar30 = 0;
    }
    if (((uVar11 < uVar7 || uVar31 == 0) || lVar26 == 0) || bVar9) {
      lVar15 = 0;
    }
  }
  else {
    uVar30 = 0;
    lVar15 = 0;
  }
  uVar7 = uVar30 + uVar7;
  uVar31 = uVar11 - uVar7;
  bVar9 = uVar31 == 0;
  if (bVar9 || (int)uVar11 < (int)uVar7) {
    lVar26 = 0;
    uVar31 = 0;
  }
  else {
    lVar14 = *(long *)(puVar13 + 2);
    lVar26 = lVar14 + (long)(int)uVar7 * 2;
    if ((int)uVar31 < 1 || ((uVar11 < uVar7 || bVar9) || lVar14 == 0)) {
      lVar26 = 0;
    }
    if ((int)uVar31 < 1 || ((uVar11 < uVar7 || bVar9) || lVar14 == 0)) {
      uVar31 = 0;
    }
  }
  uVar28 = (ulong)(uint)param_3[0x12];
  iVar6 = *param_3;
  uVar32 = *(ulong *)(param_3 + 0x16);
  iVar12 = param_3[4];
  lVar29 = **(long **)(param_3 + 0xc);
  lVar24 = (*(long **)(param_3 + 0xc))[1];
  uVar7 = *(uint *)(lVar29 + 0x18);
  lVar14 = (ulong)*(uint *)(lVar29 + 0x40) + lVar29;
  if ((int)uVar7 < 1 || lVar14 == 0) {
    lVar14 = 0;
    uVar7 = 0;
  }
  if (((lVar24 == 0) || (*(char *)(lVar24 + 0x30) == '\0')) || (*(short *)(lVar29 + 0xe) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)(lVar29 + 0x14);
  }
  uVar8 = 0;
  if (param_3[7] != 0) {
    uVar8 = uVar11 / (uint)param_3[7];
  }
  lVar29 = (long)(int)uVar30;
  do {
    iVar10 = (int)uVar28;
    if ((int)(uVar7 - iVar12) < (int)(uVar8 << 1)) break;
    uStack_10088 = 0;
    if (param_3[6] != 0) {
      uStack_10088 = uVar11 / (uint)param_3[6];
    }
    uStack_10084 = 0;
    if (param_3[7] != 0) {
      uStack_10084 = uVar11 / (uint)param_3[7];
    }
    lStack_10098 = lVar14;
    iStack_10090 = uVar7 << 1;
    iStack_1008c = iVar12;
    iVar10 = FUN_02a210d0(param_1,&lStack_10098);
    fVar34 = (float)param_3[8];
    fVar33 = (float)(iVar10 << 1) / fVar34;
    uVar16 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar16 = (uint)(0.0 <= fVar33);
    }
    uVar16 = uVar16 + (int)fVar33;
    fVar33 = (float)(int)uVar16;
    if (0 < (int)uVar16) {
      fVar37 = (float)param_3[10];
      fVar36 = 0.0;
      uVar18 = 0;
      plVar19 = &lStack_10098;
      fVar35 = (float)iVar12;
      do {
        uVar21 = (ulong)(uint)(int)fVar36;
        uVar23 = (uint)fVar35;
        if (0x7ff < (uint)(int)fVar36) {
          uVar21 = 0;
        }
        if ((int)uVar7 <= (int)uVar23) {
          uVar16 = (uint)uVar18;
          fVar33 = (float)(int)uVar16;
          break;
        }
        uVar1 = uVar23 + 1;
        if ((int)uVar1 < (int)uVar7) {
          fVar38 = (float)(int)uVar23;
          if (uVar7 <= uVar23) {
            uVar23 = 0;
          }
          if (uVar7 <= uVar1) {
            uVar1 = 0;
          }
          fVar38 = (fVar35 - fVar38) * (float)(int)*(short *)(lVar14 + (long)(int)uVar1 * 2) +
                   (float)(int)*(short *)(lVar14 + (long)(int)uVar23 * 2) *
                   (1.0 - (fVar35 - fVar38));
        }
        else {
          if (uVar7 <= uVar23) {
            uVar23 = 0;
          }
          fVar38 = (float)(int)*(short *)(lVar14 + (long)(int)uVar23 * 2);
        }
        fVar38 = fVar37 * *(float *)(param_1 + 0xc + uVar21 * 4) * fVar38;
        if (32767.0 <= fVar38) {
          uVar22 = 0x7fff;
        }
        else if (fVar38 <= -32768.0) {
          uVar22 = 0x8000;
        }
        else {
          uVar22 = (undefined2)(int)fVar38;
        }
        fVar35 = fVar34 + fVar35;
        fVar36 = 2048.0 / fVar33 + fVar36;
        bVar9 = 0x7fff < uVar18;
        uVar18 = uVar18 + 1;
        plVar2 = plVar19;
        if (bVar9) {
          plVar2 = &lStack_10098;
        }
        plVar19 = (long *)((long)plVar19 + 2);
        *(undefined2 *)plVar2 = uVar22;
      } while (uVar16 != uVar18);
    }
    uVar23 = 0;
    if (param_3[7] != 0) {
      uVar23 = uVar11 / (uint)param_3[7];
    }
    fVar33 = (float)NEON_fminnm((float)(int)((float)(int)uVar7 + 65536.0 +
                                            (float)((int)((float)uVar23 * 4.0) + 1)) / fVar33,
                                0x3f800000);
    fVar34 = (float)*(int *)(param_1 + 8) + fVar33 * (float)iVar10;
    fVar33 = (float)iVar10 / (float)param_3[9];
    iVar17 = (int)fVar34;
    *(int *)(param_1 + 8) = iVar17;
    if (fVar33 <= (float)(int)fVar34) {
      if ((int)uVar16 < 1) {
        do {
          fVar34 = (float)iVar17 - fVar33;
          uVar16 = 0;
          if (fVar34 != (float)(int)fVar34) {
            uVar16 = (uint)(0.0 <= fVar34);
          }
          iVar17 = uVar16 + (int)fVar34;
          uVar28 = (ulong)(uint)(int)((float)(int)uVar28 + (float)iVar6 * fVar33);
        } while (fVar33 <= (float)iVar17);
        *(int *)(param_1 + 8) = iVar17;
      }
      else {
        do {
          iVar17 = (int)uVar28;
          if (0 < iVar6) {
            uVar18 = 0;
            if (lVar26 == 0) {
              do {
                uVar21 = (ulong)(int)uVar28;
                lVar24 = uVar28 << 0x20;
                uVar28 = uVar18;
                if (0x7fff < uVar18) {
                  uVar28 = 0;
                }
                iVar25 = iVar6;
                do {
                  lVar27 = lVar24 >> 0x20;
                  if ((long)uVar32 < (long)uVar21) {
                    uVar32 = uVar21;
                    if ((long)uVar21 < lVar29) {
                      lVar5 = lVar27;
                      if (uVar30 <= (uint)uVar21) {
                        lVar5 = 0;
                      }
                      *(undefined2 *)(lVar15 + lVar5 * 2) = 0;
                      goto LAB_02a58108;
                    }
                  }
                  else {
LAB_02a58108:
                    if ((long)uVar21 < lVar29) {
                      if (uVar30 <= (uint)uVar21) {
                        lVar27 = 0;
                      }
                      *(short *)(lVar15 + lVar27 * 2) =
                           *(short *)(lVar15 + lVar27 * 2) +
                           *(short *)((long)&lStack_10098 + uVar28 * 2);
                    }
                  }
                  uVar21 = uVar21 + 1;
                  lVar24 = lVar24 + 0x100000000;
                  iVar25 = iVar25 + -1;
                } while (iVar25 != 0);
                uVar18 = uVar18 + 1;
                uVar28 = uVar21 & 0xffffffff;
              } while (uVar18 != uVar16);
            }
            else {
              do {
                lVar24 = uVar28 << 0x20;
                uVar21 = uVar18;
                if (0x7fff < uVar18) {
                  uVar21 = 0;
                }
                uVar20 = (long)(int)uVar28;
                iVar25 = iVar6;
                do {
                  lVar27 = lVar24 >> 0x20;
                  uVar23 = (uint)uVar20;
                  if ((long)uVar32 < (long)uVar20) {
                    uVar1 = uVar23 - uVar30;
                    lVar5 = lVar27;
                    if (uVar30 <= uVar23) {
                      lVar5 = 0;
                    }
                    if (uVar31 <= uVar1) {
                      uVar1 = 0;
                    }
                    puVar4 = (undefined2 *)(lVar15 + lVar5 * 2);
                    if (lVar29 <= (long)uVar20) {
                      puVar4 = (undefined2 *)(lVar26 + (long)(int)uVar1 * 2);
                    }
                    *puVar4 = 0;
                    uVar32 = uVar20;
                  }
                  uVar1 = uVar23 - uVar30;
                  if (uVar30 <= uVar23) {
                    lVar27 = 0;
                  }
                  if (uVar31 <= uVar1) {
                    uVar1 = 0;
                  }
                  uVar28 = uVar20 + 1;
                  lVar24 = lVar24 + 0x100000000;
                  psVar3 = (short *)(lVar15 + lVar27 * 2);
                  if (lVar29 <= (long)uVar20) {
                    psVar3 = (short *)(lVar26 + (long)(int)uVar1 * 2);
                  }
                  iVar25 = iVar25 + -1;
                  *psVar3 = *psVar3 + *(short *)((long)&lStack_10098 + uVar21 * 2);
                  uVar20 = uVar28;
                } while (iVar25 != 0);
                uVar18 = uVar18 + 1;
                uVar28 = uVar28 & 0xffffffff;
              } while (uVar18 != uVar16);
            }
          }
          fVar34 = (float)*(int *)(param_1 + 8) - fVar33;
          uVar23 = 0;
          if (fVar34 != (float)(int)fVar34) {
            uVar23 = (uint)(0.0 <= fVar34);
          }
          *(uint *)(param_1 + 8) = uVar23 + (int)fVar34;
          uVar28 = (ulong)(uint)(int)((float)iVar17 + (float)iVar6 * fVar33);
        } while (fVar33 <= (float)(int)(uVar23 + (int)fVar34));
      }
    }
    iVar12 = iVar10 + iVar12;
    iVar10 = (int)uVar28;
  } while (iVar10 < (int)uVar30);
  *(long *)(param_2 + 8) = (long)iVar12;
  if (iVar10 < (int)uVar30) {
    lVar15 = 0;
    lVar26 = *(long *)(param_3 + 2) * (long)iVar10;
  }
  else {
    lVar15 = (long)(int)(iVar10 - uVar30);
    lVar26 = *(long *)(param_3 + 2) * lVar29;
  }
  lVar14 = uVar32 - lVar29;
  *(long *)(param_2 + 0x10) = lVar26;
  if ((long)uVar32 < lVar29) {
    lVar14 = -1;
  }
  *(long *)(param_2 + 0x20) = lVar15;
  *(long *)(param_2 + 0x28) = lVar14;
  return;
}

