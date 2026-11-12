
void FUN_0090a7d0(undefined8 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  ulong uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  char cVar19;
  
  puVar2 = PTR_PTR_04bb2238;
  lVar15 = *(long *)(param_2 + 8);
  if (lVar15 == 0) {
LAB_0090a99c:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    *param_1 = 0;
    param_1[1] = puVar2;
    *(undefined2 *)param_1 = 0xffff;
    uVar17 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    param_1[2] = uVar17;
    param_1[3] = puVar2;
    param_1[4] = uVar17;
    param_1[5] = puVar2;
    param_1[6] = uVar17;
    param_1[7] = 0;
    return;
  }
  if ((int)*(uint *)(lVar15 + 0x1c0) < 1) {
    if ((((*(long *)(lVar15 + 0xb0) == 0) ||
         (puVar14 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar14 == (uint *)0x0)) ||
        ((param_3 < *(uint *)(lVar15 + 200) &&
         (*(char *)(*(long *)(lVar15 + 0xd0) + (long)(int)param_3) == '\0')))) ||
       (((*puVar14 <= param_3 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0))))
    goto LAB_0090a99c;
    iVar16 = 0xc;
    if (*(char *)((long)puVar14 + 10) != '\0') {
      iVar16 = 0x1c;
    }
    puVar14 = (uint *)((ulong)(puVar14[1] * param_3 + (uint)(ushort)puVar14[2] * 8 + iVar16) +
                      (long)puVar14);
  }
  else {
    if (*(uint *)(lVar15 + 0x1c0) <= param_3) goto LAB_0090a99c;
    if (*(uint *)(lVar15 + 0x1b0) <= param_3) {
      param_3 = 0;
    }
    puVar14 = *(uint **)(*(long *)(lVar15 + 0x1b8) + (ulong)param_3 * 8);
  }
  if (puVar14 == (uint *)0x0) goto LAB_0090a99c;
  *(undefined2 *)(param_1 + 7) = 0;
  uVar7 = *puVar14;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uVar17 = *(undefined8 *)(puVar2 + 8);
  param_1[1] = puVar1;
  param_1[2] = uVar17;
  param_1[3] = puVar1;
  param_1[4] = uVar17;
  param_1[5] = puVar1;
  param_1[6] = uVar17;
  if (uVar7 != 0) {
    cVar19 = DAT_04cf00c8;
    do {
      if (cVar19 != '\0') {
        if ((int)DAT_04cf015c < 0) {
          if ((int)DAT_04cf015c == -1) goto LAB_0090a8b8;
        }
        else {
          puVar3 = (undefined2 *)((DAT_04cf015c & 0xffffffff) + (long)puVar14);
          if (puVar3 != (undefined2 *)0x0) {
            uVar10 = *puVar3;
            goto LAB_0090a9e4;
          }
        }
LAB_0090a9e0:
        uVar10 = 0;
LAB_0090a9e4:
        uVar7 = *puVar14;
        *(undefined2 *)param_1 = uVar10;
        if (uVar7 == 0) goto LAB_0090aa78;
        uVar11 = DAT_04cf016c._4_4_;
        goto LAB_0090aa0c;
      }
      cVar19 = '\x01';
      DAT_04cf00cc = 0xffffffffffffffff;
      DAT_04cf00d4 = 0xffffffffffffffff;
      DAT_04cf00c8 = '\x01';
      DAT_04cf016c = 0xffffffffffffffff;
      DAT_04cf0174 = 0xffffffff;
      DAT_04cf00dc = 0xffffffffffffffff;
      DAT_04cf00e4 = 0xffffffffffffffff;
      DAT_04cf00ec = 0xffffffffffffffff;
      DAT_04cf00f4 = 0xffffffffffffffff;
      DAT_04cf00fc = 0xffffffffffffffff;
      DAT_04cf0104 = 0xffffffffffffffff;
      DAT_04cf010c = 0xffffffffffffffff;
      DAT_04cf0114 = 0xffffffffffffffff;
      DAT_04cf011c = 0xffffffffffffffff;
      DAT_04cf0124 = 0xffffffffffffffff;
      DAT_04cf012c = 0xffffffffffffffff;
      DAT_04cf0134 = 0xffffffffffffffff;
      DAT_04cf013c = 0xffffffffffffffff;
      DAT_04cf0144 = 0xffffffffffffffff;
      DAT_04cf014c = 0xffffffffffffffff;
      DAT_04cf0154 = 0xffffffffffffffff;
      DAT_04cf015c = 0xffffffffffffffff;
      DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090a8b8:
      puVar12 = (uint *)(ulong)*puVar14;
      uVar10 = 0;
      if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_0090a9e4;
      lVar15 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar14 + (lVar15 - (long)puVar12);
      if (lVar15 == 0) goto LAB_0090a9e0;
      uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
      DAT_04cf015c = CONCAT44(DAT_04cf015c._4_4_,0xfffffffe);
      uVar10 = 0;
      if (uVar9 == 0) goto LAB_0090a9e4;
      piVar13 = (int *)(lVar15 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar10 = 0;
          goto LAB_0090a9e4;
        }
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      DAT_04cf015c = CONCAT44(DAT_04cf015c._4_4_,iVar16);
    } while (*puVar14 != 0);
  }
  *(undefined2 *)param_1 = 0;
  goto LAB_0090aa78;
LAB_0090aa0c:
  do {
    if (-1 < (int)uVar11) {
      puVar18 = (undefined8 *)((long)puVar14 + (ulong)uVar11);
LAB_0090aa88:
      uVar7 = *puVar14;
      puVar6 = &DAT_0407ebb1;
      if (puVar18 != (undefined8 *)0x0) {
        puVar6 = puVar18;
      }
      param_1[2] = puVar6;
      if (uVar7 != 0) goto LAB_0090aab8;
      puVar18 = (undefined8 *)0x0;
      param_1[4] = &DAT_0407ebb1;
      goto LAB_0090ad3c;
    }
    if ((uVar11 != 0xffffffff) || (lVar15 = (long)puVar14 - (ulong)uVar7, lVar15 == 0)) {
LAB_0090aa84:
      puVar18 = (undefined8 *)0x0;
      goto LAB_0090aa88;
    }
    lVar5 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar15 == 0) goto LAB_0090aa84;
    uVar9 = (ulong)*(ushort *)(lVar15 + 8);
    DAT_04cf016c = CONCAT44(0xfffffffe,(undefined4)DAT_04cf016c);
    if (uVar9 == 0) goto LAB_0090aa84;
    puVar12 = (uint *)(lVar5 + lVar15 + 4);
    while (puVar12[-1] != 0x977adfce) {
      puVar12 = puVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_0090aa84;
    }
    uVar11 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar11 = *puVar12;
    }
    DAT_04cf016c = CONCAT44(uVar11,(undefined4)DAT_04cf016c);
    uVar7 = *puVar14;
  } while (uVar7 != 0);
