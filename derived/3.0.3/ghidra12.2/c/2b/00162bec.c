
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00162bec(long *param_1,uint param_2,long *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 local_60;
  long local_58;
  undefined4 uStack_38;
  undefined3 uStack_34;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (long *)0x0) {
    return 2;
  }
  uStack_34 = 0;
  uStack_38 = 0;
  *param_3 = 0;
  if (9 < param_2) {
    return 9;
  }
  uVar18 = 0;
  uVar22 = param_4 & 0xff;
  uVar11 = 10;
  uVar21 = 0;
  switch(param_2) {
  case 0:
    puVar23 = (undefined8 *)param_1[3];
    puVar19 = (undefined8 *)param_1[5];
    if ((*param_1 == 0) || (iVar10 = FUN_00144a90(&DAT_040f2037), iVar10 == 0)) {
      if (param_1[4] == 0) {
        return 0xe;
      }
      puVar20 = (undefined1 *)*param_1;
      if (puVar20 == (undefined1 *)0x0) {
        if ((param_4 >> 2 & 1) == 0) {
          return 10;
        }
        puVar20 = &DAT_040f72ef;
      }
      lVar13 = FUN_0014fe60(puVar20);
      if (((param_4 & 1) == 0) || (puVar19 != (undefined8 *)0x0)) {
        if ((puVar19 == (undefined8 *)0x0) || (lVar13 == 0)) {
          if (lVar13 == 0) goto LAB_00162f28;
        }
        else if (*(long *)(lVar13 + 0x78) == param_1[10] && (param_4 & 2) != 0) {
          puVar19 = (undefined8 *)0x0;
        }
LAB_00162f14:
        puVar1 = (undefined8 *)0x0;
        if ((*(byte *)(lVar13 + 0x85) & 4) != 0) {
          puVar1 = puVar23;
        }
        puVar23 = puVar1;
      }
      else {
        if (lVar13 != 0) {
          puVar19 = (undefined8 *)&uStack_38;
          FUN_001460b8(&uStack_38,7,&DAT_040e1d15,*(undefined8 *)(lVar13 + 0x78));
          goto LAB_00162f14;
        }
        puVar19 = (undefined8 *)0x0;
      }
LAB_00162f28:
      puVar8 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)param_1[2];
      puVar14 = &DAT_0407ebb1;
      puVar1 = &DAT_0407ebb1;
      if (puVar8 != (undefined8 *)0x0) {
        puVar1 = puVar8;
      }
      puVar2 = &DAT_0407ebb1;
      if (puVar9 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&DAT_040addd9;
      }
      puVar3 = &DAT_0407ebb1;
      if (puVar9 != (undefined8 *)0x0) {
        puVar3 = puVar9;
      }
      pcVar12 = (char *)param_1[6];
      puVar4 = &DAT_0407ebb1;
      if (puVar23 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&DAT_040995ce;
      }
      puVar5 = &DAT_0407ebb1;
      if (puVar23 != (undefined8 *)0x0) {
        puVar5 = puVar23;
      }
      puVar6 = &DAT_0407ebb1;
      if ((puVar8 != (undefined8 *)0x0 || puVar9 != (undefined8 *)0x0) ||
          puVar23 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&DAT_040a3a35;
      }
      puVar23 = &DAT_0407ebb1;
      if (puVar19 != (undefined8 *)0x0) {
        puVar23 = (undefined8 *)&DAT_040addd9;
      }
      puVar8 = &DAT_0407ebb1;
      if (puVar19 != (undefined8 *)0x0) {
        puVar8 = puVar19;
      }
      pcVar15 = "/";
      if (pcVar12 != (char *)0x0) {
        puVar14 = &DAT_0407ebb1;
        if (*pcVar12 != '/') {
          puVar14 = (undefined8 *)&DAT_04079e84;
        }
        pcVar15 = pcVar12;
      }
      pcVar12 = (char *)param_1[7];
      if (pcVar12 == (char *)0x0) {
        puVar19 = &DAT_0407ebb1;
        pcVar16 = "";
      }
      else {
        puVar19 = &DAT_0407ebb1;
        if (*pcVar12 != '\0') {
          puVar19 = (undefined8 *)&DAT_0406a414;
        }
        pcVar16 = "";
        if (*pcVar12 != '\0') {
          pcVar16 = pcVar12;
        }
      }
      puVar17 = (undefined8 *)param_1[8];
      puVar9 = &DAT_0407ebb1;
      if (puVar17 != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)&DAT_04084559;
      }
      puVar7 = &DAT_0407ebb1;
      if (puVar17 != (undefined8 *)0x0) {
        puVar7 = puVar17;
      }
      lVar13 = FUN_00146120("%s://%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",puVar20,puVar1,puVar2,puVar3,
                            puVar4,puVar5,puVar6,param_1[4],puVar23,puVar8,puVar14,pcVar15,puVar19,
                            pcVar16,puVar9,puVar7);
    }
    else {
      puVar23 = (undefined8 *)param_1[8];
      puVar19 = &DAT_0407ebb1;
      if (puVar23 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)&DAT_04084559;
      }
      puVar1 = &DAT_0407ebb1;
      if (puVar23 != (undefined8 *)0x0) {
        puVar1 = puVar23;
      }
      lVar13 = FUN_00146120("file://%s%s%s",param_1[6],puVar19,puVar1);
    }
    if (lVar13 != 0) {
      *param_3 = lVar13;
      return 0;
    }
    goto LAB_00163030;
  case 2:
    uVar21 = 0;
    param_1 = param_1 + 1;
    uVar18 = uVar22 >> 6 & 1;
    uVar11 = 0xb;
    break;
  case 3:
    uVar21 = 0;
    param_1 = param_1 + 2;
    uVar18 = uVar22 >> 6 & 1;
    uVar11 = 0xc;
    break;
  case 4:
    uVar21 = 0;
    param_1 = param_1 + 3;
    uVar18 = uVar22 >> 6 & 1;
    uVar11 = 0xd;
    break;
  case 5:
    uVar21 = 0;
    param_1 = param_1 + 4;
    uVar18 = uVar22 >> 6 & 1;
    uVar11 = 0xe;
    break;
  case 6:
    puVar19 = (undefined8 *)param_1[5];
    if (((param_4 & 1) == 0) || (puVar19 != (undefined8 *)0x0)) {
      if (puVar19 == (undefined8 *)0x0) {
        return 0xf;
      }
      if ((*param_1 != 0) && (lVar13 = FUN_0014fe60(), lVar13 != 0)) {
        uVar22 = 0;
        if (((param_4 >> 1 & 1) != 0) && (*(long *)(lVar13 + 0x78) == param_1[10])) {
          return 0xf;
        }
        goto LAB_00162e40;
      }
    }
    else {
      if ((*param_1 == 0) || (lVar13 = FUN_0014fe60(), lVar13 == 0)) {
        return 0xf;
      }
      puVar19 = (undefined8 *)&uStack_38;
      FUN_001460b8(&uStack_38,7,&DAT_040e1d15,*(undefined8 *)(lVar13 + 0x78));
    }
    uVar22 = 0;
    goto LAB_00162e40;
  case 7:
    puVar19 = (undefined8 *)param_1[6];
    uVar22 = uVar22 >> 6 & 1;
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)FUN_00143320(&DAT_04079e84);
      param_1[6] = (long)puVar19;
      if (puVar19 == (undefined8 *)0x0) goto LAB_00163030;
    }
