
undefined8 FUN_038d3a20(long *param_1,long *param_2,uint param_3)

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
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar7 = (char *)param_2[1];
  lVar10 = 0;
  do {
    if (pcVar7[lVar10] == '\0') {
LAB_038d3aa8:
      if ((int)lVar10 < 0) {
        pcVar7 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar7[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_038d3aa8;
    }
    if (pcVar7[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_038d3aa8;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  iVar11 = 1;
  if (*pcVar7 == '+') {
LAB_038d3ad4:
    uVar13 = 1;
  }
  else {
    if (*pcVar7 == '-') {
      iVar11 = -1;
      goto LAB_038d3ad4;
    }
    uVar13 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar5 = PTR_DAT_04bb2120;
    lVar8 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar8 + lVar10) == '\0') goto LAB_038d3c40;
      if (*(char *)(lVar8 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_038d3c40;
      }
      if (*(char *)(lVar8 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_038d3c40;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_038d3c40:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar13 <= (int)lVar10) {
      pbVar1 = (byte *)(lVar8 + uVar13);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) goto LAB_038d3cc0;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar8 + lVar10) == '\0') goto LAB_038d3e9c;
      if (*(char *)(lVar8 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_038d3e9c;
      }
      if (*(char *)(lVar8 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_038d3e9c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_038d3e9c:
    pcVar7 = (char *)(lVar8 + uVar13 + 1);
    if ((int)lVar10 <= (int)uVar13) {
      pcVar7 = puVar5;
    }
    if (*pcVar7 == 'b') {
      uVar13 = uVar13 | 2;
      param_3 = 2;
    }
    else if (*pcVar7 == 'x') {
      uVar13 = uVar13 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) {
LAB_038d3cc0:
    puVar5 = PTR_DAT_04bb2120;
    bVar15 = false;
    lVar10 = 0;
    if (iVar11 < 0) {
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        lVar8 = 0;
        do {
          if (*(char *)(lVar9 + lVar8) == '\0') goto LAB_038d3e14;
          if (*(char *)(lVar9 + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_038d3e14;
          }
          if (*(char *)(lVar9 + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_038d3e14;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_038d3e14:
        iVar12 = (int)uVar13;
        pbVar1 = puVar5;
        if (iVar12 <= (int)lVar8 && -1 < iVar12) {
          pbVar1 = (byte *)(lVar9 + uVar13);
        }
        uVar6 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar6 < 0) goto LAB_038d3e5c;
        if (lVar10 + 0xf333333333333333U < 0xe666666666666667) {
          return 0;
        }
        if (lVar10 * 10 < (long)((ulong)uVar6 | 0x8000000000000000)) {
          return 0;
        }
        uVar13 = (ulong)(iVar12 + 1);
        bVar15 = true;
        lVar10 = lVar10 * 10 + (long)(int)(uVar6 * iVar11);
      } while( true );
    }
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar9 = param_2[1];
      lVar8 = 0;
      do {
        if (*(char *)(lVar9 + lVar8) == '\0') goto LAB_038d3d44;
        if (*(char *)(lVar9 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_038d3d44;
        }
        if (*(char *)(lVar9 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_038d3d44;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_038d3d44:
      iVar12 = (int)uVar13;
      pbVar1 = puVar5;
      if (iVar12 <= (int)lVar8 && -1 < iVar12) {
        pbVar1 = (byte *)(lVar9 + uVar13);
      }
      uVar6 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        uVar6 = 0xffffffff;
      }
      if ((int)uVar6 < 0) goto LAB_038d3e5c;
      if (lVar10 + 0xf333333333333333U < 0xe666666666666667) {
        return 0;
      }
      if ((long)((ulong)uVar6 ^ 0x7fffffffffffffff) < lVar10 * 10) {
        return 0;
      }
      uVar13 = (ulong)(iVar12 + 1);
      bVar15 = true;
      lVar10 = lVar10 * 10 + (long)(int)(uVar6 * iVar11);
    } while( true );
  }
  puVar5 = PTR_DAT_04bb2120;
  bVar15 = false;
  uVar14 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar8 + lVar10) == '\0') goto LAB_038d3b64;
      if (*(char *)(lVar8 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_038d3b64;
      }
      if (*(char *)(lVar8 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_038d3b64;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_038d3b64:
    iVar12 = (int)uVar13;
    pbVar1 = puVar5;
    if (iVar12 <= (int)lVar10 && -1 < iVar12) {
      pbVar1 = (byte *)(lVar8 + uVar13);
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
      if (!bVar15) {
        return 0;
      }
      lVar10 = uVar14 * (long)iVar11;
      goto LAB_038d3e64;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = CONCAT44(0,param_3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    if (SUB168(auVar3 * auVar4,8) != 0) {
      return 0;
    }
    uVar14 = uVar14 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar2,uVar14)) {
      return 0;
    }
    uVar14 = uVar14 + uVar2;
    uVar13 = (ulong)(iVar12 + 1);
    bVar15 = true;
  } while( true );
LAB_038d3e5c:
  if (!bVar15) {
    return 0;
  }
  if (param_1 != (long *)0x0) {
LAB_038d3e64:
    *param_1 = lVar10;
  }
  return 1;
}

