
void FUN_03751f30(uint *param_1,uint param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  uint *puVar8;
  ushort uVar9;
  char cVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  undefined *local_60;
  uint local_58;
  uint uStack_54;
  long local_50;
  uint local_48;
  uint local_44;
  
  puVar2 = PTR_DAT_04bcacd0;
  puVar1 = PTR_DAT_04bcacc8;
  lVar7 = *(long *)PTR_DAT_04bb4958;
  uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x418);
  if ((*(uint *)(lVar7 + 0x3f8) <= uVar3) ||
     (puVar8 = *(uint **)(*(long *)(lVar7 + 0x400) + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0))
  goto LAB_03752a80;
  if ((param_4 & 1) == 0) {
    if (param_3 == 2) {
      if (*puVar8 == 0) goto LAB_03752444;
      cVar10 = *PTR_DAT_04bcacc8;
      do {
        if (cVar10 != '\0') {
          uVar3 = *(uint *)(puVar2 + 0xc);
          if ((int)uVar3 < 0) {
            if (uVar3 == 0xffffffff) goto LAB_037522cc;
          }
          else if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
            uVar9 = *(ushort *)((ulong)uVar3 + (long)puVar8);
            goto LAB_037527ac;
          }
          goto LAB_037527a8;
        }
        cVar10 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
LAB_037522cc:
        puVar13 = (uint *)(ulong)*puVar8;
        uVar9 = 0xffff;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) {
LAB_037527ac:
          uVar3 = *puVar8;
          if (uVar3 == 0) goto LAB_037528e4;
          uVar12 = *(uint *)(puVar2 + 0x40);
          goto LAB_037527cc;
        }
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
        if (lVar7 == 0) {
LAB_037527a8:
          uVar9 = 0xffff;
          goto LAB_037527ac;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_037527a8;
        piVar14 = (int *)(lVar7 + 4);
        while (piVar14[-1] != 0x460ce4e2) {
          piVar14 = piVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_037527a8;
        }
        iVar5 = 0;
        iVar15 = 0;
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        *(int *)(puVar2 + 0xc) = iVar4;
        uVar9 = 0xffff;
      } while (*puVar8 != 0);
    }
    else if (param_3 == 1) {
      if (*puVar8 == 0) goto LAB_03752444;
      cVar10 = *PTR_DAT_04bcacc8;
      do {
        if (cVar10 != '\0') {
          uVar3 = *(uint *)(puVar2 + 8);
          if ((int)uVar3 < 0) {
            if (uVar3 == 0xffffffff) goto LAB_037523bc;
          }
          else if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
            uVar9 = *(ushort *)((ulong)uVar3 + (long)puVar8);
            goto LAB_03752850;
          }
          goto LAB_0375284c;
        }
        cVar10 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
LAB_037523bc:
        puVar13 = (uint *)(ulong)*puVar8;
        uVar9 = 0xffff;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) {
LAB_03752850:
          uVar3 = *puVar8;
          if (uVar3 == 0) goto LAB_037528e4;
          uVar12 = *(uint *)(puVar2 + 0x3c);
          goto LAB_03752870;
        }
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
        if (lVar7 == 0) {
LAB_0375284c:
          uVar9 = 0xffff;
          goto LAB_03752850;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_0375284c;
        piVar14 = (int *)(lVar7 + 4);
        while (piVar14[-1] != 0x7b6ccd52) {
          piVar14 = piVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0375284c;
        }
        iVar5 = 0;
        iVar15 = 0;
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        *(int *)(puVar2 + 8) = iVar4;
        uVar9 = 0xffff;
      } while (*puVar8 != 0);
    }
    else {
      if ((param_3 != 0) || (*puVar8 == 0)) goto LAB_03752444;
      cVar10 = *PTR_DAT_04bcacc8;
      do {
        if (cVar10 != '\0') {
          uVar3 = *(uint *)(puVar2 + 4);
          if ((int)uVar3 < 0) {
            if (uVar3 == 0xffffffff) goto LAB_037520f0;
          }
          else if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
            uVar9 = *(ushort *)((ulong)uVar3 + (long)puVar8);
            goto LAB_03752700;
          }
          goto LAB_037526fc;
        }
        cVar10 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
LAB_037520f0:
        puVar13 = (uint *)(ulong)*puVar8;
        uVar9 = 0xffff;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) {
LAB_03752700:
          uVar3 = *puVar8;
          if (uVar3 == 0) goto LAB_037528e4;
          uVar12 = *(uint *)(puVar2 + 0x38);
          goto LAB_03752720;
        }
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
        if (lVar7 == 0) {
LAB_037526fc:
          uVar9 = 0xffff;
          goto LAB_03752700;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_037526fc;
        piVar14 = (int *)(lVar7 + 4);
        while (piVar14[-1] != 0x3cccb782) {
          piVar14 = piVar14 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_037526fc;
        }
        iVar5 = 0;
        iVar15 = 0;
        iVar4 = 0;
        if (*piVar14 != -1) {
          iVar4 = *piVar14;
        }
        *(int *)(puVar2 + 4) = iVar4;
        uVar9 = 0xffff;
      } while (*puVar8 != 0);
    }
  }
  else if (param_3 == 1) {
    if (*puVar8 == 0) goto LAB_03752444;
    cVar10 = *PTR_DAT_04bcacc8;
    do {
      if (cVar10 != '\0') {
        uVar3 = *(uint *)(puVar2 + 0x14);
        if ((int)uVar3 < 0) {
          if (uVar3 == 0xffffffff) goto LAB_037521dc;
        }
        else if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
          uVar9 = *(ushort *)((ulong)uVar3 + (long)puVar8);
          goto LAB_0375250c;
        }
        goto LAB_03752508;
      }
      cVar10 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
LAB_037521dc:
      puVar13 = (uint *)(ulong)*puVar8;
      uVar9 = 0xffff;
      if ((*puVar8 == 0) || (puVar8 == puVar13)) {
LAB_0375250c:
        uVar3 = *puVar8;
        if (uVar3 == 0) goto LAB_037528e4;
        uVar12 = *(uint *)(puVar2 + 0x2c);
        goto LAB_0375252c;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
      if (lVar7 == 0) {
LAB_03752508:
        uVar9 = 0xffff;
        goto LAB_0375250c;
      }
      uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
      *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_03752508;
      piVar14 = (int *)(lVar7 + 4);
      while (piVar14[-1] != -0x252ee136) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_03752508;
      }
      iVar5 = 0;
      iVar15 = 0;
      iVar4 = 0;
      if (*piVar14 != -1) {
        iVar4 = *piVar14;
      }
      *(int *)(puVar2 + 0x14) = iVar4;
      uVar9 = 0xffff;
    } while (*puVar8 != 0);
  }
  else if ((param_3 == 0) && (*puVar8 != 0)) {
    cVar10 = *PTR_DAT_04bcacc8;
    do {
      if (cVar10 != '\0') {
        uVar3 = *(uint *)(puVar2 + 0x10);
        if ((int)uVar3 < 0) {
          if (uVar3 == 0xffffffff) goto LAB_03751ff4;
        }
        else if ((ushort *)((ulong)uVar3 + (long)puVar8) != (ushort *)0x0) {
          uVar9 = *(ushort *)((ulong)uVar3 + (long)puVar8);
          goto LAB_03752468;
        }
        goto LAB_03752464;
      }
      cVar10 = '\x01';
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
      *puVar1 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
LAB_03751ff4:
      puVar13 = (uint *)(ulong)*puVar8;
      uVar9 = 0xffff;
      if ((*puVar8 == 0) || (puVar8 == puVar13)) {
LAB_03752468:
        uVar3 = *puVar8;
        if (uVar3 == 0) goto LAB_037528e4;
        uVar12 = *(uint *)(puVar2 + 0x28);
        goto LAB_03752488;
      }
      lVar7 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar8 + (lVar7 - (long)puVar13);
      if (lVar7 == 0) {
LAB_03752464:
        uVar9 = 0xffff;
        goto LAB_03752468;
      }
      uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
      *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_03752464;
      piVar14 = (int *)(lVar7 + 4);
      while (piVar14[-1] != -0x628e9be6) {
        piVar14 = piVar14 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_03752464;
      }
      iVar5 = 0;
      iVar15 = 0;
      iVar4 = 0;
      if (*piVar14 != -1) {
        iVar4 = *piVar14;
      }
      *(int *)(puVar2 + 0x10) = iVar4;
      uVar9 = 0xffff;
    } while (*puVar8 != 0);
  }
  else {
LAB_03752444:
    iVar5 = 0;
    iVar15 = 0;
    uVar9 = 0xffff;
  }
  goto LAB_037528ec;
