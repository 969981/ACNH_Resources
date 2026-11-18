
void FUN_03281ac0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_03292080(param_1);
  puVar3 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[4];
  if (pvVar5 != (void *)0x0) {
    FUN_032ae0c8(pvVar5);
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
      pvVar5 = (void *)param_1[3];
      goto joined_r0x03281b20;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
    }
  }
  pvVar5 = (void *)param_1[3];
joined_r0x03281b20:
  if (pvVar5 != (void *)0x0) {
    FUN_032903a0(pvVar5);
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    lVar1 = param_1[1];
    lVar2 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((undefined8 *)*plVar4 == param_1) {
      *plVar4 = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 8) = lVar1;
    }
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar2;
    }
  }
  if (*(long *)puVar3 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(*(long *)puVar3,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03281bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

