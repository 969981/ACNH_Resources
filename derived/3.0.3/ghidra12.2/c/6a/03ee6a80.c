
undefined8 FUN_03ee6a80(float param_1,long param_2,uint param_3)

{
  short *psVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  if (*(long *)(param_2 + 8) == 0) {
    return 0;
  }
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (uVar12 = *(uint *)(*(long *)(param_2 + 0x10) + 0x290), 0 < (int)uVar12)) {
    uVar11 = *(uint *)(param_2 + 0x30);
    lVar14 = *(long *)(param_2 + 0x38);
    if ((*(uint *)(param_2 + 0x18) & 0x41) == 1) {
      fVar20 = 0.0;
      uVar15 = 0;
      do {
        uVar19 = uVar15;
        if (uVar11 <= uVar15) {
          uVar19 = 0;
        }
        bVar3 = *(byte *)(lVar14 + (ulong)uVar19 * 8);
        pfVar16 = (float *)(lVar14 + (ulong)uVar19 * 8 + 4);
        if (((bVar3 ^ 0xff) & 3) == 0) {
          if (((bVar3 >> 3 & 1) != 0) || (fVar21 = 0.0, (bVar3 >> 2 & 1) != 0)) {
            fVar21 = 1.0;
          }
        }
        else {
          fVar21 = 0.0;
        }
        fVar22 = *pfVar16;
        if (fVar22 < fVar21) {
          fVar24 = fVar22 + param_1;
          bVar5 = false;
          bVar6 = false;
          if (fVar22 <= fVar24) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar21)) {
              bVar5 = fVar24 < fVar21;
              bVar6 = false;
            }
          }
          if (bVar5 != bVar6) {
            fVar21 = fVar24;
          }
LAB_03ee6b14:
          *pfVar16 = fVar21;
          uVar11 = *(uint *)(param_2 + 0x30);
          lVar14 = *(long *)(param_2 + 0x38);
        }
        else if (fVar21 < fVar22) {
          fVar24 = fVar22 - param_1;
          bVar5 = false;
          bVar6 = false;
          if (fVar24 <= fVar22) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar24) && !NAN(fVar21)) {
              bVar5 = fVar24 == fVar21;
              bVar6 = fVar21 <= fVar24;
            }
          }
          if (bVar6 && !bVar5) {
            fVar21 = fVar24;
          }
          goto LAB_03ee6b14;
        }
        uVar19 = uVar15;
        if (uVar11 <= uVar15) {
          uVar19 = 0;
        }
        uVar15 = uVar15 + 1;
        fVar21 = *(float *)(lVar14 + (ulong)uVar19 * 8 + 4);
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
      } while (uVar12 != uVar15);
    }
    else {
      fVar20 = 0.0;
      uVar15 = 0;
      do {
        uVar19 = uVar15;
        if (uVar11 <= uVar15) {
          uVar19 = 0;
        }
        pfVar16 = (float *)(lVar14 + (ulong)uVar19 * 8 + 4);
        fVar21 = *pfVar16;
        if (fVar21 < 0.0) {
          fVar22 = fVar21 + param_1;
          bVar5 = false;
          bVar6 = false;
          if (fVar21 <= fVar22) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar22)) {
              bVar5 = fVar22 < 0.0;
              bVar6 = false;
            }
          }
          fVar21 = 0.0;
          if (bVar5 != bVar6) {
            fVar21 = fVar22;
          }
