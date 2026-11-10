
undefined8 thunk_FUN_0028c4c0(short *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04bcdcc8;
  pcVar8 = (char *)param_2[1];
  lVar10 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar8[lVar10] == cVar2) {
LAB_0028c664:
      if ((int)lVar10 < 0) {
        pcVar8 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar8;
      goto joined_r0x0028c678;
    }
    if (pcVar8[lVar10 + 1] == cVar2) {
      lVar10 = lVar10 + 1;
      goto LAB_0028c664;
    }
    if (pcVar8[lVar10 + 2] == cVar2) {
      if ((int)lVar10 + 2 < 0) {
        pcVar8 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar8;
      goto joined_r0x0028c678;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  cVar3 = *pcVar8;
joined_r0x0028c678:
  if (cVar3 == '+') {
    uVar16 = 1;
joined_r0x0028c6c0:
    iVar13 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar16 = 0;
      goto joined_r0x0028c6c0;
    }
    iVar13 = -1;
    uVar16 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar2) goto LAB_0028c738;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar2) {
        lVar10 = lVar10 + 1;
        goto LAB_0028c738;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar2) {
        lVar10 = lVar10 + 2;
        goto LAB_0028c738;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0028c738:
    pbVar1 = puVar6;
    if ((int)uVar16 <= (int)lVar10) {
      pbVar1 = (byte *)(lVar9 + uVar16);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028c7bc:
      bVar11 = false;
      iVar14 = 0;
      if (iVar13 < 0) {
        do {
          sVar12 = (short)iVar14;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar9 = param_2[1];
          lVar10 = 0;
          do {
            if (*(char *)(lVar9 + lVar10) == cVar2) goto LAB_0028c914;
            if (*(char *)(lVar9 + lVar10 + 1) == cVar2) {
              lVar10 = lVar10 + 1;
              goto LAB_0028c914;
            }
            if (*(char *)(lVar9 + lVar10 + 2) == cVar2) {
              lVar10 = lVar10 + 2;
              goto LAB_0028c914;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_0028c914:
          iVar15 = (int)uVar16;
          pbVar1 = puVar6;
          if (iVar15 <= (int)lVar10 && -1 < iVar15) {
            pbVar1 = (byte *)(lVar9 + uVar16);
          }
          iVar4 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            iVar4 = -1;
          }
          if (iVar4 < 0) goto LAB_0028c95c;
          if ((iVar14 - 0xccdU & 0xffff) < 0xe667) {
            return 0;
          }
          if ((int)(short)(iVar14 * 10) < iVar4 + -0x8000) {
            return 0;
          }
          iVar14 = iVar14 * 10 + iVar4 * iVar13;
          uVar16 = (ulong)(iVar15 + 1);
          bVar11 = true;
        } while( true );
      }
      do {
        sVar12 = (short)iVar14;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = param_2[1];
        lVar10 = 0;
        do {
          if (*(char *)(lVar9 + lVar10) == cVar2) goto LAB_0028c844;
          if (*(char *)(lVar9 + lVar10 + 1) == cVar2) {
            lVar10 = lVar10 + 1;
            goto LAB_0028c844;
          }
          if (*(char *)(lVar9 + lVar10 + 2) == cVar2) {
            lVar10 = lVar10 + 2;
            goto LAB_0028c844;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_0028c844:
        iVar15 = (int)uVar16;
        pbVar1 = puVar6;
        if (iVar15 <= (int)lVar10 && -1 < iVar15) {
          pbVar1 = (byte *)(lVar9 + uVar16);
        }
        iVar4 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar4 = -1;
        }
        if (iVar4 < 0) goto LAB_0028c95c;
        if ((iVar14 - 0xccdU & 0xffff) < 0xe667) {
          return 0;
        }
        if (0x7fff - iVar4 < (int)(short)(iVar14 * 10)) {
          return 0;
        }
        iVar14 = iVar14 * 10 + iVar4 * iVar13;
        uVar16 = (ulong)(iVar15 + 1);
        bVar11 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar2) goto LAB_0028c9a0;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar2) {
        lVar10 = lVar10 + 1;
        goto LAB_0028c9a0;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar2) {
        lVar10 = lVar10 + 2;
        goto LAB_0028c9a0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0028c9a0:
    pcVar8 = (char *)(lVar9 + uVar16 + 1);
    if ((int)lVar10 <= (int)uVar16) {
      pcVar8 = puVar6;
    }
    if (*pcVar8 == 'b') {
      uVar16 = uVar16 | 2;
      param_3 = 2;
    }
    else if (*pcVar8 == 'x') {
      uVar16 = uVar16 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_0028c7bc;
  bVar11 = false;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = 0xffff / param_3;
  }
  uVar17 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = param_2[1];
    lVar10 = 0;
    do {
      if (*(char *)(lVar9 + lVar10) == cVar2) goto LAB_0028c5f4;
      if (*(char *)(lVar9 + lVar10 + 1) == cVar2) {
        lVar10 = lVar10 + 1;
        goto LAB_0028c5f4;
      }
      if (*(char *)(lVar9 + lVar10 + 2) == cVar2) {
        lVar10 = lVar10 + 2;
        goto LAB_0028c5f4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0028c5f4:
    iVar14 = (int)uVar16;
    pbVar1 = puVar6;
    if (iVar14 <= (int)lVar10 && -1 < iVar14) {
      pbVar1 = (byte *)(lVar9 + uVar16);
    }
    uVar7 = tolower((uint)*pbVar1);
    uVar7 = uVar7 & 0xff;
    iVar15 = uVar7 - 0x57;
    if (5 < uVar7 - 0x61) {
      iVar15 = -1;
    }
    if (uVar7 < 0x3a) {
      iVar15 = uVar7 - 0x30;
    }
    if ((iVar15 < 0) || ((int)param_3 <= iVar15)) {
      if (!bVar11) {
        return 0;
      }
      sVar12 = (short)uVar17 * (short)iVar13;
      goto LAB_0028c964;
    }
    if (uVar5 < (uVar17 & 0xffff)) {
      return 0;
    }
    if (0xffffU - iVar15 < (uVar17 * param_3 & 0xffff)) {
      return 0;
    }
    uVar17 = uVar17 * param_3 + iVar15;
    uVar16 = (ulong)(iVar14 + 1);
    bVar11 = true;
  } while( true );
LAB_0028c95c:
  if (!bVar11) {
    return 0;
  }
  if (param_1 != (short *)0x0) {
LAB_0028c964:
    *param_1 = sVar12;
  }
  return 1;
}

