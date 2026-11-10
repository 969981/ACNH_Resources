
void FUN_001ba5b0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_0483ab10;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    lVar2 = param_1[1];
    param_1[3] = 0;
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    while (plVar1 != param_1 + 1) {
      plVar1 = (long *)plVar1[1];
      FUN_00187e4c();
    }
  }
  return;
}

