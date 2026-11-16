
void FUN_0272e854(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar3 + 0x10);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      *(undefined4 *)((long)pvVar3 + 8) = 0;
    }
    FUN_038e31ec((long)pvVar3 + 0xb0);
    FUN_038e31ec((long)pvVar3 + 0x60);
    FUN_038e1a84((long)pvVar3 + 0x18);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      pvVar3 = (void *)param_1[1];
      goto joined_r0x0272e8f8;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = (void *)param_1[1];
joined_r0x0272e8f8:
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)((long)pvVar3 + 0x10);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
      *(undefined8 *)((long)pvVar3 + 0x10) = 0;
      *(undefined4 *)((long)pvVar3 + 8) = 0;
    }
    FUN_038e31ec((long)pvVar3 + 0xb0);
    FUN_038e31ec((long)pvVar3 + 0x60);
    FUN_038e1a84((long)pvVar3 + 0x18);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0272e994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

