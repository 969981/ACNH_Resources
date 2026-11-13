
undefined8 FUN_0138ef70(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short sVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  
  uVar16 = *(uint *)(param_2 + 0x1c) & 0xfffffffe;
  if (uVar16 == 0x1a) {
    if ((*(ushort *)(param_2 + 0x3f8) & 6) != 0) {
      sVar14 = *(short *)(param_2 + 0x24);
      bVar9 = DAT_055c1b60 == &DAT_055c1b58;
      puVar13 = DAT_055c1b60 + -8;
      puVar12 = puVar13;
      bVar8 = bVar9;
      if ((sVar14 != 0) && (puVar13 != &DAT_055c1b18)) {
        puVar15 = DAT_055c1b60;
        do {
          puVar15 = (undefined8 *)puVar15[1];
          sVar14 = sVar14 + -1;
        } while (puVar15 != &DAT_055c1b58 && sVar14 != 0);
        puVar12 = puVar15 + -8;
        bVar8 = puVar15 == &DAT_055c1b58;
      }
      puVar15 = &DAT_055c04a0;
      if (!bVar8) {
        puVar15 = puVar12;
      }
      if (*(int *)(puVar15 + 7) == -0x24a26848) {
        if (*(long *)(param_1 + 0x10) != param_1 + 8) {
          lVar19 = (long)*(int *)(param_1 + 0x1c);
          lVar20 = *(long *)(param_1 + 0x10) - lVar19;
          do {
            if ((*(uint *)(lVar20 + 0x1c) & 0xfffffffe) == 0x14) {
              puVar12 = puVar13;
              bVar8 = bVar9;
              if ((puVar13 != &DAT_055c1b18) && (sVar14 = *(short *)(lVar20 + 0x24), sVar14 != 0)) {
                puVar15 = DAT_055c1b60;
                do {
                  puVar15 = (undefined8 *)puVar15[1];
                  sVar14 = sVar14 + -1;
                } while (puVar15 != &DAT_055c1b58 && sVar14 != 0);
                puVar12 = puVar15 + -8;
                bVar8 = puVar15 == &DAT_055c1b58;
              }
              puVar15 = &DAT_055c04a0;
              if (!bVar8) {
                puVar15 = puVar12;
              }
              iVar18 = *(int *)(puVar15 + 7);
              if (iVar18 < 0x2922957e) {
                if ((iVar18 == 0x80e20d8 || iVar18 == 0xb6a5301) || iVar18 == 0x1490248c) {
                  return 0;
                }
              }
              else if ((iVar18 == 0x2922957e || iVar18 == 0x51b9e069) || iVar18 == 0x7a616e2f) {
                return 0;
              }
            }
            lVar20 = *(long *)(lVar20 + lVar19 + 8) - lVar19;
          } while (lVar20 != (param_1 + 8) - lVar19);
        }
      }
      goto LAB_0138f308;
    }
  }
  else {
    if (uVar16 == 0x14) {
      sVar14 = *(short *)(param_2 + 0x24);
      bVar9 = DAT_055c1b60 == &DAT_055c1b58;
      puVar13 = DAT_055c1b60 + -8;
      puVar12 = puVar13;
      bVar8 = bVar9;
      if ((sVar14 != 0) && (puVar13 != &DAT_055c1b18)) {
        puVar15 = DAT_055c1b60;
        do {
          puVar15 = (undefined8 *)puVar15[1];
          sVar14 = sVar14 + -1;
        } while (puVar15 != &DAT_055c1b58 && sVar14 != 0);
        puVar12 = puVar15 + -8;
        bVar8 = puVar15 == &DAT_055c1b58;
      }
      puVar15 = &DAT_055c04a0;
      if (!bVar8) {
        puVar15 = puVar12;
      }
      iVar18 = *(int *)(puVar15 + 7);
      if (iVar18 < 0x2922957e) {
        if ((iVar18 == 0x80e20d8 || iVar18 == 0xb6a5301) || iVar18 == 0x1490248c) goto LAB_0138f110;
      }
      else if ((iVar18 == 0x2922957e || iVar18 == 0x7a616e2f) || iVar18 == 0x51b9e069) {
LAB_0138f110:
        if (*(long *)(param_1 + 0x10) != param_1 + 8) {
          lVar19 = (long)*(int *)(param_1 + 0x1c);
          lVar20 = *(long *)(param_1 + 0x10) - lVar19;
          do {
            if (((*(uint *)(lVar20 + 0x1c) & 0xfffffffe) == 0x1a) &&
               ((*(ushort *)(lVar20 + 0x3f8) & 6) != 0)) {
              puVar12 = puVar13;
              bVar8 = bVar9;
              if ((puVar13 != &DAT_055c1b18) && (sVar14 = *(short *)(lVar20 + 0x24), sVar14 != 0)) {
                puVar15 = DAT_055c1b60;
                do {
                  puVar15 = (undefined8 *)puVar15[1];
                  sVar14 = sVar14 + -1;
                } while (puVar15 != &DAT_055c1b58 && sVar14 != 0);
                puVar12 = puVar15 + -8;
                bVar8 = puVar15 == &DAT_055c1b58;
              }
              puVar15 = &DAT_055c04a0;
              if (!bVar8) {
                puVar15 = puVar12;
              }
              if (*(int *)(puVar15 + 7) == -0x24a26848) {
                return 0;
              }
            }
            lVar20 = *(long *)(lVar20 + lVar19 + 8) - lVar19;
          } while (lVar20 != (param_1 + 8) - lVar19);
        }
      }
    }
LAB_0138f308:
    if ((*(uint *)(param_2 + 0x1c) == 0x13) && (DAT_04c487d4 != -1)) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        fVar22 = ((float)*(int *)(param_2 + 0x3c) * 5.0 +
                 (float)*(int *)(param_2 + 0x4c) * 5.0 + 5.0) * 0.5;
        fVar21 = ((float)*(int *)(param_2 + 0x38) * 5.0 +
                 (float)*(int *)(param_2 + 0x48) * 5.0 + 5.0) * 0.5;
        fVar25 = (float)(int)((int)((float)(int)fVar21 / 10.0) - (uint)(fVar21 < 0.0));
        fVar26 = (float)(int)((int)((float)(int)fVar22 / 10.0) - (uint)(fVar22 < 0.0));
        fVar21 = fVar25 * 10.0 + 2.5;
        fVar23 = fVar26 * 10.0 + 2.5;
        fVar22 = fVar25 * 10.0 + 10.0 + -2.5;
        fVar24 = fVar26 * 10.0 + 10.0 + -2.5;
        iStack_bc = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
        local_c4 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        iVar18 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
        iVar6 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
        local_b8 = iStack_bc;
        if (iVar18 <= iStack_bc) {
          local_b8 = iVar18;
        }
        if (iStack_bc <= iVar18) {
          iStack_bc = iVar18;
        }
        local_c0 = local_c4;
        if (iVar6 <= local_c4) {
          local_c0 = iVar6;
        }
        if (local_c4 <= iVar6) {
          local_c4 = iVar6;
        }
        bVar8 = true;
        goto LAB_0138f4c0;
      }
    }
  }
  local_b8 = 0;
  bVar8 = false;
  local_c0 = 0;
  iStack_bc = 0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  local_c4 = 0;
