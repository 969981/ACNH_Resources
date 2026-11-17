
void FUN_02feb9a0(undefined8 *param_1)

{
  long *plVar1;
  long *__ptr;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_04aefac8;
  FUN_03ebae78(param_1 + 3);
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    __ptr = (long *)(lVar2 + -8);
    if (*__ptr != 0) {
      lVar3 = *__ptr * 0x150;
      do {
        *(undefined ***)(lVar2 + lVar3 + -0x150) = &PTR_LAB_04aefb20;
        FUN_038fd0e0(lVar2 + lVar3 + -0x98);
        lVar3 = lVar3 + -0x150;
      } while (lVar3 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}

