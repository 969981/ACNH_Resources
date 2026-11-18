
void FUN_032d3e80(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    FUN_0037d044(param_1,param_1[0x1b]);
    uVar4 = param_1[3];
    puVar1 = (undefined8 *)param_1[5];
    while (puVar1 != param_1 + 4) {
      puVar6 = (undefined8 *)puVar1[1];
      FUN_0037d044(param_1,puVar1 + -1);
      FUN_0037cfe0(uVar4,puVar1 + -1);
      puVar1 = puVar6;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_032d3f48;
    lVar5 = param_1[5] + -8;
    lVar3 = *(long *)(param_1[5] + 8);
    uVar4 = param_1[3];
    FUN_0037d044(param_1,lVar5);
    FUN_0037d044(param_1,lVar3 + -8);
    FUN_0037d014(uVar4,param_1,lVar5);
  }
  FUN_0037d044(uVar4,param_1);
LAB_032d3f48:
  (**(code **)*param_1)(param_1);
  plVar2 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,param_1);
                    /* WARNING: Could not recover jumptable at 0x032d3f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

