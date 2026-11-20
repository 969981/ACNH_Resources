
uint FUN_03ffa540(long param_1,void *param_2,uint param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  short *psVar16;
  uint uVar17;
  int iVar18;
  undefined2 *puVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  
  uVar12 = (ulong)(int)param_3;
  uVar24 = uVar12 >> 2;
  uVar3 = ((uint)*(ushort *)(*(long *)(param_1 + 0x18) + 0x10044) -
          (uint)*(ushort *)(*(long *)(param_1 + 0x18) + 0x10042)) + 0x8000;
  uVar17 = uVar3 & 0x7fff;
  uVar3 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar17 = -(uVar3 & 0x7fff);
  }
  lVar20 = (long)((float)uVar24 / *(float *)(param_1 + 0x3c));
  uVar15 = lVar20 + 0x40;
  if ((ulong)(long)(int)uVar17 >> 1 <= uVar15) {
    uVar15 = (ulong)(long)(int)uVar17 >> 1;
  }
  uVar3 = (int)uVar15 * 0x4000 - 0x100000;
  if (uVar15 < 0x40) {
    uVar3 = 0;
  }
  if ((*(byte *)(param_1 + 0x108c) & 1) == 0) {
    iVar18 = uVar17 << 1;
    uVar17 = uVar3;
  }
  else {
    iVar18 = *(int *)(param_1 + 0x7c);
    uVar17 = (int)lVar20 << 0xe;
    if (*(char *)(param_1 + 0x108d) != '\0') {
      *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x10042) =
           *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x10044);
    }
  }
  lVar20 = param_1 + (long)*(int *)(param_1 + 0x5c) * 4;
  *(int *)(param_1 + 0x78) = (*(int *)(param_1 + 0x78) + iVar18) - *(int *)(lVar20 + 0x60);
  *(int *)(lVar20 + 0x60) = iVar18;
  fVar25 = *(float *)(param_1 + 0x3c);
  iVar18 = *(int *)(param_1 + 0x78) / 6;
  *(int *)(param_1 + 0x7c) = iVar18;
  *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) + 1) % 6;
  if (fVar25 == *(float *)(param_1 + 0x40)) {
    if (iVar18 <= *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) goto LAB_03ffa764;
    fVar26 = *(float *)(param_1 + 0x44);
  }
  else if (fVar25 == *(float *)(param_1 + 0x44)) {
    fVar26 = *(float *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) <= iVar18) {
      if (iVar18 <= *(int *)(param_1 + 0x58)) goto LAB_03ffa764;
      fVar26 = 1.0;
    }
  }
  else if (fVar25 == 1.0) {
    fVar26 = *(float *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50) <= iVar18) {
      if (iVar18 <= *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58)) goto LAB_03ffa764;
      fVar26 = *(float *)(param_1 + 0x48);
    }
  }
  else {
    fVar26 = *(float *)(param_1 + 0x48);
    iVar23 = *(int *)(param_1 + 0x58);
    if (fVar25 == fVar26) {
      fVar26 = 1.0;
      if (iVar23 <= iVar18) {
        if (iVar18 <= *(int *)(param_1 + 0x54) + iVar23) goto LAB_03ffa764;
        fVar26 = *(float *)(param_1 + 0x4c);
      }
    }
    else if (*(int *)(param_1 + 0x50) + iVar23 <= iVar18) goto LAB_03ffa764;
  }
  *(float *)(param_1 + 0x3c) = fVar26;
