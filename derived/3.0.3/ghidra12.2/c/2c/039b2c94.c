
void FUN_039b2c94(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = *(void **)(param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
      pvVar3 = *(void **)(param_1 + 0x118);
      goto joined_r0x039b2d20;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x118);
joined_r0x039b2d20:
  if (pvVar3 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      return;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x039b2d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      return;
    }
  }
  return;
}

