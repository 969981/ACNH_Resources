
void FUN_032c92cc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bc6338;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_003629c4(*(long *)(param_1 + 8),*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x200),0);
    FUN_00361e08(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)puVar1 + 0x68));
    plVar2 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  __ptr = *(void **)(param_1 + 0x10);
  if (__ptr != (void *)0x0) {
    FUN_03f2d448(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