LAB_037527cc:
  do {
    if (-1 < (int)uVar12) {
      if ((char *)((long)puVar8 + (ulong)uVar12) == (char *)0x0) goto LAB_03752b5c;
      iVar5 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
LAB_03752b60:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_037528e8;
      uVar12 = *(uint *)(puVar2 + 0x4c);
      goto LAB_03752b80;
    }
    if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0)) {
LAB_03752b5c:
      iVar5 = 0;
      goto LAB_03752b60;
    }
    lVar16 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar7 == 0) goto LAB_03752b5c;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar2 + 0x40) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_03752b5c;
    puVar13 = (uint *)(lVar16 + lVar7 + 4);
    while (puVar13[-1] != 0x942d5719) {
      puVar13 = puVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_03752b5c;
    }
    uVar12 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar12 = *puVar13;
    }
    *(uint *)(puVar2 + 0x40) = uVar12;
    uVar3 = *puVar8;
  } while (uVar3 != 0);
  goto LAB_037528e4;
LAB_03752b80:
  if (-1 < (int)uVar12) goto LAB_03752c9c;
  if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0))
  goto LAB_037528e8;
  lVar16 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  if (lVar16 + lVar7 == 0) goto LAB_037528e8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_037528e8;
  puVar13 = (uint *)(lVar16 + lVar7 + 4);
  while (puVar13[-1] != 0x6849dab1) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_037528e8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar2 + 0x4c) = uVar12;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_037528e8;
  goto LAB_03752b80;
