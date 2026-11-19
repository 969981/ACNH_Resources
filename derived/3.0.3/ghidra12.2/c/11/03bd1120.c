
undefined1  [16] FUN_03bd1120(int *param_1,char *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  lVar8 = 0x40;
  piVar6 = param_1;
  do {
    iVar2 = strcmp((char *)(piVar6 + 10),param_2);
    if (iVar2 == 0) {
      iVar2 = piVar6[4];
      goto LAB_03bd11b0;
    }
    piVar6 = piVar6 + 0x644;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = 0;
  piVar5 = param_1;
  do {
    if ((char)piVar5[10] == '\0') {
      piVar5 = piVar5 + 10;
LAB_03bd11e0:
      cVar1 = '\0';
      if (param_3 != -1) {
        cVar1 = param_3;
      }
      lVar7 = *(long *)(DAT_05aec208 + 0x990);
      iVar2 = *(int *)(lVar7 + 400);
      if (iVar2 < 1) goto LAB_03bd12d0;
      piVar6 = param_1 + lVar8 * 0x644;
      strcpy((char *)piVar5,param_2);
      iVar3 = FUN_0033e6b0(lVar7,piVar5,0);
      *piVar6 = iVar3;
      if (iVar3 != -1) {
        param_1[lVar8 * 0x644 + 1] = 0;
        *(char *)(param_1 + lVar8 * 0x644 + 2) = cVar1;
        goto LAB_03bd1248;
      }
      iVar3 = 1;
      goto LAB_03bd1280;
    }
    if ((char)piVar5[0x64e] == '\0') {
      lVar8 = lVar8 + 1;
      piVar5 = piVar5 + 0x64e;
      goto LAB_03bd11e0;
    }
    lVar8 = lVar8 + 2;
    piVar5 = piVar5 + 0xc88;
  } while (lVar8 != 0x40);
LAB_03bd11a4:
  iVar2 = -1;
  piVar6 = (int *)0x0;
  goto LAB_03bd12d8;
  while( true ) {
    strcpy((char *)piVar5,param_2);
    iVar4 = FUN_0033e6b0(lVar7,piVar5,iVar9);
    *piVar6 = iVar4;
    iVar3 = iVar9 + 1;
    if (iVar4 != -1) break;
LAB_03bd1280:
    iVar9 = iVar3;
    if (iVar2 == iVar9) goto LAB_03bd11a4;
  }
  param_1[lVar8 * 0x644 + 1] = iVar9;
  *(char *)(param_1 + lVar8 * 0x644 + 2) = cVar1;
  if (iVar9 < iVar2) {
LAB_03bd1248:
    piVar5 = param_1 + 0x19100;
    iVar2 = *piVar5;
    param_1[lVar8 * 0x644 + 4] = iVar2;
    *piVar5 = iVar2 + 1;
    if (iVar2 < -1) {
      *piVar5 = 0;
    }
LAB_03bd11b0:
    if (piVar6[4] == iVar2) {
      piVar6[3] = piVar6[3] + 1;
    }
  }
  else {
LAB_03bd12d0:
    piVar6 = (int *)0x0;
    iVar2 = -1;
  }
LAB_03bd12d8:
  auVar10._8_4_ = iVar2;
  auVar10._0_8_ = piVar6;
  auVar10._12_4_ = 0;
  return auVar10;
}

