
void FUN_003cfe24(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(long **)(lVar1 + 0x10) == param_1) {
      *(undefined8 *)(lVar1 + 0x10) = 0;
      lVar1 = *param_1;
      plVar2 = *(long **)(lVar1 + 0x18);
    }
    else {
      plVar2 = *(long **)(lVar1 + 0x18);
    }
    if ((plVar2 != param_1) || (*(undefined8 *)(lVar1 + 0x18) = 0, *param_1 != 0)) {
      *param_1 = 0;
    }
  }
  return;
}

