
void FUN_0393e140(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *__ptr;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[2];
  *param_1 = &PTR_FUN_04b67918;
  if (lVar3 != 0) {
    __ptr = (long *)(lVar3 + -8);
    if (*__ptr != 0) {
      lVar4 = *__ptr << 7;
      do {
        lVar1 = lVar3 + lVar4;
        *(undefined ***)(lVar1 + -0x80) = &PTR_LAB_04b67938;
        if (*(long *)(lVar1 + -0x20) != 0) {
          if (*(char *)(lVar1 + -7) != '\0') {
            FUN_039499cc(DAT_05ae90c0);
          }
          *(undefined1 *)(lVar1 + -7) = 0;
          *(undefined8 *)(lVar1 + -0x20) = 0;
        }
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
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  FUN_038e1a84(param_1 + 0x9ac);
  FUN_038e1a84(param_1 + 0x9a4);
  FUN_038e1a84(param_1 + 0x99c);
  return;
}

