
undefined8 FUN_02b6aab0(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  char cVar15;
  short sVar16;
  uint local_40 [2];
  uint *local_38;
  
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  puVar3 = PTR_DAT_04bb5008;
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    return 0;
  }
  local_40[0] = *(uint *)(param_2 + 0xc);
  if (local_40[0] != 0) {
    lVar13 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
      if ((((*(long *)(lVar13 + 0xd0) != 0) &&
           (puVar10 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar10 != (uint *)0x0)) &&
          ((*(uint *)(lVar13 + 0xe8) <= local_40[0] ||
           (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)local_40[0]) != '\0')))) &&
         (((local_40[0] < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar10 = (uint *)((ulong)(puVar10[1] * local_40[0] + (uint)(ushort)puVar10[2] * 8 + iVar12)
                          + (long)puVar10);
        goto joined_r0x02b6aba8;
      }
    }
    else if (local_40[0] < *(uint *)(lVar13 + 0x1e0)) {
      uVar7 = local_40[0];
      if (*(uint *)(lVar13 + 0x1d0) <= local_40[0]) {
        uVar7 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)uVar7 * 8);
joined_r0x02b6aba8:
      if (puVar10 != (uint *)0x0) {
        puVar11 = (uint *)(ulong)*puVar10;
        if (*puVar10 != 0 && puVar10 != puVar11) {
          puVar14 = (uint *)((long)puVar10 - (long)puVar11);
          if (((*puVar14 == 0) || (uVar7 = puVar14[1], uVar7 == 0)) ||
             ((ulong)(ushort)puVar14[2] == 0)) {
LAB_02b6ac28:
            cVar15 = *PTR_DAT_04bc4690;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
                puVar11 = (uint *)(ulong)*puVar10;
              }
              else {
                uVar7 = *(uint *)(puVar5 + 0x14);
                if (-1 < (int)uVar7) {
                  if ((short *)((ulong)uVar7 + (long)puVar10) == (short *)0x0) goto LAB_02b6ad10;
                  sVar16 = *(short *)((ulong)uVar7 + (long)puVar10);
                  goto LAB_02b6ad14;
                }
                if (uVar7 != 0xffffffff) goto LAB_02b6ad10;
              }
              sVar16 = 0;
              if ((puVar11 == (uint *)0x0) || (sVar16 = 0, puVar10 == puVar11)) goto LAB_02b6ad14;
              lVar13 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar10 + (lVar13 - (long)puVar11);
              sVar16 = 0;
              if (lVar13 == 0) goto LAB_02b6ad14;
              uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
              *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
              if (uVar8 == 0) goto LAB_02b6ad10;
              piVar9 = (int *)(lVar13 + 4);
              while (piVar9[-1] != 0xd664b5c) {
                piVar9 = piVar9 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) goto LAB_02b6ad10;
              }
              sVar16 = 0;
              iVar12 = 0;
              if (*piVar9 != -1) {
                iVar12 = *piVar9;
              }
              *(int *)(puVar5 + 0x14) = iVar12;
              puVar11 = (uint *)(ulong)*puVar10;
              if (*puVar10 == 0) goto LAB_02b6ad14;
            } while( true );
          }
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar13 == 0) goto LAB_02b6ac28;
          uVar1 = 0;
          if ((ulong)uVar7 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc46a8 <= uVar1) ||
             (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar1 * 2),
             4 < uVar2 || uVar2 == 0)) goto LAB_02b6ac28;
          if (uVar2 == 1) {
            local_40[0] = 0;
            uVar8 = FUN_02b677c0(local_40);
            uVar7 = local_40[0];
            if ((uVar8 & 1) == 0) {
              uVar7 = 0;
            }
            uVar7 = FUN_02b5afe0(uVar7);
            puVar5 = PTR_DAT_04bb5bd0;
            puVar4 = PTR_DAT_04bb5bc8;
            lVar13 = *(long *)puVar3;
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x5f0);
            if (uVar7 < *(uint *)(lVar13 + 0x5d0)) {
              puVar10 = *(uint **)(*(long *)(lVar13 + 0x5d8) + (long)(int)uVar7 * 8);
              sVar16 = **(short **)(param_1 + 0x10);
              sVar6 = 0;
              if (puVar10 != (uint *)0x0) {
                uVar7 = *puVar10;
                if (uVar7 != 0) {
                  cVar15 = *PTR_DAT_04bb5bc8;
                  do {
                    if (cVar15 == '\0') {
                      cVar15 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *puVar4 = 1;
                      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                      uVar7 = *puVar10;
                    }
                    else {
                      uVar1 = *(uint *)(puVar5 + 0x10);
                      if (-1 < (int)uVar1) {
                        sVar6 = 0;
                        if ((short *)((ulong)uVar1 + (long)puVar10) != (short *)0x0) {
                          sVar6 = *(short *)((ulong)uVar1 + (long)puVar10);
                        }
                        goto LAB_02b6af84;
                      }
                      if (uVar1 != 0xffffffff) break;
                    }
                    puVar11 = (uint *)(ulong)uVar7;
                    if ((puVar11 == (uint *)0x0) || (puVar10 == puVar11)) break;
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar13 = (long)puVar10 + (lVar13 - (long)puVar11);
                    if (lVar13 == 0) break;
                    uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
                    *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
                    if (uVar8 == 0) break;
                    piVar9 = (int *)(lVar13 + 4);
                    while (piVar9[-1] != 0xd664b5c) {
                      piVar9 = piVar9 + 2;
                      uVar8 = uVar8 - 1;
                      if (uVar8 == 0) goto LAB_02b6af70;
                    }
                    iVar12 = 0;
                    if (*piVar9 != -1) {
                      iVar12 = *piVar9;
                    }
                    *(int *)(puVar5 + 0x10) = iVar12;
                    uVar7 = *puVar10;
                    if (uVar7 == 0) break;
                  } while( true );
                }
LAB_02b6af70:
                sVar6 = 0;
              }
            }
            else {
              sVar6 = 0;
              sVar16 = **(short **)(param_1 + 0x10);
            }