LAB_03ee6bd0:
          *pfVar16 = fVar21;
          uVar11 = *(uint *)(param_2 + 0x30);
          lVar14 = *(long *)(param_2 + 0x38);
        }
        else if (0.0 < fVar21) {
          fVar22 = fVar21 - param_1;
          bVar5 = false;
          bVar6 = false;
          if (fVar22 <= fVar21) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(fVar22)) {
              bVar5 = fVar22 == 0.0;
              bVar6 = 0.0 <= fVar22;
            }
          }
          fVar21 = 0.0;
          if (bVar6 && !bVar5) {
            fVar21 = fVar22;
          }
          goto LAB_03ee6bd0;
        }
        uVar19 = uVar15;
        if (uVar11 <= uVar15) {
          uVar19 = 0;
        }
        uVar15 = uVar15 + 1;
        fVar21 = *(float *)(lVar14 + (ulong)uVar19 * 8 + 4);
        if (fVar20 <= fVar21) {
          fVar20 = fVar21;
        }
      } while (uVar12 != uVar15);
    }
    if (fVar20 != 0.0) {
      memset(*(void **)(param_2 + 0x58),0,(ulong)*(uint *)(param_2 + 0x50));
      lVar14 = *(long *)(param_2 + 8);
      uVar12 = *(uint *)(*(long *)(lVar14 + 8) + 8);
      if (0 < (int)uVar12) {
        uVar11 = 0;
        do {
          uVar15 = uVar11;
          if (*(uint *)(lVar14 + 0x10) <= uVar11) {
            uVar15 = 0;
          }
          FUN_03ef9234(*(undefined8 *)(lVar14 + 8),*(long *)(lVar14 + 0x18) + (ulong)uVar15 * 0x1c,
                       uVar11);
          uVar15 = uVar11;
          if (*(uint *)(lVar14 + 0x30) <= uVar11) {
            uVar15 = 0;
          }
          uVar11 = uVar11 + 1;
          *(undefined1 *)(*(long *)(lVar14 + 0x38) + (ulong)uVar15) = 2;
        } while (uVar12 != uVar11);
      }
      *(undefined1 *)(lVar14 + 0x40) = 0;
      uVar12 = *(uint *)(param_2 + 0x18);
      lVar14 = *(long *)(param_2 + 0x10);
      if (((uVar12 >> 2 & 1) != 0) && (uVar11 = *(uint *)(lVar14 + 0x218), 0 < (int)uVar11)) {
        uVar12 = 0;
        do {
          lVar14 = *(long *)(param_2 + 8);
          uVar15 = uVar12;
          if (*(uint *)(*(long *)(param_2 + 0x10) + 0x268) <= uVar12) {
            uVar15 = 0;
          }
          uVar15 = *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 0x270) + (ulong)uVar15 * 0x130 +
                            0x48);
          if (*(uint *)(param_2 + 0x20) <= uVar15) {
            uVar15 = 0;
          }
          sVar4 = *(short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar15 * 4 + 2);
          FUN_03efa0c0(lVar14,(int)sVar4);
          uVar19 = (uint)sVar4;
          uVar15 = uVar19;
          if (*(uint *)(lVar14 + 0x10) <= (uint)(int)sVar4) {
            uVar15 = 0;
          }
          FUN_03ef8788(*(undefined8 *)(lVar14 + 8),
                       *(long *)(lVar14 + 0x18) + (long)(int)uVar15 * 0x1c,(int)sVar4);
          uVar12 = uVar12 + 1;
          if (*(uint *)(lVar14 + 0x30) <= uVar19) {
            uVar19 = 0;
          }
          *(undefined1 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar19) = 2;
          *(undefined1 *)(lVar14 + 0x40) = 0;
        } while (uVar11 != uVar12);
        uVar12 = *(uint *)(param_2 + 0x18);
        lVar14 = *(long *)(param_2 + 0x10);
      }
      if (((uVar12 >> 3 & 1) != 0) && (uVar11 = *(uint *)(lVar14 + 0x290), 0 < (int)uVar11)) {
        uVar12 = 0;
        do {
          lVar14 = *(long *)(param_2 + 8);
          uVar15 = uVar12;
          if (*(uint *)(*(long *)(param_2 + 0x10) + 0x2e0) <= uVar12) {
            uVar15 = 0;
          }
          uVar15 = *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 0x2e8) + (ulong)uVar15 * 0xd0 +
                            0x48);
          if (*(uint *)(param_2 + 0x20) <= uVar15) {
            uVar15 = 0;
          }
          sVar4 = *(short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar15 * 4 + 2);
          FUN_03efa0c0(lVar14,(int)sVar4);
          uVar19 = (uint)sVar4;
          uVar15 = uVar19;
          if (*(uint *)(lVar14 + 0x10) <= (uint)(int)sVar4) {
            uVar15 = 0;
          }
          FUN_03ef8788(*(undefined8 *)(lVar14 + 8),
                       *(long *)(lVar14 + 0x18) + (long)(int)uVar15 * 0x1c,(int)sVar4);
          uVar12 = uVar12 + 1;
          if (*(uint *)(lVar14 + 0x30) <= uVar19) {
            uVar19 = 0;
          }
          *(undefined1 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar19) = 2;
          *(undefined1 *)(lVar14 + 0x40) = 0;
        } while (uVar11 != uVar12);
        uVar12 = *(uint *)(param_2 + 0x18);
        lVar14 = *(long *)(param_2 + 0x10);
      }
      if (((uVar12 >> 1 & 1) != 0) && (uVar12 = *(uint *)(lVar14 + 0x218), 0 < (int)uVar12)) {
        uVar11 = 0;
        do {
          uVar15 = uVar11;
          if (*(uint *)(param_2 + 0x40) <= uVar11) {
            uVar15 = 0;
          }
          lVar14 = *(long *)(param_2 + 0x48) + (ulong)uVar15 * 0x1c;
          if (*(char *)(lVar14 + 0x18) != '\0') {
            lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0x270);
            uVar19 = uVar11;
            if (*(uint *)(*(long *)(param_2 + 0x10) + 0x268) <= uVar11) {
              uVar19 = 0;
            }
            uVar2 = *(uint *)(lVar17 + (ulong)uVar19 * 0x130 + 0x48);
            if (*(uint *)(param_2 + 0x20) <= uVar2) {
              uVar2 = 0;
            }
            psVar1 = (short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar2 * 4);
            if (*psVar1 != -1 && psVar1[1] != -1) {
              lVar9 = *(long *)(param_2 + 0x48) + (ulong)uVar15 * 0x1c;
              fVar29 = *(float *)(lVar9 + 0x14);
              lVar13 = lVar17 + (ulong)uVar19 * 0x130;
              fVar26 = *(float *)(lVar9 + 0xc);
              fVar27 = *(float *)(lVar9 + 0x10);
              fVar30 = *(float *)(lVar13 + 0x68);
              fVar28 = *(float *)(lVar13 + 0x6c);
              fVar31 = *(float *)(lVar13 + 0x70);
              uVar7 = FUN_03efb424(&local_b0,lVar14,lVar13 + 0xb8,lVar13 + 0xe0,lVar13 + 0x120);
              fVar24 = 1.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
              fVar22 = 0.0;
              if ((uVar7 & 1) != 0) {
                lVar17 = lVar17 + (ulong)uVar19 * 0x130;
                fVar22 = *(float *)(lVar17 + 0x90);
                fVar23 = *(float *)(lVar17 + 0x94);
                fVar32 = *(float *)(lVar17 + 0x98);
                fVar25 = *(float *)(lVar17 + 0x9c);
                fVar24 = ((-(fVar22 * local_b0) + fStack_a4 * fVar25) - fStack_ac * fVar23) -
                         local_a8 * fVar32;
                fVar20 = (fStack_a4 * fVar22 + local_b0 * fVar25 + local_a8 * fVar23) -
                         fStack_ac * fVar32;
                fVar21 = -(fVar22 * local_a8) + fStack_ac * fVar25 + fStack_a4 * fVar23 +
                         local_b0 * fVar32;
                fVar22 = ((fVar22 * fStack_ac + local_a8 * fVar25) - local_b0 * fVar23) +
                         fStack_a4 * fVar32;
              }
              local_a8 = fVar22;
              fStack_ac = fVar21;
              local_b0 = fVar20;
              fStack_a4 = fVar24;
              FUN_03ef9b40(*(undefined8 *)(param_2 + 8),(long)psVar1[1]);
              fVar21 = fStack_a4;
              fVar20 = local_a8;
              lVar14 = *(long *)(param_2 + 8);
              sVar4 = psVar1[1];
              uVar8 = CONCAT44(fStack_ac,local_b0);
              FUN_03efa0c0(lVar14,(int)sVar4);
              uVar19 = (uint)sVar4;
              uVar15 = uVar19;
              if (*(uint *)(lVar14 + 0x10) <= (uint)(int)sVar4) {
                uVar15 = 0;
              }
              puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x18) + (long)(int)uVar15 * 0x1c);
              *puVar10 = uVar8;
              *(float *)(puVar10 + 1) = fVar20;
              *(float *)((long)puVar10 + 0xc) = fVar21;
              *(float *)(puVar10 + 2) = fVar26 + fVar30;
              *(float *)((long)puVar10 + 0x14) = fVar27 + fVar28;
              *(float *)(puVar10 + 3) = fVar29 + fVar31;
              if (*(uint *)(lVar14 + 0x30) <= uVar19) {
                uVar19 = 0;
              }
              *(undefined1 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar19) = 2;
              *(undefined1 *)(lVar14 + 0x40) = 0;
              if ((*psVar1 != -1) && (psVar1[1] != -1)) {
                uVar18 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
                uVar8 = FUN_03ef9b40(*(long *)(param_2 + 8),(int)psVar1[1]);
                FUN_03ef8c00(uVar18,uVar8,(long)psVar1[1],1,1);
              }
              uVar15 = uVar11;
              if (*(uint *)(param_2 + 0x50) <= uVar11) {
                uVar15 = 0;
              }
              *(byte *)(*(long *)(param_2 + 0x58) + (ulong)uVar15) =
                   *(byte *)(*(long *)(param_2 + 0x58) + (ulong)uVar15) | 2;
              uVar15 = uVar11;
              if (*(uint *)(param_2 + 0x50) <= uVar11) {
                uVar15 = 0;
              }
              *(byte *)(*(long *)(param_2 + 0x58) + (ulong)uVar15) =
                   *(byte *)(*(long *)(param_2 + 0x58) + (ulong)uVar15) | 1;
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar12 != uVar11);
        lVar14 = *(long *)(param_2 + 0x10);
      }
      uVar12 = *(uint *)(lVar14 + 0x290);
      if (0 < (int)uVar12) {
        if ((param_3 & 1) == 0) {
          uVar11 = 0;
          do {
            uVar15 = uVar11;
            if (*(uint *)(param_2 + 0x30) <= uVar11) {
              uVar15 = 0;
            }
            if (0.0 < *(float *)(*(long *)(param_2 + 0x38) + (ulong)uVar15 * 8 + 4)) {
              uVar19 = uVar11;
              if (*(uint *)(*(long *)(param_2 + 0x10) + 0x2e0) <= uVar11) {
                uVar19 = 0;
              }
              FUN_03ee7664(param_2,*(long *)(*(long *)(param_2 + 0x10) + 0x2e8) +
                                   (ulong)uVar19 * 0xd0,
                           *(long *)(param_2 + 0x38) + (ulong)uVar15 * 8);
            }
            uVar11 = uVar11 + 1;
          } while (uVar12 != uVar11);
        }
        else {
          uVar11 = 0;
          do {
            uVar15 = uVar11;
            if (*(uint *)(param_2 + 0x30) <= uVar11) {
              uVar15 = 0;
            }
            if (0.0 < *(float *)(*(long *)(param_2 + 0x38) + (ulong)uVar15 * 8 + 4)) {
              uVar19 = uVar11;
              if (*(uint *)(*(long *)(param_2 + 0x10) + 0x2e0) <= uVar11) {
                uVar19 = 0;
              }
              lVar14 = *(long *)(*(long *)(param_2 + 0x10) + 0x2e8) + (ulong)uVar19 * 0xd0;
              FUN_03ee7664(param_2,lVar14,*(long *)(param_2 + 0x38) + (ulong)uVar15 * 8);
              uVar15 = *(uint *)(lVar14 + 0x48);
              if (*(uint *)(param_2 + 0x20) <= uVar15) {
                uVar15 = 0;
              }
              psVar1 = (short *)(*(long *)(param_2 + 0x28) + (long)(int)uVar15 * 4);
              if (*psVar1 != -1 && psVar1[1] != -1) {
                uVar18 = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
                uVar8 = FUN_03ef9b40(*(long *)(param_2 + 8),(int)psVar1[1]);
                FUN_03ef8c00(uVar18,uVar8,(long)psVar1[1],1,1);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar12 != uVar11);
        }
      }
      return 1;
    }
  }
  return 0;
}

