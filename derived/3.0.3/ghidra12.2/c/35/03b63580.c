
void FUN_03b63580(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  short *psVar13;
  long lVar14;
  short *psVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  if (0 < *(int *)(param_1 + 0xf8)) {
    lVar12 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar12 = *(long *)(param_1 + 0xf0) - (long)*(int *)(param_1 + 0xfc);
    }
    uVar6 = nn::audio::IsVoiceValid((VoiceType *)(lVar12 + 0x80));
    if (((uVar6 & 1) == 0) && (lVar12 = *(long *)(param_1 + 0x100), *(short *)(lVar12 + 0x30) != 0))
    {
      uVar22 = 0;
      lVar1 = param_1 + 0xe8;
      lVar14 = *(long *)PTR_DAT_04bd1e70;
LAB_03b635f8:
      uVar11 = uVar22;
      do {
        if ((*(char *)(lVar12 + 8) != '\0') && (*(int **)(lVar12 + 0x10) != (int *)0x0)) {
          bVar4 = false;
          bVar5 = false;
          if (**(int **)(lVar12 + 0x10) == 0x56415742) {
            bVar5 = SBORROW4(uVar22,(uint)*(ushort *)(lVar12 + 0x30));
            bVar4 = (int)(uVar22 - *(ushort *)(lVar12 + 0x30)) < 0;
          }
          if (bVar4 != bVar5) goto code_r0x03b63638;
        }
        uVar22 = uVar22 + 1;
        uVar11 = uVar11 + 1;
        if (*(ushort *)(lVar12 + 0x30) <= uVar22) goto LAB_03b63ae0;
      } while( true );
    }
  }
  return;
