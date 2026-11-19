
undefined8 FUN_038d2c30(uint *param_1,long *param_2,uint param_3)

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
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar5 = (char *)param_2[1];
  lVar7 = 0;
  do {
    if (pcVar5[lVar7] == '\0') {
LAB_038d2cb8:
      if ((int)lVar7 < 0) {
        pcVar5 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (pcVar5[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038d2cb8;
    }
    if (pcVar5[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038d2cb8;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  iVar9 = 1;
  if (*pcVar5 == '+') {
LAB_038d2ce4:
    uVar10 = 1;
  }
  else {
    if (*pcVar5 == '-') {
      iVar9 = -1;
      goto LAB_038d2ce4;
    }
    uVar10 = 0;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar3 = PTR_DAT_04bb2120;
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d2e4c;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d2e4c;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d2e4c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d2e4c:
    pbVar1 = PTR_DAT_04bb2120;
    if ((int)uVar10 <= (int)lVar7) {
      pbVar1 = (byte *)(lVar6 + uVar10);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 == 0x30) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d307c;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d307c;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d307c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d307c:
      pcVar5 = (char *)(lVar6 + uVar10 + 1);
      if ((int)lVar7 <= (int)uVar10) {
        pcVar5 = puVar3;
      }
      if (*pcVar5 == 'b') {
        uVar10 = uVar10 | 2;
        param_3 = 2;
      }
      else if (*pcVar5 == 'x') {
        uVar10 = uVar10 | 2;
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
      goto LAB_038d2cf8;
    }
  }
  else if (param_3 != 10) {
LAB_038d2cf8:
    puVar3 = PTR_DAT_04bb2120;
    bVar12 = false;
    uVar11 = 0;
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d2d74;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d2d74;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d2d74;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d2d74:
      iVar8 = (int)uVar10;
      pbVar1 = puVar3;
      if (iVar8 <= (int)lVar7 && -1 < iVar8) {
        pbVar1 = (byte *)(lVar6 + uVar10);
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
        if (!bVar12) {
          return 0;
        }
        uVar4 = (int)uVar11 * iVar9;
        goto LAB_038d3044;
      }
      if ((param_3 * uVar11 & 0xffffffff00000000) != 0) {
        return 0;
      }
      uVar4 = (int)uVar11 * param_3;
      if (CARRY4(uVar2,uVar4)) {
        return 0;
      }
      uVar11 = (ulong)(uVar2 + uVar4);
      uVar10 = (ulong)(iVar8 + 1);
      bVar12 = true;
    } while( true );
  }
  puVar3 = PTR_DAT_04bb2120;
  bVar12 = false;
  if (-1 < iVar9) {
    uVar4 = 0;
    do {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      lVar7 = 0;
      do {
        if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d2f44;
        if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_038d2f44;
        }
        if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_038d2f44;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_038d2f44:
      iVar8 = (int)uVar10;
      pbVar1 = puVar3;
      if (iVar8 <= (int)lVar7 && -1 < iVar8) {
        pbVar1 = (byte *)(lVar6 + uVar10);
      }
      uVar2 = *pbVar1 - 0x30;
      if (0x39 < *pbVar1) {
        uVar2 = 0xffffffff;
      }
      if ((int)uVar2 < 0) goto LAB_038d303c;
      if (0x19999999 < uVar4) {
        return 0;
      }
      if (CARRY4(uVar2,uVar4 * 10)) {
        return 0;
      }
      uVar4 = uVar4 * 10 + uVar2 * iVar9;
      uVar10 = (ulong)(iVar8 + 1);
      bVar12 = true;
    } while( true );
  }
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = param_2[1];
    lVar7 = 0;
    do {
      if (*(char *)(lVar6 + lVar7) == '\0') goto LAB_038d3004;
      if (*(char *)(lVar6 + lVar7 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_038d3004;
      }
      if (*(char *)(lVar6 + lVar7 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_038d3004;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_038d3004:
    iVar9 = (int)uVar10;
    pbVar1 = &DAT_0419b684;
    if (iVar9 <= (int)lVar7 && -1 < iVar9) {
      pbVar1 = (byte *)(lVar6 + uVar10);
    }
    iVar8 = *pbVar1 - 0x30;
    if (0x39 < *pbVar1) {
      iVar8 = -1;
    }
    if (iVar8 < 0) {
      uVar4 = 0;
LAB_038d303c:
      if (!bVar12) {
        return 0;
      }
      if (param_1 != (uint *)0x0) {
LAB_038d3044:
        *param_1 = uVar4;
      }
      return 1;
    }
    uVar10 = (ulong)(iVar9 + 1);
    bVar12 = true;
    if (iVar8 != 0) {
      return 0;
    }
  } while( true );
}

