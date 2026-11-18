
void FUN_03257430(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb2208;
  uVar13 = *(uint *)(*(long *)PTR_DAT_04bb2208 + 0x1d40);
  if ((0 < (int)uVar13) ||
     (((lVar10 = *(long *)(*(long *)PTR_DAT_04bb2208 + 0x1c30), lVar10 != 0 &&
       (puVar8 = *(uint **)(lVar10 + 8), puVar8 != (uint *)0x0)) && (uVar13 = *puVar8, uVar13 != 0))
     )) {
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar10 = *(long *)puVar4;
      if ((int)*(uint *)(lVar10 + 0x1d40) < 1) {
        if (((((*(long *)(lVar10 + 0x1c30) != 0) &&
              (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1c30) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(lVar10 + 0x1c48) <= uVar14 ||
              (*(char *)(*(long *)(lVar10 + 0x1c50) + (long)(int)uVar14) != '\0')))) &&
            ((uVar14 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar14 + (uint)(ushort)puVar8[2] * 8 + iVar15) +
                           (long)puVar8);
          goto joined_r0x032577e0;
        }
      }
      else if (uVar14 < *(uint *)(lVar10 + 0x1d40)) {
        uVar3 = uVar14;
        if (*(uint *)(lVar10 + 0x1d30) <= uVar14) {
          uVar3 = 0;
        }
        puVar8 = *(uint **)(*(long *)(lVar10 + 0x1d38) + (ulong)uVar3 * 8);
joined_r0x032577e0:
        if (puVar8 != (uint *)0x0) {
          if (*puVar8 != 0) {
            cVar9 = *PTR_DAT_04bb6440;
            do {
              puVar5 = PTR_DAT_04bb6440;
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x48);
                if (-1 < (int)uVar3) {
                  lVar10 = (ulong)uVar3 + (long)puVar8;
                  goto LAB_0325762c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)*puVar8;
              lVar10 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_0325762c;
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar2 = (long)puVar8 + (lVar10 - (long)puVar11);
              if (lVar2 == 0) break;
              uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
              *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
              lVar10 = 0;
              if (uVar7 == 0) goto LAB_0325762c;
              piVar12 = (int *)(lVar2 + 4);
              while (piVar12[-1] != 0x45f320f2) {
                piVar12 = piVar12 + 2;
                uVar7 = uVar7 - 1;
                if (uVar7 == 0) {
                  lVar10 = 0;
                  goto LAB_0325762c;
                }
              }
              iVar15 = 0;
              if (*piVar12 != -1) {
                iVar15 = *piVar12;
              }
              *(int *)(puVar6 + 0x48) = iVar15;
            } while (*puVar8 != 0);
          }
          lVar10 = 0;
LAB_0325762c:
          lStack_78 = *(long *)PTR_PTR_04bb6438;
          if (lVar10 != 0) {
            lStack_78 = lVar10;
          }
          local_80 = puVar1;
          uVar7 = FUN_032566f0(param_1,&local_80);
          if ((((uVar7 & 1) != 0) && (uVar7 = FUN_0279c960(param_1,&local_80,1), (uVar7 & 1) == 0))
             && (uVar7 = FUN_032566f0(param_1,&local_80), (uVar7 & 1) != 0)) {
            lVar10 = *(long *)puVar4;
            if ((int)*(uint *)(lVar10 + 0x1d40) < 1) {
              if ((((*(long *)(lVar10 + 0x1c30) != 0) &&
                   (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1c30) + 8), puVar8 != (uint *)0x0)) &&
                  ((*(uint *)(lVar10 + 0x1c48) <= uVar14 ||
                   (*(char *)(*(long *)(lVar10 + 0x1c50) + (long)(int)uVar14) != '\0')))) &&
                 (((uVar14 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
                iVar15 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  iVar15 = 0x1c;
                }
                puVar8 = (uint *)((ulong)(puVar8[1] * uVar14 + (uint)(ushort)puVar8[2] * 8 + iVar15)
                                 + (long)puVar8);
                goto joined_r0x03257848;
              }
            }
            else if (uVar14 < *(uint *)(lVar10 + 0x1d40)) {
              uVar3 = uVar14;
              if (*(uint *)(lVar10 + 0x1d30) <= uVar14) {
                uVar3 = 0;
              }
              puVar8 = *(uint **)(*(long *)(lVar10 + 0x1d38) + (ulong)uVar3 * 8);
joined_r0x03257848:
              if (puVar8 != (uint *)0x0) {
                if (*puVar8 != 0) {
                  cVar9 = *PTR_DAT_04bb6440;
                  do {
                    puVar5 = PTR_DAT_04bb6440;
                    if (cVar9 == '\0') {
                      cVar9 = '\x01';
                      *(undefined8 *)puVar6 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
                      *puVar5 = 1;
                      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                    }
                    else {
                      uVar3 = *(uint *)(puVar6 + 0x48);
                      if (-1 < (int)uVar3) {
                        lVar10 = (ulong)uVar3 + (long)puVar8;
                        goto LAB_032574d8;
                      }
                      if (uVar3 != 0xffffffff) break;
                    }
                    puVar11 = (uint *)(ulong)*puVar8;
                    lVar10 = 0;
                    if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_032574d8;
                    lVar10 = 0xc;
                    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
                      lVar10 = 0x1c;
                    }
                    lVar2 = (long)puVar8 + (lVar10 - (long)puVar11);
                    if (lVar2 == 0) break;
                    uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
                    *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
                    lVar10 = 0;
                    if (uVar7 == 0) goto LAB_032574d8;
                    piVar12 = (int *)(lVar2 + 4);
                    while (piVar12[-1] != 0x45f320f2) {
                      piVar12 = piVar12 + 2;
                      uVar7 = uVar7 - 1;
                      if (uVar7 == 0) {
                        lVar10 = 0;
                        goto LAB_032574d8;
                      }
                    }
                    iVar15 = 0;
                    if (*piVar12 != -1) {
                      iVar15 = *piVar12;
                    }
                    *(int *)(puVar6 + 0x48) = iVar15;
                  } while (*puVar8 != 0);
                }
                lVar10 = 0;
LAB_032574d8:
                lStack_68 = *(long *)PTR_PTR_04bb6438;
                if (lVar10 != 0) {
                  lStack_68 = lVar10;
                }
                local_70 = PTR_DAT_04bb2020 + 0x10;
                FUN_0279c5a4(param_1,&local_70,1);
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  return;
}

