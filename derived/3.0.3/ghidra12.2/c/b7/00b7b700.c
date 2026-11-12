
void FUN_00b7b700(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char cVar8;
  undefined2 uVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  uint *puVar16;
  undefined *local_70;
  char *pcStack_68;
  
  puVar5 = PTR_DAT_04bb57f8;
  switch(*param_2) {
  case 2:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukIngredient2_2";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
    break;
  case 3:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukIngredient3_1";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
    break;
  case 4:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukIngredient3_2";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
    break;
  default:
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = *(uint *)(lVar14 + 0x1488);
    if ((0 < (int)uVar7) ||
       (((*(long *)(lVar14 + 0x1378) != 0 &&
         (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 != (uint *)0x0)) &&
        (uVar7 = *puVar16, uVar7 != 0)))) {
      uVar15 = 0;
LAB_00b7bb40:
      if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
        if (((*(long *)(lVar14 + 0x1378) == 0) ||
            (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
           (((uVar15 < *(uint *)(lVar14 + 0x1390) &&
             (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar15) == '\0')) ||
            (((*puVar16 <= uVar15 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))))
        goto LAB_00b7c840;
        iVar11 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * uVar15 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                          (long)puVar16);
      }
      else {
        if (*(uint *)(lVar14 + 0x1488) <= uVar15) goto LAB_00b7c840;
        uVar1 = uVar15;
        if (*(uint *)(lVar14 + 0x1478) <= uVar15) {
          uVar1 = 0;
        }
        puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar1 * 8);
      }
      if (puVar16 != (uint *)0x0) {
        if (*puVar16 != 0) {
          cVar8 = *PTR_DAT_04bb57f0;
          do {
            puVar6 = PTR_DAT_04bb57f0;
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar1 = *(uint *)(puVar5 + 4);
              if (-1 < (int)uVar1) {
                if ((undefined2 *)((ulong)uVar1 + (long)puVar16) != (undefined2 *)0x0) {
                  uVar9 = *(undefined2 *)((ulong)uVar1 + (long)puVar16);
                  goto LAB_00b7bcb4;
                }
                break;
              }
              if (uVar1 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)*puVar16;
            uVar9 = 0xfffe;
            if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7bcb4;
            lVar2 = 0xc;
            if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar16 + (lVar2 - (long)puVar12);
            if (lVar2 == 0) break;
            uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
            *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
            if (uVar10 == 0) break;
            piVar13 = (int *)(lVar2 + 4);
            while (piVar13[-1] != 0x20cb67bc) {
              piVar13 = piVar13 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_00b7bcb0;
            }
            iVar11 = 0;
            if (*piVar13 != -1) {
              iVar11 = *piVar13;
            }
            *(int *)(puVar5 + 4) = iVar11;
            if (*puVar16 == 0) break;
          } while( true );
        }
LAB_00b7bcb0:
        uVar9 = 0xfffe;
LAB_00b7bcb4:
        *(undefined2 *)param_1 = uVar9;
        *(undefined2 *)((long)param_1 + 2) = 0;
        param_1[1] = 0;
        FUN_0277d4ac(param_1);
        switch(*param_2) {
        case 0:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x24);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != -0x9a63bc5) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x24) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
          break;
        case 1:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x28);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != 0x70cdb695) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x28) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
          break;
        case 5:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x38);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != -0x596baa78) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x38) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
          break;
        case 7:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x10);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != 0x647a321a) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x10) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
          break;
        case 10:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x1c);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != -0x318c056f) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x1c) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
          break;
        case 0xb:
          if (*puVar16 != 0) {
            cVar8 = *PTR_DAT_04bb57f0;
            do {
              puVar6 = PTR_DAT_04bb57f0;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar5 + 0x20);
                uVar10 = (ulong)uVar1;
                if (-1 < (int)uVar1) goto LAB_00b7c1d0;
                if (uVar1 != 0xffffffff) break;
              }
              lVar2 = (long)puVar16 - (ulong)*puVar16;
              if ((*puVar16 == 0) || (lVar2 == 0)) break;
              lVar3 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
              if (uVar10 == 0) break;
              piVar13 = (int *)(lVar3 + lVar2 + 4);
              while (piVar13[-1] != 0x53a4c228) {
                piVar13 = piVar13 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) goto switchD_00b7bcec_caseD_2;
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar5 + 0x20) = iVar11;
              if (*puVar16 == 0) break;
            } while( true );
          }
        }
        goto switchD_00b7bcec_caseD_2;
      }
    }
