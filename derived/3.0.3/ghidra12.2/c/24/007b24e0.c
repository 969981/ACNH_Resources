
void FUN_007b24e0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  void *__ptr;
  ulong uVar4;
  
  __ptr = *(void **)(param_1 + 0x78);
  if (__ptr != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 != 0) {
      uVar4 = 0;
      do {
        if (*(long *)((long)__ptr + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)) != 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
          *(undefined8 *)((long)__ptr + (long)(int)uVar4 * 8) = 0;
        }
        uVar1 = uVar4 + 1;
        uVar4 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      __ptr = *(void **)(param_1 + 0x78);
      if (__ptr == (void *)0x0) {
        return;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}

