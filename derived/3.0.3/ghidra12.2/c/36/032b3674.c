
void FUN_032b3674(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  FUN_032b3780();
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0xa0);
  if (pvVar4 == (void *)0x0) {
LAB_032b36c8:
    plVar3 = *(long **)(param_1 + 0x70);
  }
  else {
    FUN_032ae0c8(pvVar4);
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
      goto LAB_032b36c8;
    }
    free(pvVar4);
    plVar3 = *(long **)(param_1 + 0x70);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
  }
  pvVar4 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_032c1b04(pvVar4);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      plVar3 = *(long **)(param_1 + 0x10);
      goto joined_r0x032b376c;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
    }
  }
  plVar3 = *(long **)(param_1 + 0x10);
joined_r0x032b376c:
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032b3748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}

