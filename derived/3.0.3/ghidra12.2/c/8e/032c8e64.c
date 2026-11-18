
void FUN_032c8e64(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bc6338;
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x150) == 1) {
      FUN_003629c4(plVar2,*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x200),0);
      FUN_00361e08(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)puVar1 + 0x68));
      plVar2 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      if (plVar2 == (long *)0x0) goto LAB_032c8ed0;
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    (**(code **)(*plVar2 + 8))();
  }
LAB_032c8ed0:
  plVar2 = *(long **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if ((plVar2 == (long *)0x0) || (DAT_05ae76e0 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032c8efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}

