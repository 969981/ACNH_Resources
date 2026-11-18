
undefined8 FUN_035a6520(ushort *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  ulong uVar23;
  ushort *puVar24;
  long lVar25;
  ushort *puVar26;
  ushort *puVar27;
  ushort *puVar28;
  long lVar29;
  byte *pbVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  
  uVar4 = *param_1;
  uVar12 = (uint)uVar4;
  uVar31 = (uint)param_2 & 0xffff;
  uVar9 = 1;
  if (uVar4 <= uVar31) {
    iVar2 = *(int *)(param_1 + 6);
    uVar13 = (uint)uVar4;
    uVar14 = (uVar13 + iVar2) - 1;
    if (((uint)param_2 & 0xffff) <= (uVar14 & 0xffff)) {
      uVar5 = param_1[1];
      uVar17 = (uint)uVar5;
      uVar20 = (uint)((ulong)param_2 >> 0x10);
      if ((uint)uVar5 <= (uVar20 & 0xffff)) {
        uVar6 = ((uint)uVar5 + (uint)param_1[8]) - 1;
        if ((uVar20 & 0xffff) <= (uVar6 & 0xffff)) {
          uVar1 = (uint)param_3 & 0xffff;
          if ((((uVar13 <= uVar1) && (((uint)param_3 & 0xffff) <= (uVar14 & 0xffff))) &&
              (uVar14 = (uint)((ulong)param_3 >> 0x10), (uint)uVar5 <= (uVar14 & 0xffff))) &&
             ((uVar14 & 0xffff) <= (uVar6 & 0xffff))) {
            puVar26 = param_1 + 0x14;
            puVar26[0] = 0;
            puVar26[1] = 0;
            puVar26[2] = 0;
            puVar26[3] = 0;
            param_1[0x18] = 0;
            param_1[0x19] = 0;
            param_1[0x1a] = 0;
            param_1[0x1b] = 0;
            uVar23 = *(ulong *)(param_1 + 0xc);
            if (uVar23 != 0) {
              uVar22 = 0;
              do {
                iVar7 = uVar12 - *param_1;
                if (((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 6))) &&
                   ((iVar8 = uVar17 - param_1[1], -1 < iVar8 &&
                    ((iVar8 < *(int *)(param_1 + 8) &&
                     (lVar25 = *(long *)(param_1 + 0x10), lVar25 != 0)))))) {
                  iVar7 = iVar7 + *(int *)(param_1 + 6) * iVar8;
                  pcVar10 = (char *)(lVar25 + (long)iVar7 * 0x28 + 6);
                  if (*pcVar10 != '\x03') {
                    lVar25 = lVar25 + (long)iVar7 * 0x28;
                    *pcVar10 = '\0';
                    *(undefined8 *)(lVar25 + 0x18) = 0;
                    *(undefined8 *)(lVar25 + 8) = 0;
                    *(undefined8 *)(lVar25 + 0x10) = 0;
                    uVar23 = *(ulong *)(param_1 + 0xc);
                  }
                }
                uVar22 = uVar22 + 1;
                if (uVar12 + 1 == iVar2 + uVar13) {
                  uVar17 = uVar17 + 1;
                  uVar12 = (uint)uVar4;
                }
                else {
                  uVar12 = uVar12 + 1;
                }
              } while (uVar22 < uVar23);
              uVar12 = (uint)*param_1;
              uVar17 = (uint)param_1[1];
            }
            puVar24 = (ushort *)0x0;
            iVar2 = uVar31 - uVar12;
            if ((((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 6))) &&
                (iVar7 = (uVar20 & 0xffff) - uVar17, -1 < iVar7)) && (iVar7 < *(int *)(param_1 + 8))
               ) {
              puVar24 = (ushort *)
                        (*(long *)(param_1 + 0x10) +
                        (long)(iVar2 + *(int *)(param_1 + 6) * iVar7) * 0x28);
            }
            iVar2 = uVar1 - uVar12;
            if (iVar2 < 0) {
              uVar9 = 1;
            }
            else {
              iVar7 = *(int *)(param_1 + 6);
              uVar9 = 1;
              if (((iVar2 < iVar7) && (iVar8 = (uVar14 & 0xffff) - uVar17, -1 < iVar8)) &&
                 ((iVar8 < *(int *)(param_1 + 8) &&
                  ((puVar24 != (ushort *)0x0 && (lVar25 = *(long *)(param_1 + 0x10), lVar25 != 0))))
                 )) {
                puVar24[4] = 0;
                puVar24[5] = 0;
                puVar11 = (ushort *)(lVar25 + (long)(iVar2 + iVar7 * iVar8) * 0x28);
                lVar25 = *(long *)puVar26;
                puVar27 = puVar26;
                if (lVar25 == 0) {
LAB_035a6784:
                  puVar24[0xc] = 0;
                  puVar24[0xd] = 0;
                  puVar24[0xe] = 0;
                  puVar24[0xf] = 0;
                }
                else {
                  if (*(float *)(lVar25 + 0xc) <= *(float *)(puVar24 + 6)) {
                    do {
                      lVar29 = lVar25;
                      lVar25 = *(long *)(lVar29 + 0x18);
                      if (lVar25 == 0) {
                        puVar27 = (ushort *)(lVar29 + 0x18);
                        goto LAB_035a6784;
                      }
                    } while (*(float *)(lVar25 + 0xc) <= *(float *)(puVar24 + 6));
                    puVar27 = (ushort *)(lVar29 + 0x18);
                  }
                  *(long *)(puVar24 + 0xc) = lVar25;
                  *(undefined1 *)(puVar24 + 3) = 1;
                }
                *(ushort **)puVar27 = puVar24;
                param_1[0x1c] = 0;
                param_1[0x1d] = 0;
                param_1[0x1e] = 0;
                param_1[0x1f] = 0;
                do {
                  puVar27 = *(ushort **)puVar26;
                  if (puVar27 == (ushort *)0x0) {
                    return 0;
                  }
                  *(undefined8 *)puVar26 = *(undefined8 *)(puVar27 + 0xc);
                  *(undefined1 *)(puVar27 + 3) = 0;
                  if (puVar27 == puVar11) {
                    puVar27[0xc] = 0;
                    puVar27[0xd] = 0;
                    puVar27[0xe] = 0;
                    puVar27[0xf] = 0;
                    if (puVar11 != puVar24) {
                      puVar28 = puVar11;
                      do {
                        puVar18 = *(ushort **)(puVar28 + 8);
                        if (puVar18 == (ushort *)0x0) {
                          *(undefined1 *)(puVar28 + 3) = 4;
                          *(ushort **)(param_1 + 0x1c) = puVar24;
                          goto LAB_035a67b0;
                        }
                        *(ushort **)(puVar18 + 0xc) = puVar28;
                        *(undefined1 *)(puVar28 + 3) = 4;
                        puVar28 = puVar18;
                      } while (puVar18 != puVar24);
                    }
                    *(ushort **)(param_1 + 0x1c) = puVar24;
                  }
                  else {
                    uVar31 = 0;
                    do {
                      if ((((byte)puVar27[2] >> (ulong)(uVar31 & 0x1f) & 1) == 0) || (7 < uVar31))
                      goto LAB_035a6840;
                      uVar12 = (uint)*puVar27;
                      uVar14 = (uint)puVar27[1];
                      switch(uVar31) {
                      case 0:
                        uVar12 = uVar12 - 1;
                        break;
                      case 1:
                        uVar12 = uVar12 + 1;
                        break;
                      case 2:
                        uVar14 = uVar14 - 1;
                        break;
                      case 3:
                        goto switchD_035a6878_caseD_3;
                      case 4:
                        uVar12 = uVar12 - 1;
                        uVar14 = uVar14 - 1;
                        break;
                      case 5:
                        uVar12 = uVar12 + 1;
                        goto switchD_035a6878_caseD_3;
                      case 6:
                        uVar12 = uVar12 + 1;
                        uVar14 = uVar14 - 1;
                        break;
                      case 7:
                        uVar12 = uVar12 - 1;
switchD_035a6878_caseD_3:
                        uVar14 = uVar14 + 1;
                      }
                      iVar2 = (uVar12 & 0xffff) - (uint)*param_1;
                      if ((((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 6))) &&
                          (iVar7 = (uVar14 & 0xffff) - (uint)param_1[1], -1 < iVar7)) &&
                         ((iVar7 < *(int *)(param_1 + 8) &&
                          (lVar25 = *(long *)(param_1 + 0x10), lVar25 != 0)))) {
                        iVar2 = iVar2 + *(int *)(param_1 + 6) * iVar7;
                        puVar28 = (ushort *)(lVar25 + (long)iVar2 * 0x28);
                        lVar29 = lVar25 + (long)iVar2 * 0x28;
                        pbVar30 = (byte *)(lVar29 + 6);
                        if ((puVar28 == puVar11) ||
                           ((*(byte *)(lVar29 + 5) & 0xf5) == 0 && *pbVar30 != 3)) {
                          fVar33 = *(float *)(puVar27 + 4);
                          fVar32 = (float)(**(code **)*param_4)(param_4,puVar27,puVar28);
                          fVar33 = fVar33 + fVar32;
                          if ((1 < *pbVar30 - 1) ||
                             (fVar33 < *(float *)(lVar25 + (long)iVar2 * 0x28 + 8))) {
                            lVar29 = lVar25 + (long)iVar2 * 0x28;
                            *(ushort **)(lVar29 + 0x10) = puVar27;
                            *(float *)(lVar29 + 8) = fVar33;
                            fVar32 = (float)(**(code **)(*param_4 + 8))(param_4,puVar28);
                            fVar33 = fVar33 + fVar32;
                            bVar3 = *pbVar30;
                            *(float *)(lVar29 + 0xc) = fVar33;
                            if (bVar3 == 1) {
                              puVar16 = *(ushort **)puVar26;
                              puVar18 = puVar26;
                              if (puVar16 != (ushort *)0x0) {
                                puVar19 = puVar26;
                                if (puVar16 != puVar28) {
                                  puVar21 = puVar16;
                                  do {
                                    puVar19 = puVar21;
                                    puVar21 = *(ushort **)(puVar19 + 0xc);
                                    if (puVar21 == (ushort *)0x0) goto LAB_035a6a88;
                                  } while (puVar21 != puVar28);
                                  puVar19 = puVar19 + 0xc;
                                }
                                *(undefined8 *)puVar19 =
                                     *(undefined8 *)(lVar25 + (long)iVar2 * 0x28 + 0x18);
                                puVar16 = *(ushort **)puVar26;
LAB_035a6a88:
                                if (puVar16 != (ushort *)0x0) {
                                  fVar32 = *(float *)(lVar29 + 0xc);
                                  if (*(float *)(puVar16 + 6) <= fVar32) {
                                    do {
                                      puVar18 = puVar16;
                                      puVar16 = *(ushort **)(puVar18 + 0xc);
                                      if (puVar16 == (ushort *)0x0) {
                                        puVar18 = puVar18 + 0xc;
                                        goto LAB_035a6af4;
                                      }
                                    } while (*(float *)(puVar16 + 6) <= fVar32);
                                    puVar18 = puVar18 + 0xc;
                                  }
                                  *(ushort **)(lVar25 + (long)iVar2 * 0x28 + 0x18) = puVar16;
                                  *pbVar30 = 1;
                                  *(ushort **)puVar18 = puVar28;
                                  goto LAB_035a6840;
                                }
                              }
LAB_035a6af4:
                              *(undefined8 *)(lVar25 + (long)iVar2 * 0x28 + 0x18) = 0;
                              *(ushort **)puVar18 = puVar28;
                            }
                            else {
                              if (bVar3 == 2) {
                                *pbVar30 = 0;
                              }
                              lVar29 = *(long *)puVar26;
                              puVar18 = puVar26;
                              if ((lVar29 != 0) && (*(float *)(lVar29 + 0xc) <= fVar33)) {
                                do {
                                  lVar15 = lVar29;
                                  lVar29 = *(long *)(lVar15 + 0x18);
                                  if (lVar29 == 0) break;
                                } while (*(float *)(lVar29 + 0xc) <= fVar33);
                                puVar18 = (ushort *)(lVar15 + 0x18);
                              }
                              *(long *)(lVar25 + (long)iVar2 * 0x28 + 0x18) = lVar29;
                              *(ushort **)puVar18 = puVar28;
                              *pbVar30 = 1;
                            }
                          }
                        }
                      }
LAB_035a6840:
                      uVar31 = uVar31 + 1;
                    } while (uVar31 != 8);
                    *(undefined1 *)(puVar27 + 3) = 2;
                  }
LAB_035a67b0:
                  uVar9 = 2;
                } while (puVar27 != puVar11);
              }
            }
          }
        }
      }
    }
  }
  return uVar9;
}