LAB_00b7c840:
    uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    param_1[1] = uVar4;
    return;
  case 6:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukIngredient4_2";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
    break;
  case 8:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukHideIngredient2_1";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
    break;
  case 9:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestTukHideIngredient2_2";
    lVar14 = *(long *)PTR_DAT_04bb32f0;
    uVar7 = FUN_0273ea30(&local_70);
    puVar6 = PTR_DAT_04bb57f8;
    puVar5 = PTR_DAT_04bb57f0;
    if ((int)*(uint *)(lVar14 + 0x1488) < 1) {
      if ((((*(long *)(lVar14 + 0x1378) == 0) ||
           (puVar16 = *(uint **)(*(long *)(lVar14 + 0x1378) + 8), puVar16 == (uint *)0x0)) ||
          ((uVar7 < *(uint *)(lVar14 + 0x1390) &&
           (*(char *)(*(long *)(lVar14 + 0x1398) + (long)(int)uVar7) == '\0')))) ||
         (((*puVar16 <= uVar7 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0))))
      goto LAB_00b7c840;
      iVar11 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar7 + (uint)(ushort)puVar16[2] * 8 + iVar11) +
                        (long)puVar16);
    }
    else {
      if (*(uint *)(lVar14 + 0x1488) <= uVar7) goto LAB_00b7c840;
      if (*(uint *)(lVar14 + 0x1478) <= uVar7) {
        uVar7 = 0;
      }
      puVar16 = *(uint **)(*(long *)(lVar14 + 0x1480) + (ulong)uVar7 * 8);
    }
    if (puVar16 == (uint *)0x0) goto LAB_00b7c840;
    if (*puVar16 != 0) {
      cVar8 = *PTR_DAT_04bb57f0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(uint *)(puVar6 + 4);
          uVar10 = (ulong)uVar7;
          if (-1 < (int)uVar7) goto LAB_00b7c870;
          if (uVar7 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar16;
        uVar9 = 0xfffe;
        if ((*puVar16 == 0) || (puVar16 == puVar12)) goto LAB_00b7c884;
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar12)) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + (lVar14 - (long)puVar12);
        if (lVar14 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar13 = (int *)(lVar14 + 4);
        while (piVar13[-1] != 0x20cb67bc) {
          piVar13 = piVar13 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00b7c880;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar6 + 4) = iVar11;
        if (*puVar16 == 0) break;
      } while( true );
    }
  }
  goto LAB_00b7c880;
LAB_00b7c1d0:
  if (((char *)(uVar10 + (long)puVar16) != (char *)0x0) &&
     (*(char *)(uVar10 + (long)puVar16) != '\0')) {
    return;
  }
switchD_00b7bcec_caseD_2:
  uVar15 = uVar15 + 1;
  if (uVar15 == uVar7) goto LAB_00b7c840;
  goto LAB_00b7bb40;
LAB_00b7c870:
  if ((undefined2 *)(uVar10 + (long)puVar16) != (undefined2 *)0x0) {
    uVar9 = *(undefined2 *)(uVar10 + (long)puVar16);
    goto LAB_00b7c884;
  }
LAB_00b7c880:
  uVar9 = 0xfffe;
LAB_00b7c884:
  *(undefined2 *)param_1 = uVar9;
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  return;
}

