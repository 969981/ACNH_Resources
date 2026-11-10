
void FUN_00320a28(float param_1,float param_2,float param_3,int *param_4,undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  uVar21 = (uint)param_1;
  uVar25 = (uint)param_2;
  iVar11 = *param_4;
  uVar23 = (uint)param_3;
  uVar16 = ~uVar21;
  uVar17 = -uVar21;
  if (-1 < (int)uVar21) {
    uVar17 = uVar21;
  }
  uVar9 = -uVar25;
  if (-1 < (int)uVar25) {
    uVar9 = uVar25;
  }
  uVar10 = -uVar23;
  if (-1 < (int)uVar23) {
    uVar10 = uVar23;
  }
  iVar18 = 0;
  if (iVar11 != 0) {
    iVar18 = (int)uVar9 / iVar11;
  }
  if (-1 < (int)(uVar21 + 1)) {
    uVar16 = uVar21 + 1;
  }
  lVar22 = *(long *)(param_4 + 2);
  iVar18 = uVar9 - iVar18 * iVar11;
  iVar19 = 0;
  if (iVar11 != 0) {
    iVar19 = (int)uVar17 / iVar11;
  }
  iVar20 = 0;
  if (iVar11 != 0) {
    iVar20 = (int)uVar10 / iVar11;
  }
  lVar29 = (long)(int)(uVar10 - iVar20 * iVar11);
  iVar19 = (uVar17 - iVar19 * iVar11) * iVar11;
  lVar28 = (long)((iVar19 + iVar18) * iVar11);
  pcVar1 = (char *)(lVar22 + (lVar28 + lVar29) * 3);
  iVar20 = 0;
  if (iVar11 != 0) {
    iVar20 = (int)uVar16 / iVar11;
  }
  param_1 = param_1 - (float)(int)param_1;
  param_2 = param_2 - (float)(int)param_2;
  iVar20 = (uVar16 - iVar20 * iVar11) * iVar11;
  param_3 = param_3 - (float)(int)param_3;
  lVar24 = (long)((iVar20 + iVar18) * iVar11);
  pcVar2 = (char *)(lVar22 + (lVar24 + lVar29) * 3);
  uVar17 = ~uVar25;
  if (-1 < (int)(uVar25 + 1)) {
    uVar17 = uVar25 + 1;
  }
  iVar18 = 0;
  if (iVar11 != 0) {
    iVar18 = (int)uVar17 / iVar11;
  }
  iVar18 = uVar17 - iVar18 * iVar11;
  lVar26 = (long)((iVar18 + iVar19) * iVar11);
  lVar27 = (long)((iVar18 + iVar20) * iVar11);
  pcVar3 = (char *)(lVar22 + (lVar26 + lVar29) * 3);
  pcVar4 = (char *)(lVar22 + (lVar27 + lVar29) * 3);
  uVar17 = ~uVar23;
  if (-1 < (int)(uVar23 + 1)) {
    uVar17 = uVar23 + 1;
  }
  iVar18 = 0;
  if (iVar11 != 0) {
    iVar18 = (int)uVar17 / iVar11;
  }
  lVar29 = (long)(int)(uVar17 - iVar18 * iVar11);
  pcVar5 = (char *)(lVar22 + (lVar29 + lVar28) * 3);
  pcVar6 = (char *)(lVar22 + (lVar29 + lVar24) * 3);
  pcVar7 = (char *)(lVar22 + (lVar29 + lVar26) * 3);
  pcVar8 = (char *)(lVar22 + (lVar29 + lVar27) * 3);
  cVar12 = *pcVar8;
  cVar13 = *pcVar7;
  cVar14 = pcVar7[1];
  cVar15 = pcVar8[1];
  fVar30 = (float)(int)*pcVar1 / 127.0 +
           ((float)(int)*pcVar2 / 127.0 - (float)(int)*pcVar1 / 127.0) * param_1;
  fVar31 = (float)(int)pcVar1[1] / 127.0 +
           ((float)(int)pcVar2[1] / 127.0 - (float)(int)pcVar1[1] / 127.0) * param_1;
  fVar32 = (float)(int)pcVar1[2] / 127.0 +
           ((float)(int)pcVar2[2] / 127.0 - (float)(int)pcVar1[2] / 127.0) * param_1;
  fVar33 = param_1 * 0.0 + 0.0;
  fVar30 = fVar30 + (((float)(int)*pcVar3 / 127.0 +
                     ((float)(int)*pcVar4 / 127.0 - (float)(int)*pcVar3 / 127.0) * param_1) - fVar30
                    ) * param_2;
  fVar31 = fVar31 + (((float)(int)pcVar3[1] / 127.0 +
                     ((float)(int)pcVar4[1] / 127.0 - (float)(int)pcVar3[1] / 127.0) * param_1) -
                    fVar31) * param_2;
  fVar32 = fVar32 + (((float)(int)pcVar3[2] / 127.0 +
                     ((float)(int)pcVar4[2] / 127.0 - (float)(int)pcVar3[2] / 127.0) * param_1) -
                    fVar32) * param_2;
  fVar33 = fVar33 + ((param_1 * 0.0 + 0.0) - fVar33) * param_2;
  fVar34 = (float)(int)*pcVar5 / 127.0 +
           ((float)(int)*pcVar6 / 127.0 - (float)(int)*pcVar5 / 127.0) * param_1;
  fVar35 = (float)(int)pcVar5[1] / 127.0 +
           ((float)(int)pcVar6[1] / 127.0 - (float)(int)pcVar5[1] / 127.0) * param_1;
  fVar36 = (float)(int)pcVar5[2] / 127.0 +
           ((float)(int)pcVar6[2] / 127.0 - (float)(int)pcVar5[2] / 127.0) * param_1;
  fVar37 = param_1 * 0.0 + 0.0;
  param_5[1] = CONCAT44(fVar33 + ((fVar37 + ((param_1 * 0.0 + 0.0) - fVar37) * param_2) - fVar33) *
                                 param_3,
                        fVar32 + ((fVar36 + (((float)(int)pcVar7[2] / 127.0 +
                                             ((float)(int)pcVar8[2] / 127.0 -
                                             (float)(int)pcVar7[2] / 127.0) * param_1) - fVar36) *
                                            param_2) - fVar32) * param_3);
  *param_5 = CONCAT44(fVar31 + ((fVar35 + (((float)(int)cVar14 / 127.0 +
                                           ((float)(int)cVar15 / 127.0 - (float)(int)cVar14 / 127.0)
                                           * param_1) - fVar35) * param_2) - fVar31) * param_3,
                      fVar30 + ((fVar34 + (((float)(int)cVar13 / 127.0 +
                                           ((float)(int)cVar12 / 127.0 - (float)(int)cVar13 / 127.0)
                                           * param_1) - fVar34) * param_2) - fVar30) * param_3);
  return;
}

