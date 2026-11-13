
void FUN_012dfad0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  void *__ptr;
  ulong uVar4;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531 && (*(uint *)(param_1 + 8) & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  }
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      uVar4 = 0;
      do {
        FUN_012ddd90(*(undefined8 *)
                      ((long)__ptr + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3)));
        uVar1 = uVar4 + 1;
        uVar4 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      __ptr = *(void **)(param_1 + 0x18);
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
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

