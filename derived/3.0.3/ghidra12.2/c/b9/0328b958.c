
void FUN_0328b958(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((long *)param_1[0x24] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x24] + 8))();
    }
    if ((long *)param_1[0x1e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x1e] + 8))();
    }
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    if ((long *)param_1[0x12] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x12] + 8))();
    }
    if ((long *)param_1[0xc] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xc] + 8))();
    }
    if ((long *)param_1[6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 8))();
    }
    plVar3 = (long *)*param_1;
    param_1[3] = 0;
    if (plVar3 != (long *)0x0) {
      lVar1 = param_1[1];
      lVar2 = param_1[2];
      param_1[2] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      if ((undefined8 *)*plVar3 == param_1) {
        *plVar3 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(param_1);
      return;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0328ba4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
      return;
    }
  }
  return;
}

