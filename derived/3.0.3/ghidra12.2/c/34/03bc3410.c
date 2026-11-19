
void FUN_03bc3410(long param_1)

{
  int iVar1;
  long *plVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  
  __ptr = *(void **)(param_1 + 0x10);
  if (__ptr != (void *)0x0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      uVar3 = 0;
      do {
        uVar4 = -(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
        FUN_03bc1c10(*(undefined8 *)((long)__ptr + uVar4));
        (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                  (*(long **)(param_1 + 0x28),*(undefined8 *)((long)__ptr + uVar4));
        uVar4 = uVar3 + 1;
        uVar3 = uVar4 & 0xffffffff;
      } while (iVar1 != (int)uVar4);
      __ptr = *(void **)(param_1 + 0x10);
      if (__ptr == (void *)0x0) {
        return;
      }
    }
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
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