LAB_00162e40:
    lVar13 = FUN_00143320(puVar19);
    *param_3 = lVar13;
    if (lVar13 != 0) {
      if (uVar22 != 0) goto LAB_00162e58;
      goto LAB_00162e9c;
    }
    goto LAB_00163030;
  case 8:
    uVar18 = uVar22 >> 6 & 1;
    param_1 = param_1 + 7;
    uVar11 = 0x10;
    uVar21 = uVar18;
    break;
  case 9:
    param_1 = param_1 + 8;
    uVar18 = uVar22 >> 6 & 1;
    uVar11 = 0x11;
    uVar21 = 0;
  }
  if (*param_1 != 0) {
    pcVar12 = (char *)FUN_00143320(*param_1);
    *param_3 = (long)pcVar12;
    if (pcVar12 == (char *)0x0) {
LAB_00163030:
      uVar11 = 7;
    }
    else {
      if (uVar21 != 0) {
        do {
          if (*pcVar12 == '+') {
            *pcVar12 = ' ';
          }
          else if (*pcVar12 == '\0') break;
          pcVar12 = pcVar12 + 1;
        } while( true );
      }
      if (uVar18 != 0) {
        lVar13 = *param_3;
LAB_00162e58:
        local_60 = 0;
        local_58 = 0;
        iVar10 = FUN_00144cf8(0,lVar13,0,&local_58,&local_60,1);
        FUN_00143300(*param_3);
        if (iVar10 != 0) {
          local_58 = 0;
        }
        *param_3 = local_58;
        if (iVar10 != 0) {
          return 6;
        }
      }
LAB_00162e9c:
      uVar11 = 0;
    }
  }
  return uVar11;
}

