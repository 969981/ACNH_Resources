
undefined8 thunk_FUN_0028ab10(ulong *param_1,long *param_2,uint param_3)

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
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar7 = PTR_DAT_04bcdcc8;
  pcVar9 = (char *)param_2[1];
  lVar11 = 0;
  cVar2 = *PTR_DAT_04bcdcc8;
  do {
    if (pcVar9[lVar11] == cVar2) {
LAB_0028aca4:
      if ((int)lVar11 < 0) {
        pcVar9 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar9;
      goto joined_r0x0028acb8;
    }
    if (pcVar9[lVar11 + 1] == cVar2) {
      lVar11 = lVar11 + 1;
      goto LAB_0028aca4;
    }
    if (pcVar9[lVar11 + 2] == cVar2) {
      if ((int)lVar11 + 2 < 0) {
        pcVar9 = PTR_DAT_04bcdcc8;
      }
      cVar3 = *pcVar9;
      goto joined_r0x0028acb8;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  cVar3 = *pcVar9;
joined_r0x0028acb8:
  if (cVar3 == '+') {
    uVar14 = 1;
joined_r0x0028ad00:
    iVar12 = 1;
  }
  else {
    if (cVar3 != '-') {
      uVar14 = 0;
      goto joined_r0x0028ad00;
    }
    iVar12 = -1;
    uVar14 = 1;
  }
  if ((int)param_3 < 1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar2) goto LAB_0028ad78;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar2) {
        lVar11 = lVar11 + 1;
        goto LAB_0028ad78;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar2) {
        lVar11 = lVar11 + 2;
        goto LAB_0028ad78;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0028ad78:
    pbVar1 = puVar7;
    if ((int)uVar14 <= (int)lVar11) {
      pbVar1 = (byte *)(lVar10 + uVar14);
    }
    if (9 < *pbVar1 - 0x30) {
      return 0;
    }
    if (*pbVar1 != 0x30) {
LAB_0028adfc:
      bVar16 = false;
      uVar15 = 0;
      if (iVar12 < 0) {
        do {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar10 = param_2[1];
          lVar11 = 0;
          do {
            if (*(char *)(lVar10 + lVar11) == cVar2) goto LAB_0028af54;
            if (*(char *)(lVar10 + lVar11 + 1) == cVar2) {
              lVar11 = lVar11 + 1;
              goto LAB_0028af54;
            }
            if (*(char *)(lVar10 + lVar11 + 2) == cVar2) {
              lVar11 = lVar11 + 2;
              goto LAB_0028af54;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_0028af54:
          iVar13 = (int)uVar14;
          pbVar1 = puVar7;
          if (iVar13 <= (int)lVar11 && -1 < iVar13) {
            pbVar1 = (byte *)(lVar10 + uVar14);
          }
          uVar8 = *pbVar1 - 0x30;
          if (0x39 < *pbVar1) {
            uVar8 = 0xffffffff;
          }
          if ((int)uVar8 < 0) goto LAB_0028af94;
          if (0x1999999999999999 < uVar15) {
            return 0;
          }
          if (uVar15 * 10 < (ulong)uVar8) {
            return 0;
          }
          uVar14 = (ulong)(iVar13 + 1);
          bVar16 = true;
          uVar15 = uVar15 * 10 + (long)(int)(uVar8 * iVar12);
        } while( true );
      }
      do {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar10 = param_2[1];
        lVar11 = 0;
        do {
          if (*(char *)(lVar10 + lVar11) == cVar2) goto LAB_0028ae84;
          if (*(char *)(lVar10 + lVar11 + 1) == cVar2) {
            lVar11 = lVar11 + 1;
            goto LAB_0028ae84;
          }
          if (*(char *)(lVar10 + lVar11 + 2) == cVar2) {
            lVar11 = lVar11 + 2;
            goto LAB_0028ae84;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0028ae84:
        iVar13 = (int)uVar14;
        pbVar1 = puVar7;
        if (iVar13 <= (int)lVar11 && -1 < iVar13) {
          pbVar1 = (byte *)(lVar10 + uVar14);
        }
        uVar8 = *pbVar1 - 0x30;
        if (0x39 < *pbVar1) {
          uVar8 = 0xffffffff;
        }
        if ((int)uVar8 < 0) goto LAB_0028af94;
        if (0x1999999999999999 < uVar15) {
          return 0;
        }
        if (CARRY8(uVar15 * 10,(ulong)uVar8)) {
          return 0;
        }
        uVar14 = (ulong)(iVar13 + 1);
        bVar16 = true;
        uVar15 = uVar15 * 10 + (long)(int)(uVar8 * iVar12);
      } while( true );
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar2) goto LAB_0028afd4;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar2) {
        lVar11 = lVar11 + 1;
        goto LAB_0028afd4;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar2) {
        lVar11 = lVar11 + 2;
        goto LAB_0028afd4;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0028afd4:
    pcVar9 = (char *)(lVar10 + uVar14 + 1);
    if ((int)lVar11 <= (int)uVar14) {
      pcVar9 = puVar7;
    }
    if (*pcVar9 == 'b') {
      uVar14 = uVar14 | 2;
      param_3 = 2;
    }
    else if (*pcVar9 == 'x') {
      uVar14 = uVar14 | 2;
      param_3 = 0x10;
    }
    else {
      param_3 = 8;
    }
  }
  else if (param_3 == 10) goto LAB_0028adfc;
  bVar16 = false;
  uVar15 = 0;
  do {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar10 = param_2[1];
    lVar11 = 0;
    do {
      if (*(char *)(lVar10 + lVar11) == cVar2) goto LAB_0028ac34;
      if (*(char *)(lVar10 + lVar11 + 1) == cVar2) {
        lVar11 = lVar11 + 1;
        goto LAB_0028ac34;
      }
      if (*(char *)(lVar10 + lVar11 + 2) == cVar2) {
        lVar11 = lVar11 + 2;
        goto LAB_0028ac34;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0028ac34:
    iVar13 = (int)uVar14;
    pbVar1 = puVar7;
    if (iVar13 <= (int)lVar11 && -1 < iVar13) {
      pbVar1 = (byte *)(lVar10 + uVar14);
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
      if (!bVar16) {
        return 0;
      }
      uVar15 = uVar15 * (long)iVar12;
      goto LAB_0028af9c;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,param_3);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    if (SUB168(auVar5 * auVar6,8) != 0) {
      return 0;
    }
    uVar15 = uVar15 * CONCAT44(0,param_3);
    if (CARRY8((ulong)uVar4,uVar15)) {
      return 0;
    }
    uVar15 = uVar15 + uVar4;
    uVar14 = (ulong)(iVar13 + 1);
    bVar16 = true;
  } while( true );
LAB_0028af94:
  if (!bVar16) {
    return 0;
  }
  if (param_1 != (ulong *)0x0) {
LAB_0028af9c:
    *param_1 = uVar15;
  }
  return 1;
}

