
undefined8 FUN_038d22d0(short *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar5 = (char *)param_2[1];
  lVar7 = 0;
  do {
    if (pcVar5[lVar7] == '\0') {
LAB_038d2358:
      if ((int)lVar7 < 0) {
        pcVar5 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar5[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038d2358;
    }
    if (pcVar5[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038d2358;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  iVar10 = 1;
  if (*pcVar5 == '+') {
LAB_038d2384:
    uVar11 = 1;
  }
  else {
    if (*pcVar5 == '-') {
      iVar10 = -1;
      goto LAB_038d2384;
    }
    uVar11 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar3 = PTR_DAT_04bb2120;
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d24f0;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d24f0;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d24f0;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d24f0:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar11 <= (int)lVar7) {
      pbVar1 = (byte *)(lVar6 + uVar11);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 == 0x30) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d2730;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d2730;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d2730;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d2730:
      pcVar5 = (char *)(lVar6 + uVar11 + 1);
      if ((int)lVar7 <= (int)uVar11) {
        pcVar5 = puVar3;
      }
      if (*pcVar5 == 'b') {
        uVar11 = uVar11 | 2;
        param_3 = 2;
      }
      else if (*pcVar5 == 'x') {
        uVar11 = uVar11 | 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
      goto LAB_038d239c;
    }
  }
  else if (param_3 != 10) {
LAB_038d239c:
    puVar3 = PTR_DAT_04bb2120;
    uVar14 = 0;
    if (param_3 != 0) {
      uVar14 = 0xffff / param_3;
    }
    bVar8 = false;
    uVar13 = 0;
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d2414;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d2414;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d2414;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d2414:
      iVar9 = (int)uVar11;
      pbVar1 = puVar3;
      if (iVar9 <= (int)lVar7 && -1 < iVar9) {
        pbVar1 = (byte *)(lVar6 + uVar11);
      }
      uVar4 = tolower((uint)*pbVar1);
      uVar4 = uVar4 & 0xff;
      iVar2 = uVar4 - 0x57;
      if (5 < uVar4 - 0x61) {
        iVar2 = -1;
      }
      if (uVar4 < 0x3a) {
        iVar2 = uVar4 - 0x30;
      }
      if ((iVar2 < 0) || ((int)param_3 <= iVar2)) {
        if (!bVar8) {
          return 0;
        }
        sVar12 = (short)uVar13 * (short)iVar10;
        goto LAB_038d26f4;
      }
      if (uVar14 < (uVar13 & 0xffff)) {
        return 0;
      }
      if (0xffffU - iVar2 < (uVar13 * param_3 & 0xffff)) {
        return 0;
      }
      uVar13 = uVar13 * param_3 + iVar2;
      uVar11 = (ulong)(iVar9 + 1);
      bVar8 = true;
    } while( true );
  }
  puVar3 = PTR_DAT_04bb2120;
  bVar8 = false;
  if (-1 < iVar10) {
    uVar14 = 0;
    do {
      sVar12 = (short)uVar14;
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d25f4;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d25f4;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d25f4;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d25f4:
      iVar9 = (int)uVar11;
      pbVar1 = puVar3;
      if (iVar9 <= (int)lVar7 && -1 < iVar9) {
        pbVar1 = (byte *)(lVar6 + uVar11);
      }
      iVar2 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        iVar2 = -1;
      }
      if (iVar2 < 0) goto LAB_038d26ec;
      if (0xccc < (uVar14 >> 1 & 0x7fff)) {
        return 0;
      }
      if (0xffffU - iVar2 < (uVar14 * 10 & 0xfffe)) {
        return 0;
      }
      uVar14 = uVar14 * 10 + iVar2 * iVar10;
      uVar11 = (ulong)(iVar9 + 1);
      bVar8 = true;
    } while( true );
  }
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d26b4;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d26b4;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d26b4;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d26b4:
    iVar10 = (int)uVar11;
    pbVar1 = &DAT_0419b684;
    if (iVar10 <= (int)lVar7 && -1 < iVar10) {
      pbVar1 = (byte *)(lVar6 + uVar11);
    }
    iVar9 = *pbVar1 - 0x30;
    if (0x39 < *pbVar1) {
      iVar9 = -1;
    }
    if (iVar9 < 0) {
      sVar12 = 0;
LAB_038d26ec:
      if (!bVar8) {
        return 0;
      }
      if (param_1 != (short *)0x0) {
LAB_038d26f4:
        *param_1 = sVar12;
      }
      return 1;
    }
    uVar11 = (ulong)(iVar10 + 1);
    bVar8 = true;
    if (iVar9 != 0) {
      return 0;
    }
  } while( true );
}