LAB_03752870:
  do {
    if (-1 < (int)uVar12) {
      if ((char *)((long)puVar8 + (ulong)uVar12) == (char *)0x0) goto LAB_03752c08;
      iVar5 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
LAB_03752c0c:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_037528e8;
      uVar12 = *(uint *)(puVar2 + 0x48);
      goto LAB_03752c2c;
    }
    if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0)) {
LAB_03752c08:
      iVar5 = 0;
      goto LAB_03752c0c;
    }
    lVar16 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar7 == 0) goto LAB_03752c08;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar2 + 0x3c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_03752c08;
    puVar13 = (uint *)(lVar16 + lVar7 + 4);
    while (puVar13[-1] != 0x2c91307c) {
      puVar13 = puVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_03752c08;
    }
    uVar12 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar12 = *puVar13;
    }
    *(uint *)(puVar2 + 0x3c) = uVar12;
    uVar3 = *puVar8;
  } while (uVar3 != 0);
  goto LAB_037528e4;
LAB_03752c2c:
  if (-1 < (int)uVar12) goto LAB_03752c9c;
  if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0))
  goto LAB_037528e8;
  lVar16 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  if (lVar16 + lVar7 == 0) goto LAB_037528e8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar2 + 0x48) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_037528e8;
  puVar13 = (uint *)(lVar16 + lVar7 + 4);
  while (puVar13[-1] != 0xd0f5bdd4) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_037528e8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar2 + 0x48) = uVar12;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_037528e8;
  goto LAB_03752c2c;
LAB_03752720:
  do {
    if (-1 < (int)uVar12) {
      if ((char *)((long)puVar8 + (ulong)uVar12) == (char *)0x0) goto LAB_03752ab8;
      iVar5 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
LAB_03752abc:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_037528e8;
      uVar12 = *(uint *)(puVar2 + 0x44);
      goto LAB_03752adc;
    }
    if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0)) {
LAB_03752ab8:
      iVar5 = 0;
      goto LAB_03752abc;
    }
    lVar16 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar7 == 0) goto LAB_03752ab8;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar2 + 0x38) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_03752ab8;
    puVar13 = (uint *)(lVar16 + lVar7 + 4);
    while (puVar13[-1] != 0x3e249f92) {
      puVar13 = puVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_03752ab8;
    }
    uVar12 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar12 = *puVar13;
    }
    *(uint *)(puVar2 + 0x38) = uVar12;
    uVar3 = *puVar8;
  } while (uVar3 != 0);
  goto LAB_037528e4;
LAB_03752adc:
  if (-1 < (int)uVar12) goto LAB_03752c9c;
  if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0))
  goto LAB_037528e8;
  lVar16 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  if (lVar16 + lVar7 == 0) goto LAB_037528e8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar2 + 0x44) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_037528e8;
  puVar13 = (uint *)(lVar16 + lVar7 + 4);
  while (puVar13[-1] != 0xc240123a) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_037528e8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar2 + 0x44) = uVar12;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_037528e8;
  goto LAB_03752adc;
LAB_0375252c:
  do {
    if (-1 < (int)uVar12) {
      if ((char *)((long)puVar8 + (ulong)uVar12) == (char *)0x0) goto LAB_03752658;
      iVar5 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
LAB_0375265c:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_037528e8;
      uVar12 = *(uint *)(puVar2 + 0x34);
      goto LAB_0375267c;
    }
    if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0)) {
LAB_03752658:
      iVar5 = 0;
      goto LAB_0375265c;
    }
    lVar16 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar7 == 0) goto LAB_03752658;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar2 + 0x2c) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_03752658;
    puVar13 = (uint *)(lVar16 + lVar7 + 4);
    while (puVar13[-1] != 0x4b22396c) {
      puVar13 = puVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_03752658;
    }
    uVar12 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar12 = *puVar13;
    }
    *(uint *)(puVar2 + 0x2c) = uVar12;
    uVar3 = *puVar8;
  } while (uVar3 != 0);
  goto LAB_037528e4;
