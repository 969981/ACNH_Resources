
void FUN_01c42b00(long param_1,int *param_2)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  ushort uVar8;
  ulong uVar9;
  int *piVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char cVar15;
  ushort uVar16;
  undefined8 *puVar17;
  int iVar18;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (0 < *param_2) {
    lVar12 = 0;
    puVar14 = *(undefined8 **)(param_2 + 4);
    do {
      puVar17 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar17 = puVar14;
      *(undefined8 **)(param_2 + 4) = puVar17;
      puVar14 = puVar17;
    } while (lVar12 < *param_2);
  }
  *param_2 = 0;
  lVar12 = DAT_0534cdb8;
  uVar5 = DAT_0534cdb0;
  iVar18 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar18 < -0x83ceb3d) {
    if (iVar18 < -0x15fdefdb) {
      if (iVar18 == -0x477aafe0) {
        uVar16 = 5;
        goto LAB_01c42c70;
      }
      if (iVar18 == -0x2099c902) {
        uVar16 = 9;
        goto LAB_01c42c70;
      }
    }
    else {
      if (iVar18 == -0x15fdefdb) {
        uVar16 = 7;
        goto LAB_01c42c70;
      }
      if (iVar18 == -0xe632453) {
        uVar16 = 3;
        goto LAB_01c42c70;
      }
    }
  }
  else if (iVar18 < 0x3b3bf38a) {
    if (iVar18 == -0x83ceb3d) {
      uVar16 = 4;
      goto LAB_01c42c70;
    }
    if (iVar18 == -0x169521c) {
      uVar16 = 1;
      goto LAB_01c42c70;
    }
  }
  else {
    if (iVar18 == 0x3b3bf38a) {
      uVar16 = 6;
      goto LAB_01c42c70;
    }
    if (iVar18 == 0x3fce6459) {
      uVar16 = 2;
      goto LAB_01c42c70;
    }
    uVar16 = 0;
    if (iVar18 == 0x6148bcad) goto LAB_01c42c70;
  }
  uVar16 = (ushort)(iVar18 == 0x17f77b87) << 3;
LAB_01c42c70:
  uVar13 = 0;
  cVar15 = DAT_0534cd78;
  do {
    uVar6 = *(uint *)(param_1 + 0x1c8);
    if ((int)uVar6 < 1) {
      uVar9 = 0;
      if (*(long *)(param_1 + 0xb8) != 0) {
        puVar7 = *(uint **)(*(long *)(param_1 + 0xb8) + 8);
        uVar9 = 0;
        if (puVar7 != (uint *)0x0) {
          uVar9 = (ulong)*puVar7;
        }
      }
      if (uVar9 <= uVar13) {
        return;
      }
      if (0 < (int)uVar6) goto LAB_01c42d04;
      if ((((*(long *)(param_1 + 0xb8) != 0) &&
           (puVar7 = *(uint **)(*(long *)(param_1 + 0xb8) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd0) <= uVar13 ||
           (*(char *)(*(long *)(param_1 + 0xd8) + uVar13) != '\0')))) &&
         (((uVar13 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar18 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar18 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar13 + (uint)(ushort)puVar7[2] * 8 + iVar18) +
                         (long)puVar7);
        if (puVar7 == (uint *)0x0) goto LAB_01c42cc4;
        goto LAB_01c42d28;
      }
    }
    else {
      if (uVar6 <= uVar13) {
        return;
      }
LAB_01c42d04:
      if (uVar13 < uVar6) {
        uVar9 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x1b8) <= uVar13) {
          uVar9 = 0;
        }
        puVar7 = *(uint **)(*(long *)(param_1 + 0x1c0) + uVar9 * 8);
        if (puVar7 != (uint *)0x0) {
LAB_01c42d28:
          uVar6 = *puVar7;
          if (uVar6 == 0 || puVar7 == (uint *)(ulong)uVar6) {
LAB_01c42d38:
            uVar8 = 0;
          }
          else {
            puVar11 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
            uVar8 = 0;
            if (*puVar11 != 0) {
              uVar6 = puVar11[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                lVar4 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar11 + lVar4 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar4 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar7 - lVar4) / (ulong)uVar6);
                  }
                  if (*puVar11 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < uVar5) &&
                     (uVar8 = *(ushort *)(lVar12 + (long)(int)uVar3 * 2), uVar8 < 10))
                  goto LAB_01c42d3c;
                }
              }
              goto LAB_01c42d38;
            }
          }
LAB_01c42d3c:
          if (uVar8 == uVar16) {
            if (*puVar7 != 0) {
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  DAT_0534cd7c = 0xffffffffffffffff;
                  DAT_0534cd84 = 0xffffffffffffffff;
                  DAT_0534cd78 = '\x01';
                  DAT_0534cdac = 0xffffffff;
                  DAT_0534cd8c = 0xffffffffffffffff;
                  DAT_0534cd94 = 0xffffffffffffffff;
                  DAT_0534cd9c = 0xffffffffffffffff;
                  DAT_0534cda4 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534cda4) {
                    puVar1 = (ushort *)((DAT_0534cda4 & 0xffffffff) + (long)puVar7);
                    if (puVar1 != (ushort *)0x0) {
                      uVar6 = (uint)*puVar1;
                      goto LAB_01c42ed8;
                    }
                    break;
                  }
                  if ((int)DAT_0534cda4 != -1) break;
                }
                lVar4 = (long)puVar7 - (ulong)*puVar7;
                if ((*puVar7 == 0) || (lVar4 == 0)) break;
                lVar2 = 0xc;
                if (*(char *)(lVar4 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                if (lVar2 + lVar4 == 0) break;
                uVar9 = (ulong)*(ushort *)(lVar4 + 8);
                DAT_0534cda4 = CONCAT44(DAT_0534cda4._4_4_,0xfffffffe);
                if (uVar9 == 0) break;
                piVar10 = (int *)(lVar2 + lVar4 + 4);
                while (piVar10[-1] != 0x54706054) {
                  piVar10 = piVar10 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) goto LAB_01c42ed4;
                }
                iVar18 = 0;
                if (*piVar10 != -1) {
                  iVar18 = *piVar10;
                }
                DAT_0534cda4 = CONCAT44(DAT_0534cda4._4_4_,iVar18);
                if (*puVar7 == 0) break;
              } while( true );
            }
LAB_01c42ed4:
            uVar6 = 0x4c7b;
LAB_01c42ed8:
            iVar18 = *param_2;
            if (iVar18 < param_2[1]) {
              puVar7 = *(uint **)(param_2 + 4);
              if (puVar7 != (uint *)0x0) {
                *(undefined8 *)(param_2 + 4) = *(undefined8 *)puVar7;
              }
              *puVar7 = uVar6;
              iVar18 = *param_2;
              if (iVar18 < param_2[1]) {
                *(uint **)(*(long *)(param_2 + 2) + (long)iVar18 * 8) = puVar7;
                iVar18 = *param_2 + 1;
                *param_2 = iVar18;
              }
            }
            if (0x2f < iVar18) {
              return;
            }
          }
        }
      }
    }
LAB_01c42cc4:
    uVar13 = uVar13 + 1;
  } while( true );
}

