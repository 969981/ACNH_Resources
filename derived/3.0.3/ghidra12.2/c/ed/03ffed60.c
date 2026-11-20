
/* WARNING: Removing unreachable block (ram,0x03fff0b0) */

void FUN_03ffed60(long param_1,short *param_2,ulong param_3)

{
  short *psVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  void *__dest;
  void *__src;
  short *psVar11;
  size_t __n;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  void *__dest_00;
  uint uVar28;
  void *pvVar29;
  ulong uVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((*(int *)(param_1 + 0x5b0) != 0) || (*(int *)(param_1 + 0x5b4) == 0)) {
LAB_03ffed94:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x518));
    memset(param_2,0,param_3 << 1);
    return;
  }
  uVar20 = *(ulong *)(param_1 + 0x538);
  uVar23 = (uVar20 - *(long *)(param_1 + 0x568)) + *(long *)(param_1 + 0x570);
  uVar18 = 0;
  if (uVar20 <= uVar23) {
    uVar18 = uVar20;
  }
  uVar23 = uVar23 - uVar18;
  uVar18 = uVar23 - 0x200;
  lVar24 = (long)*(int *)(param_1 + 0x510) - (long)(int)uVar23;
  if (uVar23 < 0x200) {
    uVar18 = 0;
  }
  fVar32 = *(float *)(param_1 + 0x4f4) * 0.2 + *(float *)(param_1 + 0x4c8) * 0.8;
  *(float *)(param_1 + 0x4c8) = fVar32;
  if (0x12 < lVar24 + 9U) {
    lVar24 = lVar24 / 10;
    iVar25 = ((int)uVar20 + -1 >> 1) / 10;
    fVar32 = fVar32 + ((float)(lVar24 * lVar24 * lVar24) /
                      (float)((long)iVar25 * (long)iVar25 * (long)iVar25)) * 0.1 * fVar32;
    *(float *)(param_1 + 0x4c8) = fVar32;
  }
  uVar23 = (ulong)*(uint *)(param_1 + 0x4b8);
  iVar25 = 0;
  if (uVar23 != 0) {
    iVar25 = (int)((ulong)(long)(int)param_3 / uVar23);
  }
  uVar28 = *(uint *)(param_1 + 0x504);
  fVar33 = *(float *)(param_1 + 0x4cc);
  if (*(float *)(param_1 + 0x4cc) <= fVar32) {
    fVar33 = fVar32;
  }
  if (*(float *)(param_1 + 0x4d0) <= fVar33) {
    fVar33 = *(float *)(param_1 + 0x4d0);
  }
  iVar31 = 0;
  if (uVar23 != 0) {
    iVar31 = (int)(uVar18 / uVar23);
  }
  uVar21 = (uint)((1.0 / fVar33) * (float)(uint)(iVar25 << 0xc));
  uVar4 = iVar31 << 0xc;
  if (uVar21 <= (uint)(iVar31 << 0xc)) {
    uVar4 = uVar21;
  }
  uVar20 = (ulong)uVar4;
  uVar4 = *(uint *)(param_1 + 0x500);
  uVar18 = 0;
  if (uVar23 != 0) {
    uVar18 = param_3 / uVar23;
  }
  uVar21 = (uint)*(ushort *)(param_1 + 0x4fc);
  if (*(int *)(param_1 + 0x5b8) != 0) {
    uVar21 = 0;
  }
  uVar23 = 0;
  if (uVar18 != 0) {
    uVar23 = uVar20 / uVar18;
  }
  if ((int)uVar23 == 0) goto LAB_03ffed94;
  uVar18 = (ulong)*(uint *)(param_1 + 0x4b8);
  if ((uVar23 & 1) != 0) {
    iVar25 = 0;
    if (uVar18 != 0) {
      iVar25 = (int)(param_3 / uVar18);
    }
    uVar22 = (int)uVar23 + 1;
    uVar23 = (ulong)uVar22;
    uVar20 = (ulong)(uVar22 * iVar25);
  }
  pvVar29 = *(void **)(param_1 + 0x550);
  uVar30 = *(ulong *)(param_1 + 0x570);
  uVar18 = uVar18 * (uVar20 >> 0xc) + 0x200;
  __dest_00 = *(void **)(param_1 + 0x588);
  __src = (void *)((long)pvVar29 + *(long *)(param_1 + 0x568) * 2);
  if ((long)uVar30 < *(long *)(param_1 + 0x568)) {
    uVar27 = (long)pvVar29 + (*(long *)(param_1 + 0x538) * 2 - (long)__src) >> 1;
    uVar20 = uVar27;
    if (uVar18 <= uVar27) {
      uVar20 = uVar18;
    }
    memcpy(__dest_00,__src,uVar20 << 1);
    if (uVar18 <= uVar27) goto LAB_03ffefc0;
    if (uVar18 - uVar20 <= uVar30) {
      uVar30 = uVar18 - uVar20;
    }
    __dest = (void *)((long)__dest_00 + uVar20 * 2);
    __src = pvVar29;
    __n = uVar30 << 1;
  }
  else {
    __dest = __dest_00;
    __n = uVar18 * 2;
  }
  memcpy(__dest,__src,__n);
