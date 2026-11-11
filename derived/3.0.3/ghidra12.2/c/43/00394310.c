
void FUN_00394310(long param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  char *pcVar11;
  ushort uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  ushort *puVar17;
  ushort *puVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  ulong uVar22;
  
  uVar5 = *(uint *)(param_1 + 0xc0);
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      puVar17 = (ushort *)(*(long *)(param_1 + 0xa0) + (ulong)uVar9 * 0xa0);
      puVar18 = puVar17 + 8;
      if ((*puVar17 != 0 && *puVar18 != 0) && (0.0 < *(float *)(param_1 + 0x18))) {
        uVar22 = 0;
        lVar7 = *(long *)(param_1 + 0xa0) + (ulong)uVar9 * 0xa0;
        plVar1 = (long *)(lVar7 + 0x18);
        do {
          lVar19 = *(long *)(*(long *)(lVar7 + 8) + uVar22 * 8);
          if (*(short *)(lVar19 + 4) != 0 && (*(byte *)(lVar19 + 1) & 1) == 0) {
            plVar20 = *(long **)(*(long *)(*(long *)(param_1 + 0xa8) + (ulong)uVar9 * 0x30 + 0x18) +
                                uVar22 * 8);
            uVar5 = (**(code **)(*plVar20 + 0x38))(plVar20);
            if (uVar5 != 0) {
              uVar21 = 0;
              do {
                iVar6 = (**(code **)(*plVar20 + 0x40))(plVar20,uVar21);
                uVar8 = (ulong)*(ushort *)(lVar19 + 2);
                puVar10 = (ushort *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar9 * 0xa0 + 0x10);
                if (*(ushort *)(lVar19 + 2) < *puVar10) {
                  lVar13 = uVar8 << 4;
                  iVar6 = iVar6 * 2 + 2;
                  do {
                    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar9 * 0x30 + 0x10) +
                            lVar13;
                    lVar16 = *(long *)(lVar2 + 8);
                    if (lVar16 != 0) {
                      iVar15 = *(int *)(lVar2 + 4);
                      *param_4 = *param_4 + iVar6;
                      *param_5 = *param_5 + iVar6;
                      iVar3 = *(int *)(lVar16 + 8);
                      if (iVar3 == 1) {
                        iVar15 = iVar15 + 2;
                        *param_4 = *param_4 + iVar15;
                        iVar15 = *param_5 + iVar15 * 2 + 4;
                      }
                      else {
                        if (iVar3 != 0) goto LAB_003944b0;
                        *param_4 = *param_4 + 8;
                        iVar15 = *param_5 + 0xe;
                      }
                      *param_5 = iVar15;
                    }
LAB_003944b0:
                    uVar8 = uVar8 + 1;
                    lVar13 = lVar13 + 0x10;
                  } while (uVar8 < *puVar10);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 != uVar5);
            }
            if (uVar22 == 0) {
              uVar8 = (ulong)*(ushort *)(lVar19 + 2);
              puVar10 = (ushort *)(*(long *)(param_1 + 0xa0) + (long)(int)uVar9 * 0xa0 + 0x10);
              uVar12 = *puVar10;
              if (*(ushort *)(lVar19 + 2) < uVar12) {
                lVar13 = uVar8 << 4;
                do {
                  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar9 * 0x30 + 0x10) +
                          lVar13;
                  lVar16 = *(long *)(lVar2 + 8);
                  if (lVar16 != 0) {
                    iVar6 = *(int *)(lVar16 + 4);
                    if (iVar6 == 2) {
                      *param_4 = *param_4 + 4;
                      iVar6 = 4;
                    }
                    else {
                      if (iVar6 != 1) goto LAB_00394570;
                      iVar15 = *(int *)(lVar2 + 4) * 2 + 4;
                      iVar6 = iVar15 * 2;
                      *param_4 = *param_4 + iVar15;
                    }
                    *param_5 = *param_5 + iVar6;
                    uVar12 = *puVar10;
                  }
LAB_00394570:
                  uVar8 = uVar8 + 1;
                  lVar13 = lVar13 + 0x10;
                } while (uVar8 < uVar12);
              }
            }
            iVar6 = (**(code **)(*plVar20 + 0x48))(plVar20);
            *param_2 = *param_2 + iVar6;
            uVar8 = (ulong)*(ushort *)(lVar19 + 2);
            uVar12 = *puVar18;
            if (*(ushort *)(lVar19 + 2) < uVar12) {
              if (uVar5 < 2) {
                do {
                  if (**(char **)(*plVar1 + uVar8 * 8) == '\0') {
                    *param_3 = *param_3 + iVar6 * 3;
                    uVar12 = *puVar18;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar12);
              }
              else {
                do {
                  pcVar11 = *(char **)(*plVar1 + uVar8 * 8);
                  cVar4 = *pcVar11;
                  piVar14 = param_3;
                  iVar15 = iVar6 * 3;
                  if (cVar4 == '\0') {
LAB_00394650:
                    *piVar14 = *piVar14 + iVar15;
                  }
                  else if ((cVar4 == '\x01') && (*(int *)(pcVar11 + 8) != 0)) {
                    iVar15 = 2;
                    piVar14 = param_5;
                    goto LAB_00394650;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *puVar18);
              }
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < *puVar17);
        uVar5 = *(uint *)(param_1 + 0xc0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  return;
}