LAB_03ffa764:
  uVar4 = 0;
  if (uVar24 != 0) {
    uVar4 = (uint)(uVar17 / uVar24);
  }
  if (uVar4 == 0) {
    memset(param_2,0,uVar12);
  }
  else {
    uVar4 = (uVar4 & 1) + uVar4;
    if (uVar4 == 0x4000) {
      FUN_03ffa240(param_1,param_2,uVar12 >> 1);
      if (3 < param_3) {
        psVar16 = (short *)((long)param_2 + 2);
        do {
          iVar18 = (psVar16[-1] * param_4) / 100;
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          psVar16[-1] = (short)iVar18;
          iVar18 = (*psVar16 * param_4) / 100;
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          uVar24 = uVar24 - 1;
          *psVar16 = (short)iVar18;
          psVar16 = psVar16 + 2;
        } while (uVar24 != 0);
      }
    }
    else {
      lVar20 = param_1 + 0x80;
      FUN_03ffa240(param_1,lVar20,uVar15 << 1);
      if (uVar4 < 0x4001) {
        if (3 < param_3) {
          uVar17 = 0;
          if (uVar24 < 2) {
            uVar24 = 1;
          }
          puVar19 = (undefined2 *)((long)param_2 + 2);
          do {
            iVar18 = uVar17 + (uVar4 & 0xfffffffe);
            uVar7 = uVar17 >> 0xe;
            uVar10 = iVar18 - 1;
            uVar8 = uVar10 >> 0xe;
            if (uVar7 == uVar8) {
              psVar16 = (short *)(lVar20 + (ulong)uVar7 * 4);
              iVar23 = (int)*psVar16;
              iVar21 = (int)psVar16[1];
            }
            else {
              psVar5 = (short *)(lVar20 + (ulong)uVar7 * 4);
              psVar16 = (short *)(lVar20 + (ulong)(uVar8 << 1) * 2);
              iVar18 = iVar18 - (uVar10 & 0xffffc000);
              iVar22 = 0x4000 - (uVar17 & 0x3fff);
              iVar23 = 0;
              if (uVar4 != 0) {
                iVar23 = (iVar22 * *psVar5 + iVar18 * *psVar16) / (int)uVar4;
              }
              iVar21 = 0;
              if (uVar4 != 0) {
                iVar21 = (iVar22 * psVar5[1] + iVar18 * psVar16[1]) / (int)uVar4;
              }
            }
            uVar17 = uVar17 + uVar4;
            iVar18 = (iVar23 * param_4) / 100;
            iVar23 = (iVar21 * param_4) / 100;
            if (iVar18 < -0x7fff) {
              iVar18 = -0x8000;
            }
            if (0x7ffe < iVar18) {
              iVar18 = 0x7fff;
            }
            if (iVar23 < -0x7fff) {
              iVar23 = -0x8000;
            }
            puVar19[-1] = (short)iVar18;
            if (0x7ffe < iVar23) {
              iVar23 = 0x7fff;
            }
            uVar24 = uVar24 - 1;
            *puVar19 = (short)iVar23;
            puVar19 = puVar19 + 2;
          } while (uVar24 != 0);
        }
      }
      else if (3 < param_3) {
        uVar12 = 0;
        iVar18 = 0;
        if (uVar24 < 2) {
          uVar24 = 1;
        }
        do {
          iVar23 = iVar18 + (uVar4 >> 1);
          uVar7 = iVar23 - ((int)uVar4 >> 1);
          iVar23 = iVar23 + ((int)uVar4 >> 1);
          uVar17 = uVar7 >> 0xe;
          uVar13 = (ulong)uVar17;
          uVar8 = iVar23 - 1;
          iVar21 = 0x4000 - (uVar7 & 0x3fff);
          psVar16 = (short *)(lVar20 + uVar13 * 4);
          uVar7 = uVar8 >> 0xe;
          uVar11 = (ulong)uVar7;
          iVar22 = iVar21 * *psVar16;
          iVar21 = iVar21 * psVar16[1];
          uVar15 = uVar13 + 1;
          if (uVar15 < uVar11) {
            if ((~uVar17 + uVar7 & 1) != 0) {
              psVar16 = (short *)(lVar20 + uVar15 * 4);
              iVar22 = iVar22 + *psVar16 * 0x4000;
              iVar21 = iVar21 + psVar16[1] * 0x4000;
              uVar15 = uVar13 + 2;
            }
            if (uVar11 - 2 != uVar13) {
              lVar14 = uVar11 - uVar15;
              psVar16 = (short *)(param_1 + 0x86 + uVar15 * 4);
              do {
                psVar5 = psVar16 + -3;
                lVar14 = lVar14 + -2;
                psVar1 = psVar16 + -1;
                psVar2 = psVar16 + -2;
                sVar6 = *psVar16;
                psVar16 = psVar16 + 4;
                iVar22 = iVar22 + ((int)*psVar5 + (int)*psVar1) * 0x4000;
                iVar21 = iVar21 + ((int)*psVar2 + (int)sVar6) * 0x4000;
              } while (lVar14 != 0);
            }
          }
          psVar16 = (short *)(lVar20 + uVar11 * 4);
          iVar18 = iVar18 + uVar4;
          iVar23 = iVar23 - (uVar8 & 0xffffc000);
          iVar9 = 0;
          if (uVar4 != 0) {
            iVar9 = (iVar22 + iVar23 * *psVar16) / (int)uVar4;
          }
          iVar22 = 0;
          if (uVar4 != 0) {
            iVar22 = (iVar21 + iVar23 * psVar16[1]) / (int)uVar4;
          }
          iVar23 = (iVar9 * param_4) / 100;
          if (iVar23 < -0x7fff) {
            iVar23 = -0x8000;
          }
          if (0x7ffe < iVar23) {
            iVar23 = 0x7fff;
          }
          iVar22 = (iVar22 * param_4) / 100;
          if (iVar22 < -0x7fff) {
            iVar22 = -0x8000;
          }
          if (0x7ffe < iVar22) {
            iVar22 = 0x7fff;
          }
          puVar19 = (undefined2 *)((long)param_2 + uVar12 * 4);
          uVar12 = uVar12 + 1;
          *puVar19 = (short)iVar23;
          puVar19[1] = (short)iVar22;
        } while (uVar12 != uVar24);
      }
    }
    *(ushort *)(*(long *)(param_1 + 0x18) + 0x10042) =
         *(short *)(*(long *)(param_1 + 0x18) + 0x10042) + (short)(uVar3 >> 0xd) & 0x7fff;
  }
  return param_3;
}