LAB_03ffefc0:
  if (*(int *)(param_1 + 0x5b8) != 0) {
    memset(__dest_00,0,uVar18 * 2);
  }
  pMVar2 = (MutexType *)(param_1 + 0x518);
  nn::os::UnlockMutex(pMVar2);
  iVar25 = (int)(uVar23 >> 1);
  iVar31 = (int)uVar23;
  uVar23 = (ulong)*(uint *)(param_1 + 0x4b8);
  uVar19 = *(int *)(param_1 + 0x4c0) - iVar25;
  uVar22 = *(int *)(param_1 + 0x4c0) + iVar25;
  if (iVar31 < 0x1001) {
    if (param_3 != 0) {
      uVar18 = 0;
      do {
        lVar14 = (uVar19 >> 0xc) * uVar23;
        lVar16 = (uVar22 >> 0xc) * uVar23;
        uVar20 = (ulong)(uVar19 >> 0xc);
        lVar24 = *(long *)(param_1 + 0x588);
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        local_78 = 0;
        if (lVar14 == lVar16) {
          if (uVar23 != 0) {
            if (uVar23 < 4) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              psVar11 = (short *)(lVar24 + uVar20 * uVar23 * 2 + 4);
              piVar13 = (int *)&local_78;
              do {
                lVar14 = lVar14 + -4;
                piVar13[-2] = (int)psVar11[-2];
                piVar13[-1] = (int)psVar11[-1];
                *piVar13 = (int)*psVar11;
                psVar17 = psVar11 + 1;
                psVar11 = psVar11 + 4;
                piVar13[1] = (int)*psVar17;
                piVar13 = piVar13 + 4;
              } while (-lVar14 != (uVar23 & 0xfffffffffffffffc));
              lVar14 = -lVar14;
            }
            if ((uVar23 & 3) != 0) {
              uVar30 = uVar23 & 3;
              psVar11 = (short *)(lVar24 + (lVar14 + uVar20 * uVar23) * 2);
              piVar13 = (int *)((long)&local_80 + lVar14 * 4);
              do {
                uVar30 = uVar30 - 1;
                *piVar13 = (int)*psVar11;
                psVar11 = psVar11 + 1;
                piVar13 = piVar13 + 1;
              } while (uVar30 != 0);
            }
LAB_03fff1cc:
            if (uVar23 != 0) {
              if (uVar23 < 4) {
                lVar24 = 0;
              }
              else {
                psVar11 = param_2 + uVar18 + 2;
                lVar24 = 0;
                piVar13 = (int *)&local_78;
                do {
                  iVar10 = piVar13[-2];
                  iVar26 = piVar13[-1];
                  lVar24 = lVar24 + -4;
                  if (iVar10 < -0x7fff) {
                    iVar10 = -0x8000;
                  }
                  if (0x7ffe < iVar10) {
                    iVar10 = 0x7fff;
                  }
                  psVar11[-2] = (short)iVar10;
                  if (iVar26 < -0x7fff) {
                    iVar26 = -0x8000;
                  }
                  if (0x7ffe < iVar26) {
                    iVar26 = 0x7fff;
                  }
                  psVar11[-1] = (short)iVar26;
                  iVar10 = *piVar13;
                  iVar26 = piVar13[1];
                  if (iVar10 < -0x7fff) {
                    iVar10 = -0x8000;
                  }
                  if (0x7ffe < iVar10) {
                    iVar10 = 0x7fff;
                  }
                  *psVar11 = (short)iVar10;
                  if (iVar26 < -0x7fff) {
                    iVar26 = -0x8000;
                  }
                  if (0x7ffe < iVar26) {
                    iVar26 = 0x7fff;
                  }
                  psVar11[1] = (short)iVar26;
                  psVar11 = psVar11 + 4;
                  piVar13 = piVar13 + 4;
                } while (-lVar24 != (uVar23 & 0xfffffffffffffffc));
                lVar24 = -lVar24;
              }
              if ((uVar23 & 3) != 0) {
                uVar23 = uVar23 & 3;
                psVar11 = param_2 + lVar24 + uVar18;
                piVar13 = (int *)((long)&local_80 + lVar24 * 4);
                do {
                  iVar10 = *piVar13;
                  if (iVar10 < -0x7fff) {
                    iVar10 = -0x8000;
                  }
                  if (0x7ffe < iVar10) {
                    iVar10 = 0x7fff;
                  }
                  uVar23 = uVar23 - 1;
                  *psVar11 = (short)iVar10;
                  psVar11 = psVar11 + 1;
                  piVar13 = piVar13 + 1;
                } while (uVar23 != 0);
              }
              uVar23 = (ulong)*(uint *)(param_1 + 0x4b8);
            }
          }
        }
        else if (uVar23 != 0) {
          uVar3 = uVar22 & 0xfff;
          iVar10 = 0x1000 - (uVar19 & 0xfff);
          if (uVar23 == 1) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            psVar11 = (short *)(lVar24 + 2 + uVar20 * uVar23 * 2);
            psVar17 = (short *)(lVar24 + 2 + (uVar22 >> 0xc) * uVar23 * 2);
            piVar13 = (int *)((long)&local_80 + 4);
            do {
              lVar12 = lVar12 + -2;
              iVar26 = 0;
              if (iVar31 != 0) {
                iVar26 = (int)(iVar10 * psVar11[-1] + uVar3 * (int)psVar17[-1]) / iVar31;
              }
              piVar13[-1] = iVar26;
              sVar5 = *psVar11;
              sVar6 = *psVar17;
              psVar11 = psVar11 + 2;
              psVar17 = psVar17 + 2;
              iVar26 = 0;
              if (iVar31 != 0) {
                iVar26 = (int)(iVar10 * sVar5 + uVar3 * (int)sVar6) / iVar31;
              }
              *piVar13 = iVar26;
              piVar13 = piVar13 + 2;
            } while (-lVar12 != (uVar23 & 0xfffffffffffffffe));
            lVar12 = -lVar12;
            if ((uVar23 & 1) == 0) goto LAB_03fff1cc;
          }
          iVar26 = 0;
          if (iVar31 != 0) {
            iVar26 = (int)(iVar10 * *(short *)(lVar24 + (lVar12 + lVar14) * 2) +
                          uVar3 * (int)*(short *)(lVar24 + (lVar12 + lVar16) * 2)) / iVar31;
          }
          *(int *)((long)&local_80 + lVar12 * 4) = iVar26;
          goto LAB_03fff1cc;
        }
        uVar18 = uVar18 + uVar23;
        uVar19 = uVar19 + iVar31;
        uVar22 = uVar22 + iVar31;
      } while (uVar18 < param_3);
    }
  }
  else if (param_3 != 0) {
    if (uVar23 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar18 = 0;
    do {
      lVar24 = *(long *)(param_1 + 0x588);
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      local_78 = 0;
      if (uVar23 != 0) {
        uVar20 = (ulong)(uVar19 >> 0xc);
        iVar10 = 0x1000 - (uVar19 & 0xfff);
        if (uVar23 < 4) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          psVar11 = (short *)(lVar24 + uVar20 * uVar23 * 2 + 4);
          piVar13 = (int *)&local_78;
          do {
            lVar14 = lVar14 + -4;
            piVar13[-2] = piVar13[-2] + iVar10 * psVar11[-2];
            piVar13[-1] = piVar13[-1] + iVar10 * psVar11[-1];
            *piVar13 = *piVar13 + iVar10 * *psVar11;
            psVar17 = psVar11 + 1;
            psVar11 = psVar11 + 4;
            piVar13[1] = piVar13[1] + iVar10 * *psVar17;
            piVar13 = piVar13 + 4;
          } while (-lVar14 != (uVar23 & 0xfffffffffffffffc));
          lVar14 = -lVar14;
        }
        if ((uVar23 & 3) != 0) {
          uVar30 = uVar23 & 3;
          piVar13 = (int *)((long)&local_80 + lVar14 * 4);
          psVar11 = (short *)(lVar24 + (lVar14 + uVar20 * uVar23) * 2);
          do {
            uVar30 = uVar30 - 1;
            *piVar13 = *piVar13 + iVar10 * *psVar11;
            piVar13 = piVar13 + 1;
            psVar11 = psVar11 + 1;
          } while (uVar30 != 0);
        }
        uVar27 = uVar23 & 3;
        uVar15 = (uVar22 >> 0xc) * uVar23;
        uVar30 = (uVar19 >> 0xc) * uVar23 + uVar23;
        if (uVar30 < uVar15) {
          psVar11 = (short *)(lVar24 + (uVar20 + 1) * uVar23 * 2 + 4);
          do {
            if (uVar23 < 4) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              psVar17 = psVar11;
              piVar13 = (int *)&local_78;
              do {
                lVar14 = lVar14 + -4;
                piVar13[-2] = piVar13[-2] + psVar17[-2] * 0x1000;
                piVar13[-1] = piVar13[-1] + psVar17[-1] * 0x1000;
                *piVar13 = *piVar13 + *psVar17 * 0x1000;
                psVar1 = psVar17 + 1;
                psVar17 = psVar17 + 4;
                piVar13[1] = piVar13[1] + *psVar1 * 0x1000;
                piVar13 = piVar13 + 4;
              } while (-lVar14 != (uVar23 & 0xfffffffffffffffc));
              lVar14 = -lVar14;
            }
            if ((uVar23 & 3) != 0) {
              piVar13 = (int *)((long)&local_80 + lVar14 * 4);
              psVar17 = (short *)(lVar24 + (lVar14 + uVar30) * 2);
              uVar20 = uVar27;
              do {
                uVar20 = uVar20 - 1;
                *piVar13 = *piVar13 + *psVar17 * 0x1000;
                piVar13 = piVar13 + 1;
                psVar17 = psVar17 + 1;
              } while (uVar20 != 0);
            }
            uVar30 = uVar30 + uVar23;
            psVar11 = psVar11 + uVar23;
          } while (uVar30 < uVar15);
        }
        uVar3 = uVar22 & 0xfff;
        if (uVar23 < 4) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          psVar11 = (short *)(lVar24 + (uVar22 >> 0xc) * uVar23 * 2 + 4);
          piVar13 = (int *)&local_78;
          do {
            lVar14 = lVar14 + -4;
            piVar13[-2] = piVar13[-2] + uVar3 * (int)psVar11[-2];
            piVar13[-1] = piVar13[-1] + uVar3 * (int)psVar11[-1];
            *piVar13 = *piVar13 + uVar3 * (int)*psVar11;
            psVar17 = psVar11 + 1;
            psVar11 = psVar11 + 4;
            piVar13[1] = piVar13[1] + uVar3 * (int)*psVar17;
            piVar13 = piVar13 + 4;
          } while (-lVar14 != (uVar23 & 0xfffffffffffffffc));
          lVar14 = -lVar14;
        }
        if ((uVar23 & 3) != 0) {
          psVar11 = (short *)(lVar24 + (lVar14 + (uVar22 >> 0xc) * uVar23) * 2);
          piVar13 = (int *)((long)&local_80 + lVar14 * 4);
          do {
            uVar27 = uVar27 - 1;
            *piVar13 = *piVar13 + uVar3 * (int)*psVar11;
            psVar11 = psVar11 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar27 != 0);
        }
        if (uVar23 == 1) {
          lVar24 = 0;
LAB_03fff610:
          iVar10 = 0;
          if (iVar31 != 0) {
            iVar10 = *(int *)((long)&local_80 + lVar24 * 4) / iVar31;
          }
          if (iVar10 < -0x7fff) {
            iVar10 = -0x8000;
          }
          if (0x7ffe < iVar10) {
            iVar10 = 0x7fff;
          }
          param_2[uVar18 + lVar24] = (short)iVar10;
        }
        else {
          lVar24 = 0;
          psVar11 = param_2 + uVar18 + 1;
          piVar13 = (int *)((long)&local_80 + 4);
          do {
            lVar24 = lVar24 + -2;
            iVar10 = 0;
            if (iVar31 != 0) {
              iVar10 = piVar13[-1] / iVar31;
            }
            if (iVar10 < -0x7fff) {
              iVar10 = -0x8000;
            }
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            psVar11[-1] = (short)iVar10;
            iVar10 = 0;
            if (iVar31 != 0) {
              iVar10 = *piVar13 / iVar31;
            }
            if (iVar10 < -0x7fff) {
              iVar10 = -0x8000;
            }
            if (0x7ffe < iVar10) {
              iVar10 = 0x7fff;
            }
            *psVar11 = (short)iVar10;
            psVar11 = psVar11 + 2;
            piVar13 = piVar13 + 2;
          } while (-lVar24 != (uVar23 & 0xfffffffffffffffe));
          lVar24 = -lVar24;
          if ((uVar23 & 1) != 0) goto LAB_03fff610;
        }
        uVar23 = (ulong)*(uint *)(param_1 + 0x4b8);
      }
      uVar18 = uVar18 + uVar23;
      uVar19 = uVar19 + iVar31;
      uVar22 = uVar22 + iVar31;
    } while (uVar18 < param_3);
  }
  uVar18 = uVar23 * (uVar19 + iVar25 >> 0xc) - 0x100;
  iVar31 = 0;
  if (uVar23 != 0) {
    iVar31 = (int)(uVar18 / uVar23);
  }
  *(uint *)(param_1 + 0x4c0) = uVar19 + iVar25 + iVar31 * -0x1000;
  if (uVar4 == 0) {
    uVar23 = 0;
    uVar28 = 0;
  }
  else {
    uVar23 = (ulong)uVar4;
    if (param_3 <= uVar4) {
      uVar23 = param_3;
    }
    if (uVar23 == 0) {
      uVar28 = uVar4;
    }
    else {
      iVar25 = -uVar4;
      psVar11 = param_2;
      uVar20 = uVar23;
      do {
        uVar22 = uVar28 + 1 + iVar25;
        iVar25 = iVar25 + 1;
        iVar31 = (int)(((float)uVar22 / (float)uVar28) * (float)(int)*psVar11) * uVar21;
        uVar22 = iVar31 + 0xbf;
        if (-0x41 < iVar31) {
          uVar22 = iVar31 + 0x40;
        }
        uVar20 = uVar20 - 1;
        *psVar11 = (short)(uVar22 >> 7);
        psVar11 = psVar11 + 1;
      } while (uVar20 != 0);
      uVar28 = -iVar25;
    }
  }
  uVar20 = param_3 - uVar23;
  if (uVar20 < 8) {
    uVar27 = 0;
  }
  else {
    psVar11 = param_2 + uVar23;
    uVar30 = 0;
    do {
      uVar8 = *(undefined8 *)(psVar11 + 4);
      uVar7 = *(undefined8 *)psVar11;
      uVar27 = uVar30 + 8;
      uVar15 = uVar30 + 0x10;
      iVar25 = (int)(short)uVar21;
      auVar34._0_8_ = CONCAT44((short)((ulong)uVar7 >> 0x10) * iVar25,(short)uVar7 * iVar25);
      auVar34._8_4_ = (short)((ulong)uVar7 >> 0x20) * iVar25;
      auVar34._12_4_ = (short)((ulong)uVar7 >> 0x30) * iVar25;
      iVar25 = (int)(short)uVar21;
      iVar31 = (short)((ulong)uVar8 >> 0x10) * iVar25;
      auVar35._8_8_ = auVar34._8_8_;
      auVar35._0_8_ = NEON_sqrshrn(auVar34._0_8_,auVar34,7,4);
      auVar36._4_2_ = (short)iVar31;
      auVar36._0_4_ = (short)uVar8 * iVar25;
      auVar36._6_2_ = (short)((uint)iVar31 >> 0x10);
      auVar36._8_4_ = (short)((ulong)uVar8 >> 0x20) * iVar25;
      auVar36._12_4_ = (short)((ulong)uVar8 >> 0x30) * iVar25;
      auVar36 = NEON_sqrshrn2(auVar35,auVar36,7,4);
      *(long *)(psVar11 + 4) = auVar36._8_8_;
      *(long *)psVar11 = auVar36._0_8_;
      psVar11 = psVar11 + 8;
      uVar30 = uVar27;
    } while (uVar15 <= uVar20);
  }
  if (uVar27 < uVar20) {
    lVar24 = (uVar23 + uVar27) - param_3;
    psVar11 = param_2 + uVar27 + uVar23;
    do {
      iVar31 = (int)*psVar11 * uVar21;
      iVar25 = iVar31 + 0xbf;
      if (-0x41 < iVar31) {
        iVar25 = iVar31 + 0x40;
      }
      iVar25 = iVar25 >> 7;
      if (iVar25 < -0x7fff) {
        iVar25 = -0x8000;
      }
      if (0x7ffe < iVar25) {
        iVar25 = 0x7fff;
      }
      bVar9 = lVar24 != -1;
      lVar24 = lVar24 + 1;
      *psVar11 = (short)iVar25;
      psVar11 = psVar11 + 1;
    } while (bVar9);
  }
  nn::os::LockMutex(pMVar2);
  if (*(uint *)(param_1 + 0x500) == uVar4) {
    *(uint *)(param_1 + 0x500) = uVar28;
  }
  uVar18 = *(long *)(param_1 + 0x568) + uVar18;
  uVar23 = 0;
  if (*(ulong *)(param_1 + 0x538) <= uVar18) {
    uVar23 = *(ulong *)(param_1 + 0x538);
  }
  *(ulong *)(param_1 + 0x568) = uVar18 - uVar23;
  nn::os::UnlockMutex(pMVar2);
  return;
}

