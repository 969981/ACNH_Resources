
undefined8 FUN_00464ea0(long param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  iVar2 = (int)param_2[1];
  iVar4 = FUN_00426fc0(param_3);
  iVar3 = iVar2 - param_4;
  if (iVar3 != 0) {
    if (iVar3 == 0 || iVar2 < param_4) {
      if (iVar2 < param_4) {
        plVar6 = (long *)FUN_00426e90(param_3,0x40);
        if (plVar6 == (long *)0x0) {
          return 0x80040200;
        }
        pcVar8 = (code *)*plVar6;
        if (pcVar8 == (code *)0x0) {
          return 0x80040200;
        }
      }
      else {
        pcVar8 = (code *)0x0;
      }
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < param_4) {
        puVar1 = PTR_DAT_048607b8;
        if (*(undefined **)(param_1 + 0x10) != (undefined *)0x0) {
          puVar1 = *(undefined **)(param_1 + 0x10);
        }
        lVar7 = FUN_004267f0(puVar1,param_4,iVar4,*param_2,(int)param_2[1]);
        *param_2 = lVar7;
      }
      *(int *)(param_2 + 1) = param_4;
      if (iVar2 < param_4) {
        (*pcVar8)(*param_2 + (long)(iVar4 * iVar2),param_3,param_4 - iVar2);
      }
    }
    else {
      *(int *)(param_2 + 1) = param_4;
      lVar7 = *param_2;
      puVar5 = (undefined8 *)FUN_00426e90(param_3,0x100);
      if ((puVar5 != (undefined8 *)0x0) && ((code *)*puVar5 != (code *)0x0)) {
        (*(code *)*puVar5)(lVar7 + iVar4 * param_4,param_3,iVar3);
      }
    }
  }
  return 0;
}

