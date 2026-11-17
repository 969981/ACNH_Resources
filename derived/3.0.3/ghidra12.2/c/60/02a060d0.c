
void FUN_02a060d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  void *__ptr_00;
  int iVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  __ptr = *(void **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      puVar6 = (undefined8 *)((long)__ptr + (long)iVar5 * 0x18 + 0x10);
      __ptr_00 = (void *)*puVar6;
      if (__ptr_00 != (void *)0x0) {
        lVar3 = *(long *)puVar2;
        if (lVar3 == 0) {
          free(__ptr_00);
        }
        else {
          plVar4 = (long *)FUN_038cb610(lVar3,__ptr_00);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
          }
        }
        *puVar6 = 0;
        *(undefined4 *)((long)__ptr + (long)iVar5 * 0x18 + 8) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
    __ptr = *(void **)(param_1 + 0x18);
  }
  if (__ptr != (void *)0x0) {
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

