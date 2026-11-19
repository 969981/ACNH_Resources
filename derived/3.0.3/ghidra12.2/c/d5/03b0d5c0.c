
void FUN_03b0d5c0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  uint uVar5;
  
  puVar2 = PTR_FUN_04bd0f78;
  __ptr = *(void **)(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      plVar3 = (long *)((long)__ptr + ((long)((ulong)uVar5 << 0x20) >> 0x1c));
      if (*plVar3 != 0) {
        DAT_05ae78a0 = 0;
        DAT_05ae78a8 = (code *)puVar2;
        lVar4 = *plVar3;
        if (*(long *)(lVar4 + 0x18) != 0) {
          FUN_038f4360();
        }
        (*DAT_05ae78a8)(lVar4);
        *plVar3 = 0;
        *(undefined4 *)(plVar3 + 1) = 0;
        DAT_05ae78a0 = 0;
        DAT_05ae78a8 = (code *)0x0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
    __ptr = *(void **)(param_1 + 0x40);
  }
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

