
void FUN_0343fd20(long param_1)

{
  int iVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = *(void **)(param_1 + 0x68);
  if (__ptr != (void *)0x0) {
    FUN_03f45838((long)__ptr + 0x20);
    plVar2 = *(long **)((long)__ptr + 0x38);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar1 = *(int *)((long)__ptr + 0x2c) + -1;
      if (((*(int *)((long)__ptr + 0x2c) < 1) || (*(int *)((long)__ptr + 0x2c) = iVar1, iVar1 == 0))
         && (*(long *)((long)__ptr + 0x30) != 0)) {
        FUN_03f44508();
        *(undefined8 *)((long)__ptr + 0x30) = 0;
      }
      (**(code **)(*plVar2 + 0x28))(plVar2);
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
  }
  FUN_03ebae78(param_1);
  return;
}