LAB_0138f4c0:
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar19 = (long)*(int *)(param_1 + 0x1c);
    lVar20 = *(long *)(param_1 + 0x10) - lVar19;
    do {
      if (((((*(short *)(lVar20 + 0x24) == *(short *)(param_2 + 0x24)) &&
            (*(char *)(lVar20 + 0x26) == *(char *)(param_2 + 0x26))) &&
           (((*(byte *)(param_2 + 0x18) >> 1 & 1) == 0 ||
            ((*(int *)(lVar20 + 0x1c) != *(int *)(param_2 + 0x1c) ||
             (*(int *)(lVar20 + 0x20) != *(int *)(param_2 + 0x20))))))) &&
          ((bVar5 = *(byte *)(param_2 + 0x27), bVar5 == 0xff ||
           (((0x1d < bVar5 || (*(uint *)(lVar20 + 0x1c) != (uint)bVar5)) ||
            (*(int *)(lVar20 + 0x20) != *(int *)(param_2 + 0x20))))))) &&
         (((bVar5 = *(byte *)(param_2 + 0x3fb), bVar5 == 0xff || (0x1d < bVar5)) ||
          ((*(uint *)(lVar20 + 0x1c) != (uint)bVar5 ||
           (*(int *)(lVar20 + 0x20) != *(int *)(param_2 + 0x20))))))) {
        iVar18 = *(int *)(lVar20 + 0x48);
        iVar11 = *(int *)(lVar20 + 0x4c);
        iVar6 = *(int *)(param_2 + 0x38);
        iVar3 = *(int *)(param_2 + 0x3c);
        iVar2 = *(int *)(param_2 + 0x48);
        iVar17 = *(int *)(param_2 + 0x4c);
        iVar10 = *(int *)(lVar20 + 0x38);
        iVar4 = *(int *)(lVar20 + 0x3c);
        if (((((iVar6 <= iVar18) && (iVar10 <= iVar2)) && (iVar3 <= iVar11)) && (iVar4 <= iVar17))
           || ((((iVar10 <= iVar6 && (iVar2 <= iVar18)) && (iVar4 <= iVar3)) && (iVar17 <= iVar11)))
           ) {
          if (((!bVar8) || (*(int *)(lVar20 + 0x1c) != 0x13)) ||
             (((local_b8 <= iVar18 && ((iVar10 <= iStack_bc && (local_c0 <= iVar11)))) &&
              (iVar4 <= local_c4)))) {
            return 0;
          }
          if ((*(ushort *)(param_2 + 0x3f8) & *(ushort *)(lVar20 + 0x3f8)) != 0) {
            iVar7 = iVar10;
            if (iVar10 <= iVar6) {
              iVar7 = iVar6;
            }
            iVar6 = iVar4;
            if (iVar4 <= iVar3) {
              iVar6 = iVar3;
            }
            iVar3 = iVar18;
            if (iVar2 <= iVar18) {
              iVar3 = iVar2;
            }
            iVar2 = iVar11;
            if (iVar17 <= iVar11) {
              iVar2 = iVar17;
            }
            iVar17 = iVar7;
            if (iVar3 <= iVar7) {
              iVar17 = iVar3;
            }
            if (iVar7 <= iVar3) {
              iVar7 = iVar3;
            }
            iVar3 = iVar6;
            if (iVar2 <= iVar6) {
              iVar3 = iVar2;
            }
            if (iVar6 <= iVar2) {
              iVar6 = iVar2;
            }
            fVar21 = (float)iVar17 * 0.5;
            uVar16 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar16 = (uint)(fVar21 < 0.0);
            }
            iVar2 = (int)fVar21 - uVar16;
            fVar21 = (float)iVar3 * 0.5;
            uVar16 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar16 = (uint)(fVar21 < 0.0);
            }
            iVar3 = (int)fVar21 - uVar16;
            fVar21 = (float)iVar7 * 0.5;
            uVar16 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar16 = (uint)(fVar21 < 0.0);
            }
            iVar17 = (int)fVar21 - uVar16;
            fVar21 = (float)iVar6 * 0.5;
            uVar16 = 0;
            if (fVar21 != (float)(int)fVar21) {
              uVar16 = (uint)(fVar21 < 0.0);
            }
            iVar7 = (int)fVar21 - uVar16;
            iVar6 = iVar2;
            if (iVar17 <= iVar2) {
              iVar6 = iVar17;
            }
            if (iVar2 <= iVar17) {
              iVar2 = iVar17;
            }
            iVar17 = iVar3;
            if (iVar7 <= iVar3) {
              iVar17 = iVar7;
            }
            if (iVar3 <= iVar7) {
              iVar3 = iVar7;
            }
            if (iVar3 + 1 != iVar17) {
              fVar21 = ((float)iVar11 * 5.0 + 5.0 + (float)iVar4 * 5.0) * 0.5;
              fVar22 = ((float)iVar18 * 5.0 + 5.0 + (float)iVar10 * 5.0) * 0.5;
              iVar18 = iVar6;
              do {
                iVar10 = FUN_006f0400((float)iVar18 -
                                      (float)(int)((int)((float)(int)fVar22 / 10.0) -
                                                  (uint)(fVar22 < 0.0)),
                                      (float)iVar17 -
                                      (float)(int)((int)((float)(int)fVar21 / 10.0) -
                                                  (uint)(fVar21 < 0.0)));
                iVar11 = FUN_006f0400((float)iVar18 - fVar25,(float)iVar17 - fVar26);
                if (((*(byte *)(lVar20 + 0x3fa) >> (ulong)(iVar10 + 0x10000000U >> 0x1d) & 1) != 0)
                   && ((*(byte *)(param_2 + 0x3fa) >> (ulong)(iVar11 + 0x10000000U >> 0x1d) & 1) !=
                       0)) {
                  return 0;
                }
                if (iVar18 < iVar2) {
                  iVar18 = iVar18 + 1;
                }
                else {
                  iVar17 = iVar17 + 1;
                  iVar18 = iVar6;
                }
              } while ((iVar6 != iVar18) || (iVar3 + 1 != iVar17));
            }
          }
        }
      }
      lVar20 = *(long *)(lVar20 + lVar19 + 8) - lVar19;
    } while (lVar20 != (param_1 + 8) - lVar19);
  }
  return 1;
}

