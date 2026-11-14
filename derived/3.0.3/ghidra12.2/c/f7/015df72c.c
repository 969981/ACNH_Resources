
void FUN_015df72c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x150);
  if (__ptr != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x15c) = 0;
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  FUN_038f4ad0(param_1 + 0x10);
  FUN_038f4ad0(param_1 + 0x48);
  FUN_038e1a84(param_1 + 0x168);
  puVar1 = PTR_DAT_04bb2cd0 + 0x10;
  *(undefined **)(param_1 + 0x48) = puVar1;
  FUN_038f4940(param_1 + 0x48);
  *(undefined **)(param_1 + 0x10) = puVar1;
  FUN_038f4940(param_1 + 0x10);
  return;
}

