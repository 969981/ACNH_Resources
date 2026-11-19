
undefined8 FUN_038d30c0(int *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar5 = (char *)param_2[1];
  lVar7 = 0;
  do {
    if (pcVar5[lVar7] == '\0') {
LAB_038d3148:
      if ((int)lVar7 < 0) {
        pcVar5 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar5[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038d3148;
    }
    if (pcVar5[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038d3148;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  iVar8 = 1;
  if (*pcVar5 == '+') {
LAB_038d3174:
    uVar11 = 1;
  }
  else {
    if (*pcVar5 == '-') {
      iVar8 = -1;
      goto LAB_038d3174;
    }
    uVar11 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar3 = PTR_DAT_04bb2120;
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d32dc;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d32dc;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d32dc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d32dc:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar11 <= (int)lVar7) {
      pbVar1 = (byte *)(lVar6 + uVar11);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) goto LAB_038d3354;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d352c;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d352c;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d352c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d352c:
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
  }
  else if (param_3 == 10) {
LAB_038d3354:
    puVar3 = PTR_DAT_04bb2120;
    bVar13 = false;
    iVar9 = 0;
    if (iVar8 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = param_2[1];
        lVar7 = 0;
        do {
          if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d34a4;
          if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_038d34a4;
          }
          if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_038d34a4;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_038d34a4:
        iVar10 = (int)uVar11;
        pbVar1 = puVar3;
        if (iVar10 <= (int)lVar7 && -1 < iVar10) {
          pbVar1 = (byte *)(lVar6 + uVar11);
        }
        uVar4 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar4 = 0xffffffff;
        }
        if ((int)uVar4 < 0) goto LAB_038d34ec;
        if (iVar9 + 0xf3333333U < 0xe6666667) {
          return 0;
        }
        if (iVar9 * 10 < (int)(uVar4 | 0x80000000)) {
          return 0;
        }
        iVar9 = iVar9 * 10 + uVar4 * iVar8;
        uVar11 = (ulong)(iVar10 + 1);
        bVar13 = true;
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d33e4;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d33e4;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d33e4;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d33e4:
      iVar10 = (int)uVar11;
      pbVar1 = puVar3;
      if (iVar10 <= (int)lVar7 && -1 < iVar10) {
        pbVar1 = (byte *)(lVar6 + uVar11);
      }
      uVar4 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        uVar4 = 0xffffffff;
      }
      if ((int)uVar4 < 0) goto LAB_038d34ec;
      if (iVar9 + 0xf3333333U < 0xe6666667) {
        return 0;
      }
      if ((int)(uVar4 ^ 0x7fffffff) < iVar9 * 10) {
        return 0;
      }
      iVar9 = iVar9 * 10 + uVar4 * iVar8;
      uVar11 = (ulong)(iVar10 + 1);
      bVar13 = true;
    } while( true );
  }
  puVar3 = PTR_DAT_04bb2120;
  bVar13 = false;
  uVar12 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d3204;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d3204;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d3204;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d3204:
    iVar9 = (int)uVar11;
    pbVar1 = puVar3;
    if (iVar9 <= (int)lVar7 && -1 < iVar9) {
      pbVar1 = (byte *)(lVar6 + uVar11);
    }
    uVar4 = tolower((uint)*pbVar1);
    uVar4 = uVar4 & 0xff;
    uVar2 = uVar4 - 0x57;
    if (5 < uVar4 - 0x61) {
      uVar2 = 0xffffffff;
    }
    if (uVar4 < 0x3a) {
      uVar2 = uVar4 - 0x30;
    }
    if (((int)uVar2 < 0) || ((int)param_3 <= (int)uVar2)) {
      if (!bVar13) {
        return 0;
      }
      iVar9 = (int)uVar12 * iVar8;
      goto LAB_038d34f4;
    }
    if ((param_3 * uVar12 & 0xffffffff00000000) != 0) {
      return 0;
    }
    uVar4 = (int)uVar12 * param_3;
    if (CARRY4(uVar2,uVar4)) {
      return 0;
    }
    uVar12 = (ulong)(uVar2 + uVar4);
    uVar11 = (ulong)(iVar9 + 1);
    bVar13 = true;
  } while( true );
LAB_038d34ec:
  if (!bVar13) {
    return 0;
  }
  if (param_1 != (int *)0x0) {
LAB_038d34f4:
    *param_1 = iVar9;
  }
  return 1;
}