LAB_02b6af84:
            if (sVar6 != sVar16) {
              return 0;
            }
          }
          else {
            if (uVar2 != 4) {
              return 0;
            }
            FUN_02b72930(local_40);
            puVar4 = PTR_DAT_04bc4658;
            puVar3 = PTR_DAT_04bc4650;
            sVar16 = **(short **)(param_1 + 0x10);
            if ((local_38 != (uint *)0x0) && (uVar7 = *local_38, uVar7 != 0)) {
              cVar15 = *PTR_DAT_04bc4650;
              do {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar4 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                  *puVar3 = 1;
                  *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
                  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                  uVar7 = *local_38;
                }
                else {
                  uVar1 = *(uint *)(puVar4 + 0x18);
                  if (-1 < (int)uVar1) {
                    if ((short *)((ulong)uVar1 + (long)local_38) == (short *)0x0) break;
                    sVar6 = *(short *)((ulong)uVar1 + (long)local_38);
                    goto LAB_02b6afa4;
                  }
                  if (uVar1 != 0xffffffff) break;
                }
                puVar10 = (uint *)(ulong)uVar7;
                sVar6 = 0;
                if ((puVar10 == (uint *)0x0) || (local_38 == puVar10)) goto LAB_02b6afa4;
                lVar13 = 0xc;
                if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)local_38 + (lVar13 - (long)puVar10);
                sVar6 = 0;
                if (lVar13 == 0) goto LAB_02b6afa4;
                uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
                *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
                if (uVar8 == 0) break;
                piVar9 = (int *)(lVar13 + 4);
                while (piVar9[-1] != 0xd664b5c) {
                  piVar9 = piVar9 + 2;
                  uVar8 = uVar8 - 1;
                  if (uVar8 == 0) goto LAB_02b6afa0;
                }
                sVar6 = 0;
                iVar12 = 0;
                if (*piVar9 != -1) {
                  iVar12 = *piVar9;
                }
                *(int *)(puVar4 + 0x18) = iVar12;
                uVar7 = *local_38;
                if (uVar7 == 0) goto LAB_02b6afa4;
              } while( true );
            }
LAB_02b6afa0:
            sVar6 = 0;
LAB_02b6afa4:
            if (sVar6 != sVar16) {
              return 0;
            }
          }
          goto LAB_02b6ad24;
        }
        if (puVar11 != (uint *)0x0) goto LAB_02b6ac28;
      }
    }
  }
LAB_02b6ad10:
  sVar16 = 0;
LAB_02b6ad14:
  if (sVar16 != **(short **)(param_1 + 0x10)) {
    return 0;
  }
LAB_02b6ad24:
  uVar8 = FUN_02a8f1dc(param_2,**(undefined8 **)(param_1 + 8));
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  **(undefined1 **)(param_1 + 0x18) = 1;
  return 1;
}

