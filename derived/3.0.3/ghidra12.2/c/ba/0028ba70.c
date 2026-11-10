
undefined8 FUN_0028ba70(int *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  bool bVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04bcdcc8;
  pcVar7 = (char *)param_2[1];
  lVar9 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar7[lVar9] == cVar2) {
LAB_0028bc04:
      if ((int)lVar9 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028bc18;
    }
    if (pcVar7[lVar9 + 1] == cVar2) {
      lVar9 = lVar9 + 1;
      goto LAB_0028bc04;
    }
    if (pcVar7[lVar9 + 2] == cVar2) {
      if ((int)lVar9 + 2 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028bc18;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  cVar3 = *pcVar7;
joined_r0x0028bc18:
  if (cVar3 == '+') {
    uVar13 = 1;
joined_r0x0028bc60:
    iVar10 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar13 = 0;
      goto joined_r0x0028bc60;
    }
    iVar10 = -1;
    uVar13 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028bcd4;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028bcd4;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028bcd4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028bcd4:
    pbVar1 = puVar5;
    if ((int)uVar13 <= (int)lVar9) {
      pbVar1 = (byte *)(lVar8 + uVar13);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028bd50:
      bVar15 = false;
      iVar11 = 0;
      if (iVar10 < 0) {
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          lVar9 = 0;
          do {
            if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028beb4;
            if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
              lVar9 = lVar9 + 1;
              goto LAB_0028beb4;
            }
            if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
              lVar9 = lVar9 + 2;
              goto LAB_0028beb4;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0028beb4:
          iVar12 = (int)uVar13;
          pbVar1 = puVar5;
          if (iVar12 <= (int)lVar9 && -1 < iVar12) {
            pbVar1 = (byte *)(lVar8 + uVar13);
          }
          uVar6 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar6 = 0xffffffff;
          }
          if ((int)uVar6 < 0) goto LAB_0028befc;
          if (iVar11 + 0xf3333333U < 0xe6666667) {
            return 0;
          }
          if (iVar11 * 10 < (int)(uVar6 | 0x80000000)) {
            return 0;
          }
          iVar11 = iVar11 * 10 + uVar6 * iVar10;
          uVar13 = (ulong)(iVar12 + 1);
          bVar15 = true;
        } while( true );
      }
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028bde4;
          if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
            lVar9 = lVar9 + 1;
            goto LAB_0028bde4;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
            lVar9 = lVar9 + 2;
            goto LAB_0028bde4;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0028bde4:
        iVar12 = (int)uVar13;
        pbVar1 = puVar5;
        if (iVar12 <= (int)lVar9 && -1 < iVar12) {
          pbVar1 = (byte *)(lVar8 + uVar13);
        }
        uVar6 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar6 = 0xffffffff;
        }
        if ((int)uVar6 < 0) goto LAB_0028befc;
        if (iVar11 + 0xf3333333U < 0xe6666667) {
          return 0;
        }
        if ((int)(uVar6 ^ 0x7fffffff) < iVar11 * 10) {
          return 0;
        }
        iVar11 = iVar11 * 10 + uVar6 * iVar10;
        uVar13 = (ulong)(iVar12 + 1);
        bVar15 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028bf3c;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028bf3c;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028bf3c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028bf3c:
    pcVar7 = (char *)(lVar8 + uVar13 + 1);
    if ((int)lVar9 <= (int)uVar13) {
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
  else if (param_3 == 10) goto LAB_0028bd50;
  bVar15 = false;
  uVar14 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028bb94;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028bb94;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028bb94;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028bb94:
    iVar11 = (int)uVar13;
    pbVar1 = puVar5;
    if (iVar11 <= (int)lVar9 && -1 < iVar11) {
      pbVar1 = (byte *)(lVar8 + uVar13);
    }
    uVar6 = tolower((uint)*pbVar1);
    uVar6 = uVar6 & 0xff;
    uVar4 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      uVar4 = 0xffffffff;
    }
    if (uVar6 < 0x3a) {
      uVar4 = uVar6 - 0x30;
    }
    if (((int)uVar4 < 0) || ((int)param_3 <= (int)uVar4)) {
      if (!bVar15) {
        return 0;
      }
      iVar11 = (int)uVar14 * iVar10;
      goto LAB_0028bf04;
    }
    if ((param_3 * uVar14 & 0xffffffff00000000) != 0) {
      return 0;
    }
    uVar6 = (int)uVar14 * param_3;
    if (CARRY4(uVar4,uVar6)) {
      return 0;
    }
    uVar14 = (ulong)(uVar4 + uVar6);
    uVar13 = (ulong)(iVar11 + 1);
    bVar15 = true;
  } while( true );
LAB_0028befc:
  if (!bVar15) {
    return 0;
  }
  if (param_1 != (int *)0x0) {
LAB_0028bf04:
    *param_1 = iVar11;
  }
  return 1;
}

