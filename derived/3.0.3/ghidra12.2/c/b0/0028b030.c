
undefined8 FUN_0028b030(long *param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = PTR_DAT_04bcdcc8;
  pcVar9 = (char *)param_2[1];
  lVar12 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar9[lVar12] == cVar2) {
LAB_0028b1c4:
      if ((int)lVar12 < 0) {
        pcVar9 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar9;
      goto joined_r0x0028b1d8;
    }
    if (pcVar9[lVar12 + 1] == cVar2) {
      lVar12 = lVar12 + 1;
      goto LAB_0028b1c4;
    }
    if (pcVar9[lVar12 + 2] == cVar2) {
      if ((int)lVar12 + 2 < 0) {
        pcVar9 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar9;
      goto joined_r0x0028b1d8;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  cVar3 = *pcVar9;
joined_r0x0028b1d8:
  if (cVar3 == '+') {
    uVar15 = 1;
joined_r0x0028b220:
    iVar13 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar15 = 0;
      goto joined_r0x0028b220;
    }
    iVar13 = -1;
    uVar15 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar10 + lVar12) == cVar2) goto LAB_0028b298;
      if (*(char *)(lVar10 + lVar12 + 1) == cVar2) {
        lVar12 = lVar12 + 1;
        goto LAB_0028b298;
      }
      if (*(char *)(lVar10 + lVar12 + 2) == cVar2) {
        lVar12 = lVar12 + 2;
        goto LAB_0028b298;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0028b298:
    pbVar1 = puVar7;
    if ((int)uVar15 <= (int)lVar12) {
      pbVar1 = (byte *)(lVar10 + uVar15);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028b31c:
      bVar17 = false;
      lVar12 = 0;
      if (iVar13 < 0) {
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar11 = param_2[1];
          lVar10 = 0;
          do {
            if (*(char *)(lVar11 + lVar10) == cVar2) goto LAB_0028b494;
            if (*(char *)(lVar11 + lVar10 + 1) == cVar2) {
              lVar10 = lVar10 + 1;
              goto LAB_0028b494;
            }
            if (*(char *)(lVar11 + lVar10 + 2) == cVar2) {
              lVar10 = lVar10 + 2;
              goto LAB_0028b494;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_0028b494:
          iVar14 = (int)uVar15;
          pbVar1 = puVar7;
          if (iVar14 <= (int)lVar10 && -1 < iVar14) {
            pbVar1 = (byte *)(lVar11 + uVar15);
          }
          uVar8 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar8 = 0xffffffff;
          }
          if ((int)uVar8 < 0) goto LAB_0028b4dc;
          if (lVar12 + 0xf333333333333333U < 0xe666666666666667) {
            return 0;
          }
          if (lVar12 * 10 < (long)((ulong)uVar8 | 0x8000000000000000)) {
            return 0;
          }
          uVar15 = (ulong)(iVar14 + 1);
          bVar17 = true;
          lVar12 = lVar12 * 10 + (long)(int)(uVar8 * iVar13);
        } while( true );
      }
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = param_2[1];
        lVar10 = 0;
        do {
          if (*(char *)(lVar11 + lVar10) == cVar2) goto LAB_0028b3b4;
          if (*(char *)(lVar11 + lVar10 + 1) == cVar2) {
            lVar10 = lVar10 + 1;
            goto LAB_0028b3b4;
          }
          if (*(char *)(lVar11 + lVar10 + 2) == cVar2) {
            lVar10 = lVar10 + 2;
            goto LAB_0028b3b4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_0028b3b4:
        iVar14 = (int)uVar15;
        pbVar1 = puVar7;
        if (iVar14 <= (int)lVar10 && -1 < iVar14) {
          pbVar1 = (byte *)(lVar11 + uVar15);
        }
        uVar8 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar8 = 0xffffffff;
        }
        if ((int)uVar8 < 0) goto LAB_0028b4dc;
        if (lVar12 + 0xf333333333333333U < 0xe666666666666667) {
          return 0;
        }
        if ((long)((ulong)uVar8 ^ 0x7fffffffffffffff) < lVar12 * 10) {
          return 0;
        }
        uVar15 = (ulong)(iVar14 + 1);
        bVar17 = true;
        lVar12 = lVar12 * 10 + (long)(int)(uVar8 * iVar13);
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar10 + lVar12) == cVar2) goto LAB_0028b51c;
      if (*(char *)(lVar10 + lVar12 + 1) == cVar2) {
        lVar12 = lVar12 + 1;
        goto LAB_0028b51c;
      }
      if (*(char *)(lVar10 + lVar12 + 2) == cVar2) {
        lVar12 = lVar12 + 2;
        goto LAB_0028b51c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0028b51c:
    pcVar9 = (char *)(lVar10 + uVar15 + 1);
    if ((int)lVar12 <= (int)uVar15) {
      pcVar9 = puVar7;
    }
    if (*pcVar9 == 'b') {
      uVar15 = uVar15 | 2;
      param_3 = 2;
    }
    else if (*pcVar9 == 'x') {
      uVar15 = uVar15 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_0028b31c;
  bVar17 = false;
  uVar16 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar12 = 0;
    do {
      if (*(char *)(lVar10 + lVar12) == cVar2) goto LAB_0028b154;
      if (*(char *)(lVar10 + lVar12 + 1) == cVar2) {
        lVar12 = lVar12 + 1;
        goto LAB_0028b154;
      }
      if (*(char *)(lVar10 + lVar12 + 2) == cVar2) {
        lVar12 = lVar12 + 2;
        goto LAB_0028b154;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_0028b154:
    iVar14 = (int)uVar15;
    pbVar1 = puVar7;
    if (iVar14 <= (int)lVar12 && -1 < iVar14) {
      pbVar1 = (byte *)(lVar10 + uVar15);
    }
    uVar8 = tolower((uint)*pbVar1);
    uVar8 = uVar8 & 0xff;
    uVar4 = uVar8 - 0x57;
    if (5 < uVar8 - 0x61) {
      uVar4 = 0xffffffff;
    }
    if (uVar8 < 0x3a) {
      uVar4 = uVar8 - 0x30;
    }
    if (((int)uVar4 < 0) || ((int)param_3 <= (int)uVar4)) {
      if (!bVar17) {
        return 0;
      }
      lVar12 = uVar16 * (long)iVar13;
      goto LAB_0028b4e4;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,param_3);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar16;
    if (SUB168(auVar5 * auVar6,8) != 0) {
      return 0;
    }
    uVar16 = uVar16 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar4,uVar16)) {
      return 0;
    }
    uVar16 = uVar16 + uVar4;
    uVar15 = (ulong)(iVar14 + 1);
    bVar17 = true;
  } while( true );
LAB_0028b4dc:
  if (!bVar17) {
    return 0;
  }
  if (param_1 != (long *)0x0) {
LAB_0028b4e4:
    *param_1 = lVar12;
  }
  return 1;
}

