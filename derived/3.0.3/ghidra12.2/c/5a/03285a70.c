
void FUN_03285a70(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[2];
  *param_1 = &PTR_FUN_04b177f0;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    *(undefined8 *)((long)pvVar4 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar4 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar4 + 0x1c0) = 0;
    if (*(long **)((long)pvVar4 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 400) + 8))();
    }
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      pvVar4 = (void *)param_1[1];
      goto joined_r0x03285b40;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  pvVar4 = (void *)param_1[1];
joined_r0x03285b40:
  if (pvVar4 != (void *)0x0) {
    *(undefined8 *)((long)pvVar4 + 0x1d0) = 0;
    *(undefined8 *)((long)pvVar4 + 0x1b8) = 0;
    *(undefined8 *)((long)pvVar4 + 0x1c0) = 0;
    if (*(long **)((long)pvVar4 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 400) + 8))();
    }
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      return;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03285b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      return;
    }
  }
  return;
}

