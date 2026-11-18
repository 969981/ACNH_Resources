
void FUN_032b61a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_04b1a480;
  puVar1 = param_1 + 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_032c6840(puVar1);
  plVar4 = (long *)param_1[1];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    param_1[3] = 0;
    *puVar1 = 0;
    param_1[2] = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *puVar1 = 0;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032b6240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

