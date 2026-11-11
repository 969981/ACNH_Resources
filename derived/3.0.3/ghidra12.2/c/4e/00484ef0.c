
void FUN_00484ef0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_04859580;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  iVar3 = *(int *)(param_2 + 0x20);
  plVar6 = *(long **)(param_2 + 0x18);
  if (iVar3 < 1) {
    if (iVar3 == 0) goto LAB_00484fa0;
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)FUN_00426720(PTR_DAT_048607b8,iVar3,0x10,0,0,(long)param_1 + 0x24);
    param_1[3] = plVar4;
  }
  plVar2 = plVar6 + (long)iVar3 * 2;
  do {
    lVar5 = *plVar6;
    *plVar4 = lVar5;
    if (lVar5 != 0) {
      FUN_004435a0();
    }
    plVar1 = plVar6 + 1;
    plVar6 = plVar6 + 2;
    *(int *)(plVar4 + 1) = (int)*plVar1;
    plVar4 = plVar4 + 2;
  } while (plVar6 != plVar2);
LAB_00484fa0:
  *(int *)(param_1 + 4) = iVar3;
  return;
}

