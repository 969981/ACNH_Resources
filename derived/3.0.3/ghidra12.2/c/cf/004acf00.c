
void FUN_004acf00(undefined8 param_1,byte *param_2,int *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  short *psVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if (0 < *param_3) {
    FUN_004acb80(param_1,param_2 + 8,*param_3,param_4,param_5);
  }
  iVar4 = param_3[1];
  if (0 < iVar4) {
    if ((*param_2 >> 1 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00426db0(param_2,2);
      iVar4 = param_3[1];
    }
    FUN_004acb80(param_1,uVar3,iVar4,param_4,param_5);
  }
  if (((((char)param_2[2] < '\0') &&
       (puVar1 = (undefined8 *)FUN_00426db0(param_2,0x800000), puVar1 != (undefined8 *)0x0)) &&
      (psVar5 = (short *)*puVar1, psVar5 != (short *)0x0)) && (0 < *psVar5)) {
    lVar8 = 0;
    do {
      FUN_004acb80(param_1,*(long *)(psVar5 + lVar8 * 4 + 4) + 8,
                   *(undefined4 *)(*(long *)(param_3 + 2) + lVar8 * 4),param_4,param_5);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *psVar5);
  }
  if (param_3[0x28] != 0) {
    lVar8 = FUN_004270a0(param_2);
    iVar4 = param_3[0x28];
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        if (**(char **)(lVar8 + 0x18) == 't') {
          FUN_004acb80(param_1,lVar8 + 0x10,
                       *(undefined4 *)(*(long *)(param_3 + 0x26) + (long)iVar7 * 4),param_4,param_5)
          ;
          iVar4 = param_3[0x28];
          iVar7 = iVar7 + 1;
        }
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < iVar4);
    }
  }
  if ((param_3[0x4c] != 0) && (plVar2 = (long *)FUN_00426db0(param_2,0x4000), 0 < param_3[0x4c])) {
    lVar6 = 0;
    lVar8 = *plVar2 + 8;
    do {
      FUN_004acb80(param_1,lVar8,*(undefined4 *)(*(long *)(param_3 + 0x4a) + lVar6 * 4),param_4,
                   param_5);
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 < param_3[0x4c]);
  }
  return;
}

