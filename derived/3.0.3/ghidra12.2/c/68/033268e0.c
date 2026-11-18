
void FUN_033268e0(long param_1)

{
  long *plVar1;
  void *__ptr;
  long *plVar2;
  
  FUN_032c6840(param_1 + 0x398);
  FUN_032d1384(*(undefined8 *)(param_1 + 0x390));
  __ptr = *(void **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  plVar1 = *(long **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03326998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

