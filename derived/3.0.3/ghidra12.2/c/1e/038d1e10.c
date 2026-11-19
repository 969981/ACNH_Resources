
undefined8 FUN_038d1e10(char *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar6 = (char *)param_2[1];
  lVar8 = 0;
  do {
    if (pcVar6[lVar8] == '\0') {
LAB_038d1e98:
      if ((int)lVar8 < 0) {
        pcVar6 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar6[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_038d1e98;
    }
    if (pcVar6[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_038d1e98;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  iVar11 = 1;
  if (*pcVar6 == '+') {
LAB_038d1ec4:
    uVar14 = 1;
  }
  else {
    if (*pcVar6 == '-') {
      iVar11 = -1;
      goto LAB_038d1ec4;
    }
    uVar14 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar4 = PTR_DAT_04bb2120;
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == '\0') goto LAB_038d2030;
      if (*(char *)(lVar7 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038d2030;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038d2030;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038d2030:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar14 <= (int)lVar8) {
      pbVar1 = (byte *)(lVar7 + uVar14);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) goto LAB_038d20b0;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == '\0') goto LAB_038d2290;
      if (*(char *)(lVar7 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038d2290;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038d2290;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038d2290:
    pcVar6 = (char *)(lVar7 + uVar14 + 1);
    if ((int)lVar8 <= (int)uVar14) {
      pcVar6 = puVar4;
    }
    if (*pcVar6 == 'b') {
      uVar14 = uVar14 | 2;
      param_3 = 2;
    }
    else if (*pcVar6 == 'x') {
      uVar14 = uVar14 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) {
LAB_038d20b0:
    puVar4 = PTR_DAT_04bb2120;
    bVar9 = false;
    iVar12 = 0;
    if (iVar11 < 0) {
      do {
        cVar10 = (char)iVar12;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        lVar8 = 0;
        do {
          if (*(char *)(lVar7 + lVar8) == '\0') goto LAB_038d21f4;
          if (*(char *)(lVar7 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038d21f4;
          }
          if (*(char *)(lVar7 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038d21f4;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038d21f4:
        iVar13 = (int)uVar14;
        pbVar1 = &DAT_0419b684;
        if (iVar13 <= (int)lVar8 && -1 < iVar13) {
          pbVar1 = (byte *)(lVar7 + uVar14);
        }
        iVar2 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar2 = -1;
        }
        if (iVar2 < 0) goto LAB_038d224c;
        if ((iVar12 - 0xdU & 0xff) < 0xe7) {
          return 0;
        }
        if ((int)(char)(iVar12 * 10) < iVar2 + -0x80) {
          return 0;
        }
        iVar12 = iVar12 * 10 + iVar2 * iVar11;
        uVar14 = (ulong)(iVar13 + 1);
        bVar9 = true;
      } while( true );
    }
    do {
      cVar10 = (char)iVar12;
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = param_2[1];
      lVar8 = 0;
      do {
        if (*(char *)(lVar7 + lVar8) == '\0') goto LAB_038d2134;
        if (*(char *)(lVar7 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_038d2134;
        }
        if (*(char *)(lVar7 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_038d2134;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_038d2134:
      iVar13 = (int)uVar14;
      pbVar1 = puVar4;
      if (iVar13 <= (int)lVar8 && -1 < iVar13) {
        pbVar1 = (byte *)(lVar7 + uVar14);
      }
      iVar2 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        iVar2 = -1;
      }
      if (iVar2 < 0) goto LAB_038d224c;
      if ((iVar12 - 0xdU & 0xff) < 0xe7) {
        return 0;
      }
      if (0x7f - iVar2 < (int)(char)(iVar12 * 10)) {
        return 0;
      }
      iVar12 = iVar12 * 10 + iVar2 * iVar11;
      uVar14 = (ulong)(iVar13 + 1);
      bVar9 = true;
    } while( true );
  }
  puVar4 = PTR_DAT_04bb2120;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = 0xff / param_3;
  }
  bVar9 = false;
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == '\0') goto LAB_038d1f54;
      if (*(char *)(lVar7 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038d1f54;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038d1f54;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038d1f54:
    iVar12 = (int)uVar14;
    pbVar1 = puVar4;
    if (iVar12 <= (int)lVar8 && -1 < iVar12) {
      pbVar1 = (byte *)(lVar7 + uVar14);
    }
    uVar5 = tolower((uint)*pbVar1);
    uVar5 = uVar5 & 0xff;
    iVar13 = uVar5 - 0x57;
    if (5 < uVar5 - 0x61) {
      iVar13 = -1;
    }
    if (uVar5 < 0x3a) {
      iVar13 = uVar5 - 0x30;
    }
    if ((iVar13 < 0) || ((int)param_3 <= iVar13)) {
      if (!bVar9) {
        return 0;
      }
      cVar10 = (char)uVar15 * (char)iVar11;
      goto LAB_038d2254;
    }
    if (uVar3 < (uVar15 & 0xff)) {
      return 0;
    }
    if (0xffU - iVar13 < (uVar15 * param_3 & 0xff)) {
      return 0;
    }
    uVar15 = uVar15 * param_3 + iVar13;
    uVar14 = (ulong)(iVar12 + 1);
    bVar9 = true;
  } while( true );
LAB_038d224c:
  if (!bVar9) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
LAB_038d2254:
    *param_1 = cVar10;
  }
  return 1;
}

