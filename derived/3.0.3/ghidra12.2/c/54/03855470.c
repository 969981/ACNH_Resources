
void FUN_03855470(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *__ptr;
  void *__ptr_00;
  uint uVar6;
  
  __ptr = (void *)param_1[2];
  *param_1 = &PTR_FUN_04b5e840;
  puVar3 = PTR_DAT_04bb2698;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      puVar1 = (undefined4 *)((long)__ptr + ((long)((ulong)uVar6 << 0x20) >> 0x1c));
      __ptr_00 = *(void **)(puVar1 + 2);
      if (__ptr_00 != (void *)0x0) {
        lVar4 = *(long *)puVar3;
        if (lVar4 == 0) {
          free(__ptr_00);
        }
        else {
          plVar5 = (long *)FUN_038cb610(lVar4,__ptr_00);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,__ptr_00);
          }
        }
        *(undefined8 *)(puVar1 + 2) = 0;
        *puVar1 = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    __ptr = (void *)param_1[2];
  }
  if (__ptr != (void *)0x0) {
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  return;
}

