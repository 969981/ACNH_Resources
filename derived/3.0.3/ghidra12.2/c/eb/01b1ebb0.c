
long FUN_01b1ebb0(short param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  uint *puVar8;
  int *piVar9;
  char cVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  
  puVar6 = PTR_DAT_04bc0530;
  puVar5 = PTR_DAT_04bc0528;
  lVar11 = *(long *)PTR_DAT_04bb4998;
  if (*(int *)(lVar11 + 0x1e8) != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x1f0);
    puVar1 = puVar12 + *(int *)(lVar11 + 0x1e8);
    cVar10 = *PTR_DAT_04bc0528;
    uVar3 = *(uint *)(lVar11 + 0x1c0);
    do {
      uVar4 = *(uint *)*puVar12;
      if ((int)uVar3 < 1) {
        if (*(long *)(lVar11 + 0xb0) == 0) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8);
          if (puVar15 == (uint *)0x0) {
            puVar15 = (uint *)0x0;
          }
          else if ((uVar4 < *(uint *)(lVar11 + 200)) &&
                  (*(char *)(*(long *)(lVar11 + 0xd0) + (long)(int)uVar4) == '\0')) {
            puVar15 = (uint *)0x0;
          }
          else if (uVar4 < *puVar15) {
            if (puVar15[1] == 0) {
              puVar15 = (uint *)0x0;
            }
            else if ((ushort)puVar15[2] == 0) {
              puVar15 = (uint *)0x0;
            }
            else {
              iVar13 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                iVar13 = 0x1c;
              }
              puVar15 = (uint *)((ulong)(puVar15[1] * uVar4 + (uint)(ushort)puVar15[2] * 8 + iVar13)
                                + (long)puVar15);
            }
          }
          else {
            puVar15 = (uint *)0x0;
          }
        }
      }
      else if (uVar4 < uVar3) {
        if (*(uint *)(lVar11 + 0x1b0) <= uVar4) {
          uVar4 = 0;
        }
        puVar15 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)uVar4 * 8);
      }
      else {
        puVar15 = (uint *)0x0;
      }
      while (sVar7 = 0, *puVar15 != 0) {
        if (cVar10 != '\0') {
          uVar4 = *(uint *)(puVar6 + 0x14);
          if ((int)uVar4 < 0) {
            if (uVar4 == 0xffffffff) {
              uVar4 = *puVar15;
              if (uVar4 != 0) goto LAB_01b1ed28;
              sVar7 = 0;
            }
            else {
LAB_01b1ed90:
              sVar7 = 0;
            }
          }
          else {
            sVar7 = 0;
            if ((short *)((ulong)uVar4 + (long)puVar15) != (short *)0x0) {
              sVar7 = *(short *)((ulong)uVar4 + (long)puVar15);
            }
          }
          break;
        }
        cVar10 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        uVar4 = *puVar15;
        sVar7 = 0;
        if (uVar4 == 0) break;
LAB_01b1ed28:
        puVar8 = (uint *)(ulong)uVar4;
        if (puVar15 == puVar8) goto LAB_01b1ed90;
        lVar2 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar15 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) goto LAB_01b1ed90;
        uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar8));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        sVar7 = 0;
        if (uVar14 == 0) break;
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != 0x54706054) {
          piVar9 = piVar9 + 2;
          uVar14 = uVar14 - 1;
          sVar7 = 0;
          if (uVar14 == 0) goto LAB_01b1ed78;
        }
        iVar13 = 0;
        if (*piVar9 != -1) {
          iVar13 = *piVar9;
        }
        *(int *)(puVar6 + 0x14) = iVar13;
      }
LAB_01b1ed78:
      if (sVar7 == param_1) {
        if (*puVar15 != 0) goto LAB_01b1edcc;
        goto LAB_01b1ee64;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar1);
  }
  return 0;
  while( true ) {
    puVar8 = (uint *)(ulong)*puVar15;
    lVar11 = 0;
    if ((*puVar15 == 0) || (puVar15 == puVar8)) goto LAB_01b1ee68;
    lVar11 = 0xc;
    if (*(char *)((long)puVar15 + (10 - (long)puVar8)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar2 = (long)puVar15 + (lVar11 - (long)puVar8);
    if (lVar2 == 0) break;
    uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar8));
    *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
    lVar11 = 0;
    if (uVar14 == 0) goto LAB_01b1ee68;
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != -0x553b6ded) {
      piVar9 = piVar9 + 2;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) {
        lVar11 = 0;
        goto LAB_01b1ee68;
      }
    }
    iVar13 = 0;
    if (*piVar9 != -1) {
      iVar13 = *piVar9;
    }
    *(int *)(puVar6 + 0x1c) = iVar13;
    if (*puVar15 == 0) break;
LAB_01b1edcc:
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar6 + 0x1c);
      if (-1 < (int)uVar3) {
        lVar11 = (ulong)uVar3 + (long)puVar15;
        goto LAB_01b1ee68;
      }
      if (uVar3 != 0xffffffff) break;
    }
  }
LAB_01b1ee64:
  lVar11 = 0;
LAB_01b1ee68:
  lVar2 = *(long *)PTR_PTR_04bc0538;
  if (lVar11 != 0) {
    lVar2 = lVar11;
  }
  return lVar2;
}

