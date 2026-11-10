
undefined8 thunk_FUN_0028c9f0(char *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bcdcc8;
  pcVar6 = (char *)param_2[1];
  lVar8 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar6[lVar8] == cVar2) {
LAB_0028cb94:
      if ((int)lVar8 < 0) {
        pcVar6 = PTR_DAT_04bcdcc8;
      }
      cVar10 = *pcVar6;
      goto joined_r0x0028cba8;
    }
    if (pcVar6[lVar8 + 1] == cVar2) {
      lVar8 = lVar8 + 1;
      goto LAB_0028cb94;
    }
    if (pcVar6[lVar8 + 2] == cVar2) {
      if ((int)lVar8 + 2 < 0) {
        pcVar6 = PTR_DAT_04bcdcc8;
      }
      cVar10 = *pcVar6;
      goto joined_r0x0028cba8;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  cVar10 = *pcVar6;
joined_r0x0028cba8:
  if (cVar10 == '+') {
    uVar14 = 1;
joined_r0x0028cbf0:
    iVar12 = 1;
  }
  else {
    if (cVar10 != '-') {
      uVar14 = 0;
      goto joined_r0x0028cbf0;
    }
    iVar12 = -1;
    uVar14 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == cVar2) goto LAB_0028cc68;
      if (*(char *)(lVar7 + lVar8 + 1) == cVar2) {
        lVar8 = lVar8 + 1;
        goto LAB_0028cc68;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == cVar2) {
        lVar8 = lVar8 + 2;
        goto LAB_0028cc68;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0028cc68:
    pbVar1 = puVar4;
    if ((int)uVar14 <= (int)lVar8) {
      pbVar1 = (byte *)(lVar7 + uVar14);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028ccec:
      bVar9 = false;
      uVar11 = 0;
      if (iVar12 < 0) {
        do {
          cVar10 = (char)uVar11;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar7 = param_2[1];
          lVar8 = 0;
          do {
            if (*(char *)(lVar7 + lVar8) == cVar2) goto LAB_0028ce44;
            if (*(char *)(lVar7 + lVar8 + 1) == cVar2) {
              lVar8 = lVar8 + 1;
              goto LAB_0028ce44;
            }
            if (*(char *)(lVar7 + lVar8 + 2) == cVar2) {
              lVar8 = lVar8 + 2;
              goto LAB_0028ce44;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_0028ce44:
          iVar13 = (int)uVar14;
          pbVar1 = puVar4;
          if (iVar13 <= (int)lVar8 && -1 < iVar13) {
            pbVar1 = (byte *)(lVar7 + uVar14);
          }
          uVar15 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar15 = 0xffffffff;
          }
          if ((int)uVar15 < 0) goto LAB_0028ce8c;
          if (0x19 < (uVar11 & 0xff)) {
            return 0;
          }
          if ((uVar11 * 10 & 0xfe) < uVar15) {
            return 0;
          }
          uVar11 = uVar11 * 10 + uVar15 * iVar12;
          uVar14 = (ulong)(iVar13 + 1);
          bVar9 = true;
        } while( true );
      }
      do {
        cVar10 = (char)uVar11;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        lVar8 = 0;
        do {
          if (*(char *)(lVar7 + lVar8) == cVar2) goto LAB_0028cd74;
          if (*(char *)(lVar7 + lVar8 + 1) == cVar2) {
            lVar8 = lVar8 + 1;
            goto LAB_0028cd74;
          }
          if (*(char *)(lVar7 + lVar8 + 2) == cVar2) {
            lVar8 = lVar8 + 2;
            goto LAB_0028cd74;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0028cd74:
        iVar13 = (int)uVar14;
        pbVar1 = puVar4;
        if (iVar13 <= (int)lVar8 && -1 < iVar13) {
          pbVar1 = (byte *)(lVar7 + uVar14);
        }
        iVar3 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar3 = -1;
        }
        if (iVar3 < 0) goto LAB_0028ce8c;
        if (0x19 < (uVar11 & 0xff)) {
          return 0;
        }
        if (0xffU - iVar3 < (uVar11 * 10 & 0xfe)) {
          return 0;
        }
        uVar11 = uVar11 * 10 + iVar3 * iVar12;
        uVar14 = (ulong)(iVar13 + 1);
        bVar9 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == cVar2) goto LAB_0028ced0;
      if (*(char *)(lVar7 + lVar8 + 1) == cVar2) {
        lVar8 = lVar8 + 1;
        goto LAB_0028ced0;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == cVar2) {
        lVar8 = lVar8 + 2;
        goto LAB_0028ced0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0028ced0:
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
  else if (param_3 == 10) goto LAB_0028ccec;
  bVar9 = false;
  uVar11 = 0;
  if (param_3 != 0) {
    uVar11 = 0xff / param_3;
  }
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = param_2[1];
    lVar8 = 0;
    do {
      if (*(char *)(lVar7 + lVar8) == cVar2) goto LAB_0028cb24;
      if (*(char *)(lVar7 + lVar8 + 1) == cVar2) {
        lVar8 = lVar8 + 1;
        goto LAB_0028cb24;
      }
      if (*(char *)(lVar7 + lVar8 + 2) == cVar2) {
        lVar8 = lVar8 + 2;
        goto LAB_0028cb24;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0028cb24:
    iVar13 = (int)uVar14;
    pbVar1 = puVar4;
    if (iVar13 <= (int)lVar8 && -1 < iVar13) {
      pbVar1 = (byte *)(lVar7 + uVar14);
    }
    uVar5 = tolower((uint)*pbVar1);
    uVar5 = uVar5 & 0xff;
    iVar3 = uVar5 - 0x57;
    if (5 < uVar5 - 0x61) {
      iVar3 = -1;
    }
    if (uVar5 < 0x3a) {
      iVar3 = uVar5 - 0x30;
    }
    if ((iVar3 < 0) || ((int)param_3 <= iVar3)) {
      if (!bVar9) {
        return 0;
      }
      cVar10 = (char)uVar15 * (char)iVar12;
      goto LAB_0028ce94;
    }
    if (uVar11 < (uVar15 & 0xff)) {
      return 0;
    }
    if (0xffU - iVar3 < (uVar15 * param_3 & 0xff)) {
      return 0;
    }
    uVar15 = uVar15 * param_3 + iVar3;
    uVar14 = (ulong)(iVar13 + 1);
    bVar9 = true;
  } while( true );
LAB_0028ce8c:
  if (!bVar9) {
    return 0;
  }
  if (param_1 != (char *)0x0) {
LAB_0028ce94:
    *param_1 = cVar10;
  }
  return 1;
}

