
undefined8 thunk_FUN_0028cf20(char *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04bcdcc8;
  pcVar7 = (char *)param_2[1];
  lVar9 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar7[lVar9] == cVar2) {
LAB_0028d0c4:
      if ((int)lVar9 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar11 = *pcVar7;
      goto joined_r0x0028d0d8;
    }
    if (pcVar7[lVar9 + 1] == cVar2) {
      lVar9 = lVar9 + 1;
      goto LAB_0028d0c4;
    }
    if (pcVar7[lVar9 + 2] == cVar2) {
      if ((int)lVar9 + 2 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar11 = *pcVar7;
      goto joined_r0x0028d0d8;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  cVar11 = *pcVar7;
joined_r0x0028d0d8:
  if (cVar11 == '+') {
    uVar15 = 1;
joined_r0x0028d120:
    iVar12 = 1;
  }
  else {
    if (cVar11 != '-') {
      uVar15 = 0;
      goto joined_r0x0028d120;
    }
    iVar12 = -1;
    uVar15 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028d198;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028d198;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028d198;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028d198:
    pbVar1 = puVar5;
    if ((int)uVar15 <= (int)lVar9) {
      pbVar1 = (byte *)(lVar8 + uVar15);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028d21c:
      bVar10 = false;
      iVar13 = 0;
      if (iVar12 < 0) {
        do {
          cVar11 = (char)iVar13;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          lVar9 = 0;
          do {
            if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028d374;
            if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
              lVar9 = lVar9 + 1;
              goto LAB_0028d374;
            }
            if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
              lVar9 = lVar9 + 2;
              goto LAB_0028d374;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0028d374:
          iVar14 = (int)uVar15;
          pbVar1 = puVar5;
          if (iVar14 <= (int)lVar9 && -1 < iVar14) {
            pbVar1 = (byte *)(lVar8 + uVar15);
          }
          iVar3 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            iVar3 = -1;
          }
          if (iVar3 < 0) goto LAB_0028d3c0;
          if ((iVar13 - 0xdU & 0xff) < 0xe7) {
            return 0;
          }
          if ((int)(char)(iVar13 * 10) < iVar3 + -0x80) {
            return 0;
          }
          iVar13 = iVar13 * 10 + iVar3 * iVar12;
          uVar15 = (ulong)(iVar14 + 1);
          bVar10 = true;
        } while( true );
      }
      do {
        cVar11 = (char)iVar13;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028d2a4;
          if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
            lVar9 = lVar9 + 1;
            goto LAB_0028d2a4;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
            lVar9 = lVar9 + 2;
            goto LAB_0028d2a4;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0028d2a4:
        iVar14 = (int)uVar15;
        pbVar1 = puVar5;
        if (iVar14 <= (int)lVar9 && -1 < iVar14) {
          pbVar1 = (byte *)(lVar8 + uVar15);
        }
        iVar3 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar3 = -1;
        }
        if (iVar3 < 0) goto LAB_0028d3c0;
        if ((iVar13 - 0xdU & 0xff) < 0xe7) {
          return 0;
        }
        if (0x7f - iVar3 < (int)(char)(iVar13 * 10)) {
          return 0;
        }
        iVar13 = iVar13 * 10 + iVar3 * iVar12;
        uVar15 = (ulong)(iVar14 + 1);
        bVar10 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028d404;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028d404;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028d404;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028d404:
    pcVar7 = (char *)(lVar8 + uVar15 + 1);
    if ((int)lVar9 <= (int)uVar15) {
      pcVar7 = puVar5;
    }
    if (*pcVar7 == 'b') {
      uVar15 = uVar15 | 2;
      param_3 = 2;
    }
    else if (*pcVar7 == 'x') {
      uVar15 = uVar15 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_0028d21c;
  bVar10 = false;
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 0xff / param_3;
  }
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028d054;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028d054;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028d054;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028d054:
    iVar13 = (int)uVar15;
    pbVar1 = puVar5;
    if (iVar13 <= (int)lVar9 && -1 < iVar13) {
      pbVar1 = (byte *)(lVar8 + uVar15);
    }
    uVar6 = tolower((uint)*pbVar1);
    uVar6 = uVar6 & 0xff;
    iVar14 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      iVar14 = -1;
    }
    if (uVar6 < 0x3a) {
      iVar14 = uVar6 - 0x30;
    }
    if ((iVar14 < 0) || ((int)param_3 <= iVar14)) {
      if (!bVar10) {
        return 0;
      }
      cVar11 = (char)uVar16 * (char)iVar12;
      goto LAB_0028d3c8;
    }
    if (uVar4 < (uVar16 & 0xff)) {
      return 0;
    }
    if (0xffU - iVar14 < (uVar16 * param_3 & 0xff)) {
      return 0;
    }
    uVar16 = uVar16 * param_3 + iVar14;
    uVar15 = (ulong)(iVar13 + 1);
    bVar10 = true;
  } while( true );
LAB_0028d3c0:
  if (!bVar10) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
LAB_0028d3c8:
    *param_1 = cVar11;
  }
  return 1;
}

