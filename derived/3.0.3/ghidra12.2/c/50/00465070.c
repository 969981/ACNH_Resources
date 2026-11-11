
undefined8
FUN_00465070(long param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
            undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  
  if (param_4 < 0) {
    param_4 = (int)param_2[1];
  }
  iVar5 = (int)param_2[1];
  iVar6 = *(int *)(param_6 + 2);
  iVar3 = iVar5;
  if (-1 < param_5) {
    iVar3 = param_5;
  }
  if (iVar6 != 0 || iVar3 != 0) {
    iVar7 = FUN_00426fc0(param_3);
    if (iVar6 < 1) {
      pcVar11 = (code *)0x0;
    }
    else {
      plVar8 = (long *)FUN_00426e90(param_3,0x80);
      if (plVar8 == (long *)0x0) {
        return 0x80040200;
      }
      pcVar11 = (code *)*plVar8;
      if (pcVar11 == (code *)0x0) {
        return 0x80040200;
      }
    }
    iVar2 = (iVar6 - iVar3) + iVar5;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar2) {
      puVar4 = PTR_DAT_048607b8;
      if (*(undefined **)(param_1 + 0x10) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_1 + 0x10);
      }
      lVar9 = FUN_004267f0(puVar4,iVar2,iVar7,*param_2,(int)param_2[1]);
      *param_2 = lVar9;
    }
    else {
      lVar9 = *param_2;
    }
    *(int *)(param_2 + 1) = iVar2;
    lVar1 = lVar9 + iVar7 * param_4;
    if (((0 < iVar3) &&
        (puVar10 = (undefined8 *)FUN_00426e90(param_3,0x100), puVar10 != (undefined8 *)0x0)) &&
       ((code *)*puVar10 != (code *)0x0)) {
      (*(code *)*puVar10)(lVar1,param_3,iVar3);
    }
    FUN_0043aa30(lVar9 + iVar7 * (iVar6 + param_4),lVar9 + iVar7 * (iVar3 + param_4),
                 (long)(iVar7 * (iVar5 - (iVar3 + param_4))));
    if (0 < iVar6) {
      (*pcVar11)(lVar1,*param_6,param_3,iVar6);
    }
  }
  return 0;
}

