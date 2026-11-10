
undefined8 FUN_0028bf90(short *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
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
LAB_0028c134:
      if ((int)lVar9 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028c148;
    }
    if (pcVar7[lVar9 + 1] == cVar2) {
      lVar9 = lVar9 + 1;
      goto LAB_0028c134;
    }
    if (pcVar7[lVar9 + 2] == cVar2) {
      if ((int)lVar9 + 2 < 0) {
        pcVar7 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar7;
      goto joined_r0x0028c148;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  cVar3 = *pcVar7;
joined_r0x0028c148:
  if (cVar3 == '+') {
    uVar15 = 1;
joined_r0x0028c190:
    iVar13 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar15 = 0;
      goto joined_r0x0028c190;
    }
    iVar13 = -1;
    uVar15 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028c208;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028c208;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028c208;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028c208:
    pbVar1 = puVar5;
    if ((int)uVar15 <= (int)lVar9) {
      pbVar1 = (byte *)(lVar8 + uVar15);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028c28c:
      bVar10 = false;
      uVar12 = 0;
      if (iVar13 < 0) {
        do {
          sVar11 = (short)uVar12;
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar8 = param_2[1];
          lVar9 = 0;
          do {
            if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028c3e4;
            if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
              lVar9 = lVar9 + 1;
              goto LAB_0028c3e4;
            }
            if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
              lVar9 = lVar9 + 2;
              goto LAB_0028c3e4;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0028c3e4:
          iVar14 = (int)uVar15;
          pbVar1 = puVar5;
          if (iVar14 <= (int)lVar9 && -1 < iVar14) {
            pbVar1 = (byte *)(lVar8 + uVar15);
          }
          uVar16 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar16 = 0xffffffff;
          }
          if ((int)uVar16 < 0) goto LAB_0028c42c;
          if (0xccc < (uVar12 >> 1 & 0x7fff)) {
            return 0;
          }
          if ((uVar12 * 10 & 0xfffe) < uVar16) {
            return 0;
          }
          uVar12 = uVar12 * 10 + uVar16 * iVar13;
          uVar15 = (ulong)(iVar14 + 1);
          bVar10 = true;
        } while( true );
      }
      do {
        sVar11 = (short)uVar12;
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028c314;
          if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
            lVar9 = lVar9 + 1;
            goto LAB_0028c314;
          }
          if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
            lVar9 = lVar9 + 2;
            goto LAB_0028c314;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0028c314:
        iVar14 = (int)uVar15;
        pbVar1 = puVar5;
        if (iVar14 <= (int)lVar9 && -1 < iVar14) {
          pbVar1 = (byte *)(lVar8 + uVar15);
        }
        iVar4 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          iVar4 = -1;
        }
        if (iVar4 < 0) goto LAB_0028c42c;
        if (0xccc < (uVar12 >> 1 & 0x7fff)) {
          return 0;
        }
        if (0xffffU - iVar4 < (uVar12 * 10 & 0xfffe)) {
          return 0;
        }
        uVar12 = uVar12 * 10 + iVar4 * iVar13;
        uVar15 = (ulong)(iVar14 + 1);
        bVar10 = true;
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028c470;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028c470;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028c470;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028c470:
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
  else if (param_3 == 10) goto LAB_0028c28c;
  bVar10 = false;
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = 0xffff / param_3;
  }
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    lVar9 = 0;
    do {
      if (*(char *)(lVar8 + lVar9) == cVar2) goto LAB_0028c0c4;
      if (*(char *)(lVar8 + lVar9 + 1) == cVar2) {
        lVar9 = lVar9 + 1;
        goto LAB_0028c0c4;
      }
      if (*(char *)(lVar8 + lVar9 + 2) == cVar2) {
        lVar9 = lVar9 + 2;
        goto LAB_0028c0c4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_0028c0c4:
    iVar14 = (int)uVar15;
    pbVar1 = puVar5;
    if (iVar14 <= (int)lVar9 && -1 < iVar14) {
      pbVar1 = (byte *)(lVar8 + uVar15);
    }
    uVar6 = tolower((uint)*pbVar1);
    uVar6 = uVar6 & 0xff;
    iVar4 = uVar6 - 0x57;
    if (5 < uVar6 - 0x61) {
      iVar4 = -1;
    }
    if (uVar6 < 0x3a) {
      iVar4 = uVar6 - 0x30;
    }
    if ((iVar4 < 0) || ((int)param_3 <= iVar4)) {
      if (!bVar10) {
        return 0;
      }
      sVar11 = (short)uVar16 * (short)iVar13;
      goto LAB_0028c434;
    }
    if (uVar12 < (uVar16 & 0xffff)) {
      return 0;
    }
    if (0xffffU - iVar4 < (uVar16 * param_3 & 0xffff)) {
      return 0;
    }
    uVar16 = uVar16 * param_3 + iVar4;
    uVar15 = (ulong)(iVar14 + 1);
    bVar10 = true;
  } while( true );
LAB_0028c42c:
  if (!bVar10) {
    return 0;
  }
  if (param_1 != (short *)0x0) {
LAB_0028c434:
    *param_1 = sVar11;
  }
  return 1;
}

