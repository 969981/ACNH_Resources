
undefined8 FUN_0028b570(uint *param_1,long *param_2,uint param_3)

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
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = PTR_DAT_04bcdcc8;
  pcVar7 = (char *)param_2[1];
  lVar9 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar7[lVar9] == cVar2) {
LAB_0028b704:
      if ((int)lVar9 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028b718;
    }
    if (pcVar7[lVar9 + 1] == cVar2) {
      lVar9 = lVar9 + 1;
      goto LAB_0028b704;
    }
    if (pcVar7[lVar9 + 2] == cVar2) {
      if ((int)lVar9 + 2 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028b718;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  cVar3 = *pcVar7;
joined_r0x0028b718:
  if (cVar3 == '+') {
    uVar12 = 1;
joined_r0x0028b760:
    iVar10 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar12 = 0;
      goto joined_r0x0028b760;
    }
    iVar10 = -1;
    uVar12 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028b7d4;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028b7d4;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028b7d4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028b7d4:
    pbVar1 = puVar5;
    if ((int)uVar12 <= (int)lVar9) {
      pbVar1 = (byte *)(lVar8 + uVar12);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028b850:
      bVar14 = false;
      uVar6 = 0;
      if (iVar10 < 0) {
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          lVar9 = 0;
          do {
            if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028b994;
            if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
              lVar9 = lVar9 + 1;
              goto LAB_0028b994;
            }
            if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
              lVar9 = lVar9 + 2;
              goto LAB_0028b994;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0028b994:
          iVar11 = (int)uVar12;
          pbVar1 = puVar5;
          if (iVar11 <= (int)lVar9 && -1 < iVar11) {
            pbVar1 = (byte *)(lVar8 + uVar12);
          }
          uVar4 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar4 = 0xffffffff;
          }
          if ((int)uVar4 < 0) goto LAB_0028b9d4;
          if (0x19999999 < uVar6) {
            return 0;
          }
          if (uVar6 * 10 < uVar4) {
            return 0;
          }
          uVar6 = uVar6 * 10 + uVar4 * iVar10;
          uVar12 = (ulong)(iVar11 + 1);
          bVar14 = true;
        } while( true );
      }
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028b8d4;
          if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
            lVar9 = lVar9 + 1;
            goto LAB_0028b8d4;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
            lVar9 = lVar9 + 2;
            goto LAB_0028b8d4;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0028b8d4:
        iVar11 = (int)uVar12;
        pbVar1 = puVar5;
        if (iVar11 <= (int)lVar9 && -1 < iVar11) {
          pbVar1 = (byte *)(lVar8 + uVar12);
        }
        uVar4 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar4 = 0xffffffff;
        }
        if ((int)uVar4 < 0) goto LAB_0028b9d4;
        if (0x19999999 < uVar6) {
          return 0;
        }
        if (CARRY4(uVar4,uVar6 * 10)) {
          return 0;
        }
        uVar6 = uVar6 * 10 + uVar4 * iVar10;
        uVar12 = (ulong)(iVar11 + 1);
        bVar14 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028ba14;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028ba14;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028ba14;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028ba14:
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
  else if (param_3 == 10) goto LAB_0028b850;
  bVar14 = false;
  uVar13 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028b694;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028b694;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028b694;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028b694:
    iVar11 = (int)uVar12;
    pbVar1 = puVar5;
    if (iVar11 <= (int)lVar9 && -1 < iVar11) {
      pbVar1 = (byte *)(lVar8 + uVar12);
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
      if (!bVar14) {
        return 0;
      }
      uVar6 = (int)uVar13 * iVar10;
      goto LAB_0028b9dc;
    }
    if ((param_3 * uVar13 & 0xffffffff00000000) != 0) {
      return 0;
    }
    uVar6 = (int)uVar13 * param_3;
    if (CARRY4(uVar4,uVar6)) {
      return 0;
    }
    uVar13 = (ulong)(uVar4 + uVar6);
    uVar12 = (ulong)(iVar11 + 1);
    bVar14 = true;
  } while( true );
LAB_0028b9d4:
  if (!bVar14) {
    return 0;
  }
  if (param_1 != (uint *)0x0) {
LAB_0028b9dc:
    *param_1 = uVar6;
  }
  return 1;
}

