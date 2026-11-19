
void FUN_03900770(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *__ptr;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b65cf0;
  plVar1 = param_1 + 1;
  FUN_038f4ad0(plVar1);
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    __ptr = (long *)(lVar3 + -8);
    if (*__ptr != 0) {
      lVar4 = *__ptr << 7;
      do {
        *(undefined ***)(lVar3 + -0x80 + lVar4) = &PTR_LAB_04b65ee0;
        FUN_0390d560();
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
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
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *plVar1 = (long)(PTR_DAT_04bb2cd0 + 0x10);
  FUN_038f4940(plVar1);
  return;
}

