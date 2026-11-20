
void FUN_03f44fe0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *__ptr;
  ulong uVar5;
  
  plVar3 = *(long **)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x128);
    if (iVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0x130);
      uVar5 = 0;
      do {
        (**(code **)(**(long **)(lVar4 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) +
                    0x10))();
        uVar1 = uVar5 + 1;
        uVar5 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
    }
  }
  else {
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
    __ptr = *(void **)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x10) = 0;
    iVar2 = *(int *)(param_1 + 0x128);
    if (iVar2 != 0) {
      uVar5 = 0;
      do {
        plVar3 = *(long **)((long)__ptr + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3));
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        *(undefined8 *)((long)__ptr + (long)(int)uVar5 * 8) = 0;
        uVar1 = uVar5 + 1;
        uVar5 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      __ptr = *(void **)(param_1 + 0x130);
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
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  return;
}