code_r0x03b63638:
  psVar13 = *(short **)(lVar12 + 0x18);
  uVar18 = (int)uVar22 >> 0x1f;
  if ((int)uVar22 < 1) {
    if (*psVar13 != 1) goto LAB_03b637b0;
  }
  else {
    psVar15 = psVar13;
    if (2 < uVar22 - 1) {
      uVar17 = uVar22 & 0xfffffffc;
      do {
        uVar17 = uVar17 - 4;
        uVar19 = (ulong)(ushort)psVar15[(ulong)(ushort)psVar15[0x1c] * 6 + 0x3c];
        uVar6 = (ulong)(ushort)psVar15[0x1c];
        psVar15 = psVar15 + uVar6 * 6 +
                            uVar19 * 6 +
                            (ulong)(ushort)psVar15[uVar6 * 6 + uVar19 * 6 + 0x5c] * 6 +
                            (ulong)(ushort)psVar15[uVar6 * 6 +
                                                   uVar19 * 6 +
                                                   (ulong)(ushort)psVar15[uVar6 * 6 +
                                                                          uVar19 * 6 + 0x5c] * 6 +
                                                   0x7c] * 6 + 0x80;
      } while (uVar17 != 0);
    }
    if ((uVar22 & 3) != 0) {
      uVar17 = uVar11 & 3;
      do {
        uVar17 = uVar17 - 1;
        psVar15 = psVar15 + (ulong)(ushort)psVar15[0x1c] * 6 + 0x20;
      } while (uVar17 != 0);
    }
    if (*psVar15 != 1) {
LAB_03b637b0:
      if ((int)uVar22 < (int)*(uint *)(param_1 + 0xf8)) {
        if (uVar22 < *(uint *)(param_1 + 0xf8)) {
          uVar18 = uVar22 & (uVar18 ^ 0xffffffff);
          lVar16 = lVar1;
          if (6 < uVar18) {
            uVar17 = uVar18 + 1 & 0xfffffff8;
            do {
              uVar17 = uVar17 - 8;
              lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(lVar16 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
            } while (uVar17 != 0);
          }
          if ((uVar18 + 1 & 7) != 0) {
            uVar18 = uVar18 + 1 & 7;
            do {
              lVar16 = *(long *)(lVar16 + 8);
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        else {
          lVar16 = 0;
        }
        lVar12 = 0;
        if (lVar16 != 0) {
          lVar12 = lVar16 - *(int *)(param_1 + 0xfc);
        }
        lVar12 = lVar12 + 0x80;
      }
      else {
        lVar12 = 0;
      }
      if (0 < (int)uVar22) {
        if (2 < uVar22 - 1) {
          uVar18 = uVar22 & 0xfffffffc;
          do {
            uVar18 = uVar18 - 4;
            uVar19 = (ulong)(ushort)psVar13[(ulong)(ushort)psVar13[0x1c] * 6 + 0x3c];
            uVar6 = (ulong)(ushort)psVar13[0x1c];
            psVar13 = psVar13 + uVar6 * 6 +
                                uVar19 * 6 +
                                (ulong)(ushort)psVar13[uVar6 * 6 + uVar19 * 6 + 0x5c] * 6 +
                                (ulong)(ushort)psVar13[uVar6 * 6 +
                                                       uVar19 * 6 +
                                                       (ulong)(ushort)psVar13[uVar6 * 6 +
                                                                              uVar19 * 6 + 0x5c] * 6
                                                       + 0x7c] * 6 + 0x80;
          } while (uVar18 != 0);
        }
        if ((uVar22 & 3) != 0) {
          uVar11 = uVar11 & 3;
          do {
            uVar11 = uVar11 - 1;
            psVar13 = psVar13 + (ulong)(ushort)psVar13[0x1c] * 6 + 0x20;
          } while (uVar11 != 0);
        }
      }
      uVar7 = *(undefined4 *)(psVar13 + 2);
      uVar8 = 2;
      lVar16 = 0;
      uVar9 = 0;
      goto LAB_03b63ac4;
    }
    if (0 < (int)uVar22) {
      if (2 < uVar22 - 1) {
        uVar17 = uVar22 & 0xfffffffc;
        do {
          uVar17 = uVar17 - 4;
          uVar19 = (ulong)(ushort)psVar13[(ulong)(ushort)psVar13[0x1c] * 6 + 0x3c];
          uVar6 = (ulong)(ushort)psVar13[0x1c];
          psVar13 = psVar13 + uVar6 * 6 +
                              uVar19 * 6 +
                              (ulong)(ushort)psVar13[uVar6 * 6 + uVar19 * 6 + 0x5c] * 6 +
                              (ulong)(ushort)psVar13[uVar6 * 6 +
                                                     uVar19 * 6 +
                                                     (ulong)(ushort)psVar13[uVar6 * 6 +
                                                                            uVar19 * 6 + 0x5c] * 6 +
                                                     0x7c] * 6 + 0x80;
        } while (uVar17 != 0);
      }
      if ((uVar22 & 3) != 0) {
        uVar17 = uVar11 & 3;
        do {
          uVar17 = uVar17 - 1;
          psVar13 = psVar13 + (ulong)(ushort)psVar13[0x1c] * 6 + 0x20;
        } while (uVar17 != 0);
      }
    }
  }
  if (uVar22 < *(uint *)(param_1 + 0xf8)) {
    uVar17 = uVar22 & (uVar18 ^ 0xffffffff);
    lVar16 = lVar1;
    if (6 < uVar17) {
      uVar20 = uVar17 + 1 & 0xfffffff8;
      do {
        uVar20 = uVar20 - 8;
        lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar16 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
      } while (uVar20 != 0);
    }
    if ((uVar17 + 1 & 7) != 0) {
      uVar17 = uVar17 + 1 & 7;
      do {
        lVar16 = *(long *)(lVar16 + 8);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  else {
    lVar16 = 0;
  }
  lVar12 = 0;
  puVar2 = (undefined8 *)0x0;
  if (lVar16 != 0) {
    puVar2 = (undefined8 *)(lVar16 - *(int *)(param_1 + 0xfc));
  }
  uVar9 = *(undefined8 *)(psVar13 + 0xc);
  uVar8 = *(undefined8 *)(psVar13 + 0x10);
  uVar3 = *(undefined8 *)(psVar13 + 0x14);
  *puVar2 = *(undefined8 *)(psVar13 + 8);
  puVar2[1] = uVar9;
  puVar2[2] = uVar8;
  puVar2[3] = uVar3;
  uVar17 = *(uint *)(param_1 + 0xf8);
  if ((int)uVar22 < (int)uVar17) {
    if (uVar22 < uVar17) {
      uVar20 = uVar22 & (uVar18 ^ 0xffffffff);
      lVar16 = lVar1;
      if (6 < uVar20) {
        uVar21 = uVar20 + 1 & 0xfffffff8;
        do {
          uVar21 = uVar21 - 8;
          lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar16 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
        } while (uVar21 != 0);
      }
      if ((uVar20 + 1 & 7) != 0) {
        uVar20 = uVar20 + 1 & 7;
        do {
          lVar16 = *(long *)(lVar16 + 8);
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else {
      lVar16 = 0;
    }
    lVar12 = 0;
    if (lVar16 != 0) {
      lVar12 = lVar16 - *(int *)(param_1 + 0xfc);
    }
    lVar12 = lVar12 + 0x80;
  }
  lVar16 = *(long *)(param_1 + 0x100);
  if ((*(char *)(lVar16 + 8) == '\0') || (*(int **)(lVar16 + 0x10) == (int *)0x0)) {
LAB_03b639a8:
    uVar7 = 0;
    if ((int)uVar22 < (int)uVar17) goto LAB_03b639b4;
LAB_03b63aac:
    lVar16 = 0;
  }
  else {
    bVar4 = false;
    bVar5 = false;
    if (**(int **)(lVar16 + 0x10) == 0x56415742) {
      bVar5 = SBORROW4(uVar22,(uint)*(ushort *)(lVar16 + 0x30));
      bVar4 = (int)(uVar22 - *(ushort *)(lVar16 + 0x30)) < 0;
    }
    if (bVar4 == bVar5) goto LAB_03b639a8;
    lVar16 = *(long *)(lVar16 + 0x18);
    if (0 < (int)uVar22) {
      if (2 < uVar22 - 1) {
        uVar20 = uVar22 & 0xfffffffc;
        do {
          uVar20 = uVar20 - 4;
          lVar16 = lVar16 + (ulong)*(ushort *)(lVar16 + 0x38) * 0xc;
          lVar16 = lVar16 + (ulong)*(ushort *)(lVar16 + 0x78) * 0xc;
          lVar16 = lVar16 + 0x40 + (ulong)*(ushort *)(lVar16 + 0xb8) * 0xc;
          lVar16 = lVar16 + (ulong)*(ushort *)(lVar16 + 0xb8) * 0xc + 0xc0;
        } while (uVar20 != 0);
      }
      if ((uVar22 & 3) != 0) {
        uVar11 = uVar11 & 3;
        do {
          uVar11 = uVar11 - 1;
          lVar16 = lVar16 + (ulong)*(ushort *)(lVar16 + 0x38) * 0xc + 0x40;
        } while (uVar11 != 0);
      }
    }
    uVar7 = *(undefined4 *)(lVar16 + 4);
    if ((int)uVar17 <= (int)uVar22) goto LAB_03b63aac;
LAB_03b639b4:
    if (uVar22 < uVar17) {
      uVar11 = uVar22 & (uVar18 ^ 0xffffffff);
      lVar10 = lVar1;
      if (6 < uVar11) {
        uVar18 = uVar11 + 1 & 0xfffffff8;
        do {
          uVar18 = uVar18 - 8;
          lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
        } while (uVar18 != 0);
      }
      if ((uVar11 + 1 & 7) != 0) {
        uVar11 = uVar11 + 1 & 7;
        do {
          lVar10 = *(long *)(lVar10 + 8);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    else {
      lVar10 = 0;
    }
    lVar16 = 0;
    if (lVar10 != 0) {
      lVar16 = lVar10 - *(int *)(param_1 + 0xfc);
    }
  }
  uVar8 = 6;
  uVar9 = 0x20;
LAB_03b63ac4:
  uVar6 = nn::audio::AcquireVoiceSlot
                    ((AudioRendererConfig *)(lVar14 + 0x98),lVar12,uVar7,1,uVar8,0,lVar16,uVar9);
  lVar12 = *(long *)(param_1 + 0x100);
  uVar22 = uVar22 + 1;
  if (*(ushort *)(lVar12 + 0x30) <= uVar22) {
    if ((uVar6 & 1) != 0) {
      return;
    }
LAB_03b63ae0:
    if (*(long *)(param_1 + 0xf0) == lVar1) {
      return;
    }
    lVar16 = (long)*(int *)(param_1 + 0xfc);
    lVar12 = *(long *)(param_1 + 0xf0) - lVar16;
    do {
      uVar6 = nn::audio::IsVoiceValid((VoiceType *)(lVar12 + 0x80));
      if ((uVar6 & 1) != 0) {
        nn::audio::ReleaseVoiceSlot
                  ((AudioRendererConfig *)(lVar14 + 0x98),(VoiceType *)(lVar12 + 0x80));
      }
      lVar12 = *(long *)(lVar12 + lVar16 + 8) - lVar16;
    } while (lVar12 != lVar1 - *(int *)(param_1 + 0xfc));
    return;
  }
  goto LAB_03b635f8;
}

