
void FUN_032ad2c0(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  void *__ptr;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  __ptr = (void *)param_1[2];
  if (__ptr != (void *)0x0) {
    local_40 = &LAB_032ad714;
    uStack_38 = 0;
    local_50 = &PTR_LAB_04b19ee0;
    plStack_48 = param_1;
    if (*param_1 != 0) {
      FUN_032ad720(*param_1,&local_50);
      __ptr = (void *)param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[1] = (long)__ptr;
    *param_1 = 0;
    if (1 < *(int *)((long)param_1 + 0x1c)) {
      uVar1 = *(int *)((long)param_1 + 0x1c) - 1;
      if (uVar1 == 1) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        plVar2 = (long *)((long)__ptr + 0x30);
        do {
          uVar3 = uVar3 + 2;
          plVar2[-6] = (long)plVar2;
          *plVar2 = (long)(plVar2 + 6);
          plVar2 = plVar2 + 0xc;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
      }
      if ((uVar1 & 1) != 0) {
        plVar2 = (long *)((long)__ptr + uVar3 * 0x30);
        *plVar2 = (long)(plVar2 + 6);
      }
    }
    param_1[2] = (long)__ptr;
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else if ((__ptr != (void *)0x0) &&
            (plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