LAB_0090aa78:
  puVar18 = (undefined8 *)0x0;
  param_1[2] = &DAT_0407ebb1;
LAB_0090ab30:
  uVar7 = *puVar14;
  puVar6 = &DAT_0407ebb1;
  if (puVar18 != (undefined8 *)0x0) {
    puVar6 = puVar18;
  }
  param_1[4] = puVar6;
  if (uVar7 == 0) {
LAB_0090ac24:
    bVar8 = false;
    param_1[6] = &DAT_0407ebb1;
  }
  else {
    cVar19 = DAT_04cf00c8;
    while (cVar19 == '\0') {
      cVar19 = '\x01';
      DAT_04cf00cc = 0xffffffffffffffff;
      DAT_04cf00d4 = 0xffffffffffffffff;
      DAT_04cf00c8 = '\x01';
      DAT_04cf016c = 0xffffffffffffffff;
      DAT_04cf0174 = 0xffffffff;
      DAT_04cf00dc = 0xffffffffffffffff;
      DAT_04cf00e4 = 0xffffffffffffffff;
      DAT_04cf00ec = 0xffffffffffffffff;
      DAT_04cf00f4 = 0xffffffffffffffff;
      DAT_04cf00fc = 0xffffffffffffffff;
      DAT_04cf0104 = 0xffffffffffffffff;
      DAT_04cf010c = 0xffffffffffffffff;
      DAT_04cf0114 = 0xffffffffffffffff;
      DAT_04cf011c = 0xffffffffffffffff;
      DAT_04cf0124 = 0xffffffffffffffff;
      DAT_04cf012c = 0xffffffffffffffff;
      DAT_04cf0134 = 0xffffffffffffffff;
      DAT_04cf013c = 0xffffffffffffffff;
      DAT_04cf0144 = 0xffffffffffffffff;
      DAT_04cf014c = 0xffffffffffffffff;
      DAT_04cf0154 = 0xffffffffffffffff;
      DAT_04cf015c = 0xffffffffffffffff;
      DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090abb0:
      puVar12 = (uint *)(ulong)*puVar14;
      puVar18 = (undefined8 *)0x0;
      if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_0090ad3c;
      lVar15 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar14 + (lVar15 - (long)puVar12);
      if (lVar15 == 0) goto LAB_0090ad28;
      uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
      DAT_04cf015c = CONCAT44(0xfffffffe,(int)DAT_04cf015c);
      puVar18 = (undefined8 *)0x0;
      if (uVar9 == 0) goto LAB_0090ad3c;
      piVar13 = (int *)(lVar15 + 4);
      while (piVar13[-1] != 0x683b0a91) {
        piVar13 = piVar13 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          puVar18 = (undefined8 *)0x0;
          goto LAB_0090ad3c;
        }
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      DAT_04cf015c = CONCAT44(iVar16,(int)DAT_04cf015c);
      if (*puVar14 == 0) goto LAB_0090ac24;
    }
    if ((long)DAT_04cf015c < 0) {
      if (DAT_04cf015c._4_4_ == 0xffffffff) goto LAB_0090abb0;
LAB_0090ad28:
      puVar18 = (undefined8 *)0x0;
    }
    else {
      puVar18 = (undefined8 *)((ulong)DAT_04cf015c._4_4_ + (long)puVar14);
    }
LAB_0090ad3c:
    uVar7 = *puVar14;
    puVar6 = &DAT_0407ebb1;
    if (puVar18 != (undefined8 *)0x0) {
      puVar6 = puVar18;
    }
    param_1[6] = puVar6;
    if (uVar7 == 0) {
      *(undefined2 *)(param_1 + 7) = 0;
      return;
    }
    cVar19 = DAT_04cf00c8;
    while (cVar19 == '\0') {
      cVar19 = '\x01';
      DAT_04cf00cc = 0xffffffffffffffff;
      DAT_04cf00d4 = 0xffffffffffffffff;
      DAT_04cf00c8 = '\x01';
      DAT_04cf016c = 0xffffffffffffffff;
      DAT_04cf0174 = 0xffffffff;
      DAT_04cf00dc = 0xffffffffffffffff;
      DAT_04cf00e4 = 0xffffffffffffffff;
      DAT_04cf00ec = 0xffffffffffffffff;
      DAT_04cf00f4 = 0xffffffffffffffff;
      DAT_04cf00fc = 0xffffffffffffffff;
      DAT_04cf0104 = 0xffffffffffffffff;
      DAT_04cf010c = 0xffffffffffffffff;
      DAT_04cf0114 = 0xffffffffffffffff;
      DAT_04cf011c = 0xffffffffffffffff;
      DAT_04cf0124 = 0xffffffffffffffff;
      DAT_04cf012c = 0xffffffffffffffff;
      DAT_04cf0134 = 0xffffffffffffffff;
      DAT_04cf013c = 0xffffffffffffffff;
      DAT_04cf0144 = 0xffffffffffffffff;
      DAT_04cf014c = 0xffffffffffffffff;
      DAT_04cf0154 = 0xffffffffffffffff;
      DAT_04cf015c = 0xffffffffffffffff;
      DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090adbc:
      puVar12 = (uint *)(ulong)*puVar14;
      bVar8 = false;
      if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_0090ac2c;
      lVar15 = 0xc;
      if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar14 + (lVar15 - (long)puVar12);
      if (lVar15 == 0) goto LAB_0090ae84;
      uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
      DAT_04cf0164 = CONCAT44(0xfffffffe,(int)DAT_04cf0164);
      bVar8 = false;
      if (uVar9 == 0) goto LAB_0090ac2c;
      piVar13 = (int *)(lVar15 + 4);
      while (piVar13[-1] != -0x2e4e4bad) {
        piVar13 = piVar13 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          bVar8 = false;
          goto LAB_0090ac2c;
        }
      }
      iVar16 = 0;
      if (*piVar13 != -1) {
        iVar16 = *piVar13;
      }
      DAT_04cf0164 = CONCAT44(iVar16,(int)DAT_04cf0164);
      if (*puVar14 == 0) {
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined1 *)((long)param_1 + 0x39) = 0;
        return;
      }
    }
    if ((long)DAT_04cf0164 < 0) {
      if (DAT_04cf0164._4_4_ == 0xffffffff) goto LAB_0090adbc;
    }
    else if ((char *)((ulong)DAT_04cf0164._4_4_ + (long)puVar14) != (char *)0x0) {
      bVar8 = *(char *)((ulong)DAT_04cf0164._4_4_ + (long)puVar14) != '\0';
      goto LAB_0090ac2c;
    }
