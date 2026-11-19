
void FUN_038a42b4(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04b62488;
  (**(code **)(*(long *)param_1[1] + 0xd8))((long *)param_1[1],param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x28))();
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    uVar1 = *(int *)((long)param_1 + 0x34) + *(int *)((long)param_1 + 0x4c);
    if (*(uint *)(lVar3 + 8) <= uVar1) {
      uVar1 = *(uint *)(lVar3 + 8);
    }
    *(uint *)(lVar3 + 0xc) = uVar1;
  }
  *param_1 = &PTR_LAB_04b65048;
  (**(code **)(*(long *)param_1[1] + 0xd8))((long *)param_1[1],param_1[2]);
  (**(code **)(*(long *)param_1[2] + 0x28))();
  param_1[2] = 0;
  *param_1 = &PTR_LAB_04b1c1a0;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038a438c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

