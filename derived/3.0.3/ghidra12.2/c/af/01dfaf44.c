
void FUN_01dfaf44(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0xfa8);
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
  }
  pvVar4 = *(void **)(param_1 + 0xfb8);
  *(undefined1 *)(param_1 + 0xfb0) = 0;
  *(undefined8 *)(param_1 + 0xfa8) = 0;
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  pvVar4 = *(void **)(param_1 + 0xfc8);
  *(undefined1 *)(param_1 + 0xfc0) = 0;
  *(undefined8 *)(param_1 + 0xfb8) = 0;
  if (pvVar4 != (void *)0x0) {
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xfd0) = 0;
  lVar3 = DAT_0538adc8;
  *(undefined8 *)(param_1 + 0xfc8) = 0;
                    /* WARNING: Could not recover jumptable at 0x01dfb044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar3 + 0x78) + 0x38))
            (*(long **)(lVar3 + 0x78),*(undefined8 *)(param_1 + 0xf90));
  return;
}