LAB_0090ae84:
    bVar8 = false;
  }
LAB_0090ac2c:
  uVar7 = *puVar14;
  *(bool *)(param_1 + 7) = bVar8;
  if (uVar7 == 0) {
LAB_0090ae64:
    *(undefined1 *)((long)param_1 + 0x39) = 0;
    return;
  }
  cVar19 = DAT_04cf00c8;
  do {
    if (cVar19 == '\0') {
      cVar19 = '\x01';
      DAT_04cf00cc = 0xffffffffffffffff;
      DAT_04cf00d4 = 0xffffffffffffffff;
      DAT_04cf00c8 = '\x01';
      DAT_04cf016c = 0xffffffffffffffff;
      DAT_04cf0174 = 0xffffffff;
      DAT_04cf00dc = 0xffffffffffffffff;
      DAT_04cf00e4 = 0xffffffffffffffff;
      DAT_04cf00ec = 0xffffffffffffffff;
      DAT_04cf00f4 = 0xffffffffffffffff;
      DAT_04cf00fc = 0xffffffffffffffff;
      DAT_04cf0104 = 0xffffffffffffffff;
      DAT_04cf010c = 0xffffffffffffffff;
      DAT_04cf0114 = 0xffffffffffffffff;
      DAT_04cf011c = 0xffffffffffffffff;
      DAT_04cf0124 = 0xffffffffffffffff;
      DAT_04cf012c = 0xffffffffffffffff;
      DAT_04cf0134 = 0xffffffffffffffff;
      DAT_04cf013c = 0xffffffffffffffff;
      DAT_04cf0144 = 0xffffffffffffffff;
      DAT_04cf014c = 0xffffffffffffffff;
      DAT_04cf0154 = 0xffffffffffffffff;
      DAT_04cf015c = 0xffffffffffffffff;
      DAT_04cf0164 = 0xffffffffffffffff;
    }
    else {
      if (-1 < (int)DAT_04cf0164) {
        pcVar4 = (char *)((DAT_04cf0164 & 0xffffffff) + (long)puVar14);
        if (pcVar4 == (char *)0x0) goto LAB_0090ae64;
        bVar8 = *pcVar4 != '\0';
LAB_0090ae5c:
        *(bool *)((long)param_1 + 0x39) = bVar8;
        return;
      }
      if ((int)DAT_04cf0164 != -1) goto LAB_0090ae64;
    }
    puVar12 = (uint *)(ulong)*puVar14;
    bVar8 = false;
    if ((*puVar14 == 0) || (puVar14 == puVar12)) goto LAB_0090ae5c;
    lVar15 = 0xc;
    if (*(char *)((long)puVar14 + (10 - (long)puVar12)) != '\0') {
      lVar15 = 0x1c;
    }
    lVar15 = (long)puVar14 + (lVar15 - (long)puVar12);
    if (lVar15 == 0) goto LAB_0090ae64;
    uVar9 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar12));
    DAT_04cf0164 = CONCAT44(DAT_04cf0164._4_4_,0xfffffffe);
    bVar8 = false;
    if (uVar9 == 0) goto LAB_0090ae5c;
    piVar13 = (int *)(lVar15 + 4);
    while (piVar13[-1] != 0x617794ff) {
      piVar13 = piVar13 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        bVar8 = false;
        goto LAB_0090ae5c;
      }
    }
    bVar8 = false;
    iVar16 = 0;
    if (*piVar13 != -1) {
      iVar16 = *piVar13;
    }
    DAT_04cf0164 = CONCAT44(DAT_04cf0164._4_4_,iVar16);
    if (*puVar14 == 0) goto LAB_0090ae5c;
  } while( true );
  while( true ) {
    lVar5 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar5 = 0x1c;
    }
    if (lVar5 + lVar15 == 0) goto LAB_0090ab2c;
    uVar9 = (ulong)*(ushort *)(lVar15 + 8);
    DAT_04cf0174 = 0xfffffffe;
    if (uVar9 == 0) goto LAB_0090ab2c;
    puVar12 = (uint *)(lVar5 + lVar15 + 4);
    while (puVar12[-1] != 0xdcfb52e8) {
      puVar12 = puVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_0090ab2c;
    }
    DAT_04cf0174 = 0;
    if (*puVar12 != 0xffffffff) {
      DAT_04cf0174 = *puVar12;
    }
    uVar7 = *puVar14;
    if (uVar7 == 0) break;
LAB_0090aab8:
    if (-1 < (int)DAT_04cf0174) {
      puVar18 = (undefined8 *)((long)puVar14 + (ulong)DAT_04cf0174);
      goto LAB_0090ab30;
    }
    if ((DAT_04cf0174 != 0xffffffff) || (lVar15 = (long)puVar14 - (ulong)uVar7, lVar15 == 0)) {
LAB_0090ab2c:
      puVar18 = (undefined8 *)0x0;
      goto LAB_0090ab30;
    }
  }
  param_1[4] = &DAT_0407ebb1;
  goto LAB_0090ac24;
}

