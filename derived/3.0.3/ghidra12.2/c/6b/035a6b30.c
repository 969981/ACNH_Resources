
undefined8 FUN_035a6b30(ushort *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ushort *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  ushort *puVar25;
  byte *pbVar26;
  ushort *puVar27;
  float fVar28;
  float fVar29;
  
  uVar3 = *param_1;
  uVar7 = (uint)param_2 & 0xffff;
  uVar8 = 1;
  if (uVar3 <= uVar7) {
    iVar1 = *(int *)(param_1 + 6);
    uVar12 = (uint)uVar3;
    if (((uint)param_2 & 0xffff) <= ((uVar12 + iVar1) - 1 & 0xffff)) {
      uVar4 = param_1[1];
      uVar14 = (uint)uVar4;
      uVar9 = (uint)((ulong)param_2 >> 0x10);
      if (((uint)uVar4 <= (uVar9 & 0xffff)) &&
         ((uVar9 & 0xffff) <= (((uint)uVar4 + (uint)param_1[8]) - 1 & 0xffff))) {
        puVar18 = param_1 + 0x14;
        puVar18[0] = 0;
        puVar18[1] = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        uVar20 = *(ulong *)(param_1 + 0xc);
        if (uVar20 != 0) {
          uVar19 = 0;
          uVar21 = uVar12;
          do {
            iVar5 = uVar21 - *param_1;
            if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 6))) &&
                (iVar6 = uVar14 - param_1[1], -1 < iVar6)) &&
               ((iVar6 < *(int *)(param_1 + 8) && (lVar22 = *(long *)(param_1 + 0x10), lVar22 != 0))
               )) {
              iVar5 = iVar5 + *(int *)(param_1 + 6) * iVar6;
              pcVar23 = (char *)(lVar22 + (long)iVar5 * 0x28 + 6);
              if (*pcVar23 != '\x03') {
                lVar22 = lVar22 + (long)iVar5 * 0x28;
                *pcVar23 = '\0';
                *(undefined8 *)(lVar22 + 0x18) = 0;
                *(undefined8 *)(lVar22 + 8) = 0;
                *(undefined8 *)(lVar22 + 0x10) = 0;
                uVar20 = *(ulong *)(param_1 + 0xc);
              }
            }
            uVar19 = uVar19 + 1;
            if (uVar21 + 1 == iVar1 + uVar12) {
              uVar14 = uVar14 + 1;
              uVar21 = uVar12;
            }
            else {
              uVar21 = uVar21 + 1;
            }
          } while (uVar19 < uVar20);
          uVar3 = *param_1;
          uVar14 = (uint)param_1[1];
        }
        iVar1 = uVar7 - uVar3;
        if (iVar1 < 0) {
          uVar8 = 1;
        }
        else {
          uVar8 = 1;
          if (((iVar1 < *(int *)(param_1 + 6)) && (iVar5 = (uVar9 & 0xffff) - uVar14, -1 < iVar5))
             && ((iVar5 < *(int *)(param_1 + 8) && (lVar22 = *(long *)(param_1 + 0x10), lVar22 != 0)
                 ))) {
            iVar1 = iVar1 + *(int *)(param_1 + 6) * iVar5;
            puVar27 = (ushort *)(lVar22 + (long)iVar1 * 0x28);
            *(undefined4 *)(lVar22 + (long)iVar1 * 0x28 + 8) = 0;
            lVar15 = *(long *)puVar18;
            puVar25 = puVar18;
            if (lVar15 == 0) {
LAB_035a6d30:
              *(undefined8 *)(lVar22 + (long)iVar1 * 0x28 + 0x18) = 0;
            }
            else {
              fVar28 = *(float *)(lVar22 + (long)iVar1 * 0x28 + 0xc);
              if (*(float *)(lVar15 + 0xc) <= fVar28) {
                do {
                  lVar24 = lVar15;
                  lVar15 = *(long *)(lVar24 + 0x18);
                  if (lVar15 == 0) {
                    puVar25 = (ushort *)(lVar24 + 0x18);
                    goto LAB_035a6d30;
                  }
                } while (*(float *)(lVar15 + 0xc) <= fVar28);
                puVar25 = (ushort *)(lVar24 + 0x18);
              }
              lVar22 = lVar22 + (long)iVar1 * 0x28;
              *(long *)(lVar22 + 0x18) = lVar15;
              *(undefined1 *)(lVar22 + 6) = 1;
            }
            *(ushort **)puVar25 = puVar27;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            param_1[0x1e] = 0;
            param_1[0x1f] = 0;
            do {
              puVar25 = *(ushort **)puVar18;
              if (puVar25 == (ushort *)0x0) {
                return 0;
              }
              *(undefined8 *)puVar18 = *(undefined8 *)(puVar25 + 0xc);
              *(undefined1 *)(puVar25 + 3) = 0;
              uVar7 = (**(code **)(*param_3 + 0x10))(param_3,puVar25);
              if ((uVar7 & 1) == 0) {
                uVar12 = 0;
                do {
                  if ((((byte)puVar25[2] >> (ulong)(uVar12 & 0x1f) & 1) == 0) || (7 < uVar12))
                  goto LAB_035a6e20;
                  uVar14 = (uint)*puVar25;
                  uVar9 = (uint)puVar25[1];
                  switch(uVar12) {
                  case 0:
                    uVar14 = uVar14 - 1;
                    break;
                  case 1:
                    uVar14 = uVar14 + 1;
                    break;
                  case 2:
                    uVar9 = uVar9 - 1;
                    break;
                  case 3:
                    goto switchD_035a6e58_caseD_3;
                  case 4:
                    uVar14 = uVar14 - 1;
                    uVar9 = uVar9 - 1;
                    break;
                  case 5:
                    uVar14 = uVar14 + 1;
                    goto switchD_035a6e58_caseD_3;
                  case 6:
                    uVar14 = uVar14 + 1;
                    uVar9 = uVar9 - 1;
                    break;
                  case 7:
                    uVar14 = uVar14 - 1;
switchD_035a6e58_caseD_3:
                    uVar9 = uVar9 + 1;
                  }
                  iVar1 = (uVar14 & 0xffff) - (uint)*param_1;
                  if ((((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 6))) &&
                      (iVar5 = (uVar9 & 0xffff) - (uint)param_1[1], -1 < iVar5)) &&
                     ((iVar5 < *(int *)(param_1 + 8) &&
                      (lVar22 = *(long *)(param_1 + 0x10), lVar22 != 0)))) {
                    iVar1 = iVar1 + *(int *)(param_1 + 6) * iVar5;
                    lVar15 = lVar22 + (long)iVar1 * 0x28;
                    pbVar26 = (byte *)(lVar15 + 6);
                    if (*pbVar26 != 3 && (*(byte *)(lVar15 + 5) & 0xf5) == 0) {
                      fVar29 = *(float *)(puVar25 + 4);
                      lVar15 = lVar22 + (long)iVar1 * 0x28;
                      fVar28 = (float)(**(code **)*param_3)(param_3,puVar25,lVar15);
                      fVar29 = fVar29 + fVar28;
                      if ((1 < *pbVar26 - 1) ||
                         (fVar29 < *(float *)(lVar22 + (long)iVar1 * 0x28 + 8))) {
                        lVar24 = lVar22 + (long)iVar1 * 0x28;
                        *(ushort **)(lVar24 + 0x10) = puVar25;
                        *(float *)(lVar24 + 8) = fVar29;
                        fVar28 = (float)(**(code **)(*param_3 + 8))(param_3,lVar15);
                        fVar29 = fVar29 + fVar28;
                        bVar2 = *pbVar26;
                        *(float *)(lVar24 + 0xc) = fVar29;
                        if (bVar2 == 1) {
                          lVar11 = *(long *)puVar18;
                          puVar10 = puVar18;
                          if (lVar11 == 0) {
LAB_035a7088:
                            *(undefined8 *)(lVar22 + (long)iVar1 * 0x28 + 0x18) = 0;
                          }
                          else {
                            puVar13 = puVar18;
                            if (lVar11 != lVar15) {
                              lVar17 = lVar11;
                              do {
                                lVar16 = lVar17;
                                lVar17 = *(long *)(lVar16 + 0x18);
                                if (lVar17 == 0) goto joined_r0x035a7034;
                              } while (lVar17 != lVar15);
                              puVar13 = (ushort *)(lVar16 + 0x18);
                            }
                            *(undefined8 *)puVar13 =
                                 *(undefined8 *)(lVar22 + (long)iVar1 * 0x28 + 0x18);
                            lVar11 = *(long *)puVar18;
joined_r0x035a7034:
                            if (lVar11 == 0) goto LAB_035a7088;
                            fVar28 = *(float *)(lVar24 + 0xc);
                            if (*(float *)(lVar11 + 0xc) <= fVar28) {
                              do {
                                lVar24 = lVar11;
                                lVar11 = *(long *)(lVar24 + 0x18);
                                if (lVar11 == 0) {
                                  puVar10 = (ushort *)(lVar24 + 0x18);
                                  goto LAB_035a7088;
                                }
                              } while (*(float *)(lVar11 + 0xc) <= fVar28);
                              puVar10 = (ushort *)(lVar24 + 0x18);
                            }
                            *(long *)(lVar22 + (long)iVar1 * 0x28 + 0x18) = lVar11;
                            *pbVar26 = 1;
                          }
                          *(long *)puVar10 = lVar15;
                        }
                        else {
                          if (bVar2 == 2) {
                            *pbVar26 = 0;
                          }
                          lVar24 = *(long *)puVar18;
                          puVar10 = puVar18;
                          if ((lVar24 != 0) && (*(float *)(lVar24 + 0xc) <= fVar29)) {
                            do {
                              lVar11 = lVar24;
                              lVar24 = *(long *)(lVar11 + 0x18);
                              if (lVar24 == 0) break;
                            } while (*(float *)(lVar24 + 0xc) <= fVar29);
                            puVar10 = (ushort *)(lVar11 + 0x18);
                          }
                          *(long *)(lVar22 + (long)iVar1 * 0x28 + 0x18) = lVar24;
                          *(long *)puVar10 = lVar15;
                          *pbVar26 = 1;
                        }
                      }
                    }
                  }
LAB_035a6e20:
                  uVar12 = uVar12 + 1;
                } while (uVar12 != 8);
                *(undefined1 *)(puVar25 + 3) = 2;
              }
              else {
                puVar25[0xc] = 0;
                puVar25[0xd] = 0;
                puVar25[0xe] = 0;
                puVar25[0xf] = 0;
                while (puVar25 != puVar27) {
                  puVar10 = *(ushort **)(puVar25 + 8);
                  if (puVar10 == (ushort *)0x0) {
                    *(undefined1 *)(puVar25 + 3) = 4;
                    *(ushort **)(param_1 + 0x1c) = puVar27;
                    goto LAB_035a6d70;
                  }
                  *(ushort **)(puVar10 + 0xc) = puVar25;
                  *(undefined1 *)(puVar25 + 3) = 4;
                  puVar25 = puVar10;
                }
                *(ushort **)(param_1 + 0x1c) = puVar27;
              }
LAB_035a6d70:
              uVar8 = 2;
            } while ((uVar7 & 1) == 0);
          }
        }
      }
    }
  }
  return uVar8;
}

