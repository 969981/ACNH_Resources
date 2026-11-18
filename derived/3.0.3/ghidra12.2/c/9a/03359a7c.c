
void FUN_03359a7c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_032c6840(puVar1);
  plVar4 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar4 != (long *)0x0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((undefined8 *)*plVar4 == puVar1) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = lVar2;
    }
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar3;
    }
  }
  __ptr = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *puVar1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03359b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      return;
    }
  }
  return;
}

