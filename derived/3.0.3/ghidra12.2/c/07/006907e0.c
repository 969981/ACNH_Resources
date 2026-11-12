
void FUN_006907e0(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 long *param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  ushort *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint *puVar20;
  ulong uVar21;
  ulong uVar22;
  ushort *puVar23;
  uint uVar24;
  int iVar25;
  char *pcVar26;
  int iVar27;
  ushort *puVar28;
  long lVar29;
  ushort *puVar30;
  long local_80;
  undefined4 local_78;
  ushort *local_70;
  ulong uStack_68;
  
  plVar17 = (long *)*param_4;
  iVar25 = *(int *)(param_4 + 1);
  lVar14 = (long)iVar25;
  plVar5 = plVar17 + lVar14 * 4;
  plVar13 = plVar17;
  if (iVar25 != 0) {
    iVar6 = (int)param_5[3];
    if (iVar6 < 1) {
      lVar19 = lVar14 << 5;
      do {
        if ((((int)plVar13[1] == (int)param_5[1]) && (*plVar13 == *param_5)) &&
           (iVar6 == (int)plVar13[3])) goto LAB_00690908;
        plVar13 = plVar13 + 4;
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != 0);
    }
    else {
      do {
        if ((((int)plVar13[1] == (int)param_5[1]) && (*plVar13 == *param_5)) &&
           (iVar6 == (int)plVar13[3])) {
          pcVar26 = (char *)plVar13[2];
          pcVar15 = (char *)param_5[2];
          iVar27 = iVar6 + 1;
          while( true ) {
            cVar8 = *pcVar15;
            if (cVar8 == '\0' || cVar8 != *pcVar26) break;
            iVar27 = iVar27 + -1;
            pcVar15 = pcVar15 + 1;
            pcVar26 = pcVar26 + 1;
            if (iVar27 < 2) goto LAB_00690908;
          }
          if (cVar8 == *pcVar26) goto LAB_00690908;
        }
        plVar13 = plVar13 + 4;
      } while (plVar13 != plVar5);
    }
    plVar13 = plVar5;
  }
LAB_00690908:
  if (lVar14 == (long)plVar13 - (long)plVar17 >> 5) {
    *(int *)(param_4 + 1) = iVar25 + 1;
    lVar14 = *param_5;
    lVar19 = param_5[1];
    lVar29 = param_5[3];
    plVar5[2] = param_5[2];
    plVar5[3] = lVar29;
    *plVar5 = lVar14;
    plVar5[1] = lVar19;
    uVar18 = (ulong)*(ushort *)(*param_5 + 0x10);
    if (uVar18 != 0) {
      uVar7 = *(uint *)(param_5 + 3);
      lVar14 = *(long *)(*param_5 + 0x28);
      if ((int)uVar7 < 1) {
        lVar19 = uVar18 * 0x38;
        do {
          if ((**(ushort **)(lVar14 + 0x10) != 0) &&
             (uVar7 == **(ushort **)(lVar14 + 0x10) &&
              *(uint *)(param_5 + 1) == (uint)*(ushort *)(lVar14 + 0x34))) goto LAB_00690a08;
          lVar14 = lVar14 + 0x38;
          lVar19 = lVar19 + -0x38;
        } while (lVar19 != 0);
      }
      else {
        lVar19 = lVar14 + uVar18 * 0x38;
        do {
          uVar24 = (uint)**(ushort **)(lVar14 + 0x10);
          if ((uVar24 != 0) &&
             (uVar7 == uVar24 && *(uint *)(param_5 + 1) == (uint)*(ushort *)(lVar14 + 0x34))) {
            puVar30 = *(ushort **)(lVar14 + 0x10) + 1;
            pcVar15 = (char *)param_5[2];
            iVar25 = uVar7 + 1;
            while( true ) {
              cVar8 = *pcVar15;
              if (cVar8 == '\0' || cVar8 != (char)*puVar30) break;
              iVar25 = iVar25 + -1;
              pcVar15 = pcVar15 + 1;
              puVar30 = (ushort *)((long)puVar30 + 1);
              if (iVar25 < 2) goto LAB_006909cc;
            }
            if (cVar8 == (char)*puVar30) {
LAB_006909cc:
              if (lVar14 != 0) {
LAB_00690a08:
                iVar25 = (int)param_2;
                if ((ulong)*(ushort *)(lVar14 + 0x30) != 0) {
                  lVar29 = (ulong)*(ushort *)(lVar14 + 0x30) << 3;
                  lVar19 = *(long *)(lVar14 + 0x18);
                  do {
                    lVar12 = *(long *)(param_1 + 4);
                    pcVar15 = (char *)(lVar12 + (long)iVar25 * 0x48 + 0x41);
                    if ((*pcVar15 == '\0') &&
                       (**(short **)(*(long *)(lVar12 + (long)iVar25 * 0x48 + 0x38) + 0x10) == 0)) {
                      *param_1 = *param_1 + 1;
                      *pcVar15 = '\x01';
                    }
                    FUN_0068f570(lVar12 + (long)iVar25 * 0x48,lVar19);
                    lVar19 = lVar19 + 8;
                    lVar29 = lVar29 + -8;
                  } while (lVar29 != 0);
                }
                if ((ulong)*(ushort *)(lVar14 + 0x32) != 0) {
                  lVar19 = *(long *)(lVar14 + 0x20);
                  lVar14 = (ulong)*(ushort *)(lVar14 + 0x32) << 3;
                  do {
                    lVar29 = *(long *)(param_1 + 4);
                    pcVar15 = (char *)(lVar29 + (long)iVar25 * 0x48 + 0x41);
                    if ((*pcVar15 == '\0') &&
                       (**(short **)(*(long *)(lVar29 + (long)iVar25 * 0x48 + 0x38) + 0x10) == 0)) {
                      *param_1 = *param_1 + 1;
                      *pcVar15 = '\x01';
                    }
                    FUN_0068f770(lVar29 + (long)iVar25 * 0x48,lVar19);
                    lVar19 = lVar19 + 8;
                    lVar14 = lVar14 + -8;
                  } while (lVar14 != 0);
                }
              }
              break;
            }
          }
          lVar14 = lVar14 + 0x38;
        } while (lVar14 != lVar19);
      }
    }
    puVar2 = (undefined8 *)(*(long *)(*param_5 + 0x40) + (long)(int)param_5[1] * 0x20);
    uVar18 = (ulong)*(ushort *)(puVar2 + 3);
    if (uVar18 != 0) {
      puVar30 = (ushort *)*puVar2;
      puVar3 = puVar30 + uVar18;
      do {
        lVar14 = *(long *)(*param_5 + 0x30) + (ulong)*puVar30 * 0x28;
        lVar19 = *(long *)(lVar14 + 0x10);
        if ((lVar19 != 0) && (uVar11 = *(ushort *)(lVar19 + 2), uVar11 != 0)) {
          puVar4 = *(ushort **)(lVar14 + 0x18);
          uVar18 = 0;
          uVar9 = *puVar4;
          puVar28 = *(ushort **)(lVar14 + 0x20) + 1;
          uVar10 = **(ushort **)(lVar14 + 0x20);
          do {
            pcVar15 = *(char **)(lVar19 + 0x10 + uVar18 * 8);
            if (*pcVar15 == '\0') {
              puVar16 = *(ushort **)(pcVar15 + 0x10);
              uVar7 = *(uint *)(param_5 + 3);
              if (uVar7 == *puVar16) {
                if (0 < (int)uVar7) {
                  pcVar15 = (char *)param_5[2];
                  puVar16 = puVar16 + 1;
                  iVar25 = uVar7 + 1;
                  do {
                    cVar8 = *pcVar15;
                    if (cVar8 == '\0' || cVar8 != (char)*puVar16) {
                      if (cVar8 != (char)*puVar16) goto LAB_00690bd0;
                      break;
                    }
                    iVar25 = iVar25 + -1;
                    pcVar15 = pcVar15 + 1;
                    puVar16 = (ushort *)((long)puVar16 + 1);
                  } while (1 < iVar25);
                }
                plVar13 = param_5;
                if (uVar9 != 0) {
                  plVar13 = (long *)*param_3;
                  plVar5 = (long *)param_3[1];
                  if (plVar13 != plVar5) {
                    if (uVar9 == 0) {
                      do {
                        if (**(short **)(*plVar13 + 0x20) == 0) goto LAB_00690cec;
                        plVar13 = plVar13 + 1;
                      } while (plVar13 != plVar5);
                    }
                    else {
                      do {
                        if (**(ushort **)(*plVar13 + 0x20) == uVar9) {
                          puVar16 = *(ushort **)(*plVar13 + 0x20) + 1;
                          puVar23 = puVar4 + 1;
                          iVar25 = uVar9 + 1;
                          while( true ) {
                            cVar8 = (char)*puVar23;
                            if (cVar8 == '\0' || cVar8 != (char)*puVar16) break;
                            iVar25 = iVar25 + -1;
                            puVar23 = (ushort *)((long)puVar23 + 1);
                            puVar16 = (ushort *)((long)puVar16 + 1);
                            if (iVar25 < 2) goto LAB_00690cec;
                          }
                          if (cVar8 == (char)*puVar16) goto LAB_00690cec;
                        }
                        plVar13 = plVar13 + 1;
                      } while (plVar13 != plVar5);
                    }
                    plVar13 = plVar5;
                  }
                }
LAB_00690cec:
                local_80 = *plVar13;
                lVar14 = *(long *)(local_80 + 0x38);
                uVar22 = (ulong)*(ushort *)(lVar14 + 0xc);
                puVar20 = (uint *)((int *)(lVar14 + 8) + uVar22 * 4);
                uVar24 = (uint)uVar10;
                uVar7 = *puVar20;
                if (*(int *)(lVar14 + 8) < (int)*puVar20) {
                  do {
                    if ((uint)((int)uVar7 >> 3) < (uint)uVar10) {
                      uVar21 = (ulong)(*(byte *)((long)puVar28 +
                                                (long)(int)(~((int)uVar7 >> 3) + uVar24)) >>
                                      ((ulong)uVar7 & 7)) & 1;
                    }
                    else {
                      uVar21 = 0;
                    }
                    uVar22 = (ulong)*(ushort *)(lVar14 + 8 + uVar22 * 0x10 + uVar21 * 2 + 4);
                    puVar20 = (uint *)(lVar14 + 8 + uVar22 * 0x10);
                    bVar1 = (int)uVar7 < (int)*puVar20;
                    uVar7 = *puVar20;
                  } while (bVar1);
                }
                local_78 = 0xffffffff;
                if (uVar24 == **(ushort **)(puVar20 + 2)) {
                  if (uVar24 != 0) {
                    puVar16 = *(ushort **)(puVar20 + 2) + 1;
                    puVar23 = puVar28;
                    iVar25 = uVar10 + 1;
                    do {
                      cVar8 = (char)*puVar23;
                      if (cVar8 == '\0' || cVar8 != (char)*puVar16) {
                        local_78 = 0xffffffff;
                        if (cVar8 != (char)*puVar16) goto LAB_00690b98;
                        break;
                      }
                      iVar25 = iVar25 + -1;
                      puVar23 = (ushort *)((long)puVar23 + 1);
                      puVar16 = (ushort *)((long)puVar16 + 1);
                    } while (1 < iVar25);
                  }
                  local_78 = (undefined4)((ulong)((long)puVar20 + (-0x18 - lVar14)) >> 4);
                }
LAB_00690b98:
                puVar16 = *(ushort **)(*(long *)(lVar19 + 8) + uVar18 * 0x10 + 0x20);
                local_70 = puVar16 + 1;
                uStack_68 = (ulong)*puVar16;
                FUN_006907e0(param_1,param_2,param_3,param_4,&local_80);
                uVar11 = *(ushort *)(lVar19 + 2);
              }
            }
LAB_00690bd0:
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
        }
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar3);
    }
    *(int *)(param_4 + 1) = *(int *)(param_4 + 1) + -1;
  }
  return;
}