LAB_0375267c:
  if (-1 < (int)uVar12) goto LAB_03752c9c;
  if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0))
  goto LAB_037528e8;
  lVar16 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  if (lVar16 + lVar7 == 0) goto LAB_037528e8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_037528e8;
  puVar13 = (uint *)(lVar16 + lVar7 + 4);
  while (puVar13[-1] != 0xe3eb7092) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_037528e8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar2 + 0x34) = uVar12;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_037528e8;
  goto LAB_0375267c;
LAB_037525d0:
  if (-1 < (int)uVar12) goto LAB_03752c9c;
  if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0))
  goto LAB_037528e8;
  lVar16 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar16 = 0x1c;
  }
  if (lVar16 + lVar7 == 0) goto LAB_037528e8;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar2 + 0x30) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_037528e8;
  puVar13 = (uint *)(lVar16 + lVar7 + 4);
  while (puVar13[-1] != 0xf15edf7c) {
    puVar13 = puVar13 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_037528e8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar2 + 0x30) = uVar12;
  uVar3 = *puVar8;
  if (uVar3 == 0) goto LAB_037528e8;
  goto LAB_037525d0;
LAB_03752c9c:
  if ((char *)((long)puVar8 + (ulong)uVar12) != (char *)0x0) {
    iVar15 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
    goto LAB_037528ec;
  }
  goto LAB_037528e8;
LAB_03752488:
  do {
    if (-1 < (int)uVar12) {
      if ((char *)((long)puVar8 + (ulong)uVar12) == (char *)0x0) goto LAB_037525ac;
      iVar5 = (int)*(char *)((long)puVar8 + (ulong)uVar12);
LAB_037525b0:
      uVar3 = *puVar8;
      if (uVar3 == 0) goto LAB_037528e8;
      uVar12 = *(uint *)(puVar2 + 0x30);
      goto LAB_037525d0;
    }
    if ((uVar12 != 0xffffffff) || (lVar7 = (long)puVar8 - (ulong)uVar3, lVar7 == 0)) {
LAB_037525ac:
      iVar5 = 0;
      goto LAB_037525b0;
    }
    lVar16 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar16 = 0x1c;
    }
    if (lVar16 + lVar7 == 0) goto LAB_037525ac;
    uVar11 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_037525ac;
    puVar13 = (uint *)(lVar16 + lVar7 + 4);
    while (puVar13[-1] != 0x59979682) {
      puVar13 = puVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_037525ac;
    }
    uVar12 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar12 = *puVar13;
    }
    *(uint *)(puVar2 + 0x28) = uVar12;
    uVar3 = *puVar8;
  } while (uVar3 != 0);
LAB_037528e4:
  iVar5 = 0;
LAB_037528e8:
  iVar15 = 0;
LAB_037528ec:
  local_48 = (uint)uVar9;
  local_44 = 0;
  FUN_0277d4ac(&local_48);
  puVar1 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  lVar7 = *(long *)puVar1;
  if (lVar7 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_50 = 0;
      local_60 = PTR_DAT_04bc0510 + 0x10;
      local_58 = local_48;
      uStack_54 = local_44;
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(&local_48);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_50 = lVar7;
          }
        }
      }
      uVar11 = FUN_01ae7a70(&local_60);
      if ((uVar11 & 1) != 0) {
        FUN_01afca60(&local_60,0);
      }
      if (iVar5 != -1) {
        FUN_01ad7260(&local_60);
        iVar4 = FUN_01ad7260(&local_60);
        if ((((iVar4 != 0) && (iVar4 = FUN_01ad7260(&local_60), iVar4 != 0)) &&
            ((iVar5 == 0 || (iVar4 = FUN_01ad7260(&local_60), iVar5 < iVar4)))) &&
           (puVar6 = (ushort *)FUN_01afd600(&local_60), puVar6 != (ushort *)0x0)) {
          *puVar6 = *puVar6 & 0xfff8 | (ushort)iVar5 & 7;
        }
      }
      if ((iVar15 != -1) && (iVar5 = FUN_01afcfa0(&local_60), iVar5 != 0)) {
        FUN_01afdcc4(&local_60,iVar15);
      }
      *param_1 = local_58;
      param_1[1] = uStack_54;
      return;
    }
  }
LAB_03752a80:
  uVar3 = *(uint *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(uint *)PTR_DAT_04bb37e0;
  param_1[1] = uVar3;
  return;
}

