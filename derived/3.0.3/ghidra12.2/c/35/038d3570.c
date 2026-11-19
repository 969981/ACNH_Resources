
undefined8 FUN_038d3570(ulong *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar7 = (char *)param_2[1];
  lVar9 = 0;
  do {
    if (pcVar7[lVar9] == '\0') {
LAB_038d35f8:
      if ((int)lVar9 < 0) {
        pcVar7 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar7[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_038d35f8;
    }
    if (pcVar7[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_038d35f8;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  iVar10 = 1;
  if (*pcVar7 == '+') {
LAB_038d3624:
    uVar12 = 1;
  }
  else {
    if (*pcVar7 == '-') {
      iVar10 = -1;
      goto LAB_038d3624;
    }
    uVar12 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar5 = PTR_DAT_04bb2120;
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == '\0') goto LAB_038d3790;
      if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038d3790;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_038d3790;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_038d3790:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar12 <= (int)lVar9) {
      pbVar1 = (byte *)(lVar8 + uVar12);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) goto LAB_038d3810;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == '\0') goto LAB_038d39d4;
      if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038d39d4;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_038d39d4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_038d39d4:
    pcVar7 = (char *)(lVar8 + uVar12 + 1);
    if ((int)lVar9 <= (int)uVar12) {
      pcVar7 = puVar5;
    }
    if (*pcVar7 == 'b') {
      uVar12 = uVar12 | 2;
      param_3 = 2;
    }
    else if (*pcVar7 == 'x') {
      uVar12 = uVar12 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) {
LAB_038d3810:
    puVar5 = PTR_DAT_04bb2120;
    bVar14 = false;
    uVar13 = 0;
    if (iVar10 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == '\0') goto LAB_038d3954;
          if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_038d3954;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_038d3954;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_038d3954:
        iVar11 = (int)uVar12;
        pbVar1 = puVar5;
        if (iVar11 <= (int)lVar9 && -1 < iVar11) {
          pbVar1 = (byte *)(lVar8 + uVar12);
        }
        uVar6 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar6 < 0) goto LAB_038d3994;
        if (0x1999999999999999 < uVar13) {
          return 0;
        }
        if (uVar13 * 10 < (ulong)uVar6) {
          return 0;
        }
        uVar12 = (ulong)(iVar11 + 1);
        bVar14 = true;
        uVar13 = uVar13 * 10 + (long)(int)(uVar6 * iVar10);
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = param_2[1];
      lVar9 = 0;
      do {
        if (*(char *)(lVar8 + lVar9) == '\0') goto LAB_038d3894;
        if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_038d3894;
        }
        if (*(char *)(lVar8 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_038d3894;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_038d3894:
      iVar11 = (int)uVar12;
      pbVar1 = puVar5;
      if (iVar11 <= (int)lVar9 && -1 < iVar11) {
        pbVar1 = (byte *)(lVar8 + uVar12);
      }
      uVar6 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        uVar6 = 0xffffffff;
      }
      if ((int)uVar6 < 0) goto LAB_038d3994;
      if (0x1999999999999999 < uVar13) {
        return 0;
      }
      if (CARRY8(uVar13 * 10,(ulong)uVar6)) {
        return 0;
      }
      uVar12 = (ulong)(iVar11 + 1);
      bVar14 = true;
      uVar13 = uVar13 * 10 + (long)(int)(uVar6 * iVar10);
    } while( true );
  }
  puVar5 = PTR_DAT_04bb2120;
  bVar14 = false;
  uVar13 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == '\0') goto LAB_038d36b4;
      if (*(char *)(lVar8 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_038d36b4;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_038d36b4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_038d36b4:
    iVar11 = (int)uVar12;
    pbVar1 = puVar5;
    if (iVar11 <= (int)lVar9 && -1 < iVar11) {
      pbVar1 = (byte *)(lVar8 + uVar12);
    }
    uVar6 = tolower((uint)*pbVar1);
    uVar6 = uVar6 & 0xff;
    uVar2 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      uVar2 = 0xffffffff;
    }
    if (uVar6 < 0x3a) {
      uVar2 = uVar6 - 0x30;
    }
    if (((int)uVar2 < 0) || ((int)param_3 <= (int)uVar2)) {
      if (!bVar14) {
        return 0;
      }
      uVar13 = uVar13 * (long)iVar10;
      goto LAB_038d399c;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,param_3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar13;
    if (SUB168(auVar3 * auVar4,8) != 0) {
      return 0;
    }
    uVar13 = uVar13 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar2,uVar13)) {
      return 0;
    }
    uVar13 = uVar13 + uVar2;
    uVar12 = (ulong)(iVar11 + 1);
    bVar14 = true;
  } while( true );
LAB_038d3994:
  if (!bVar14) {
    return 0;
  }
  if (param_1 != (ulong *)0x0) {
LAB_038d399c:
    *param_1 = uVar13;
  }
  return 1;
}

