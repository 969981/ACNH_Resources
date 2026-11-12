
void FUN_006e7cd0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)*param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_006e7ff0(pvVar4);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      pvVar4 = (void *)param_1[1];
      goto joined_r0x006e7d6c;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  pvVar4 = (void *)param_1[1];
joined_r0x006e7d6c:
  if (pvVar4 != (void *)0x0) {
    FUN_006e7ff0(pvVar4);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      return;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e7d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      return;
    }
  }
  return;
}

