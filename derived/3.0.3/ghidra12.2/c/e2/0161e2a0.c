
void FUN_0161e2a0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *__ptr;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 800);
  if (lVar2 != 0) {
    __ptr = (long *)(lVar2 + -8);
    if (*__ptr != 0) {
      lVar3 = *__ptr * 0x78;
      do {
        *(undefined ***)(lVar2 + -0x78 + lVar3) = &PTR_LAB_04b65ee0;
        FUN_0390d560();
        lVar3 = lVar3 + -0x78;
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
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0;
  }
  if ((*(long *)(param_1 + 0x830) != 0) && (*(long **)(param_1 + 0x838) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x838) + 8))();
  }
  FUN_0390d560(param_1 + 0x2a0);
  return;
}

