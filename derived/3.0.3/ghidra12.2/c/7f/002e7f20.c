
void FUN_002e7f20(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bce930 + 0x10);
  if (param_1[0x3b] != 0) {
    lVar1 = param_1[0x39];
    plVar3 = (long *)param_1[0x3a];
    param_1[0x3b] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 0x39) {
      plVar3 = (long *)plVar3[1];
      FUN_00187e4c();
    }
  }
  if (param_1[0x38] != 0) {
    lVar1 = param_1[0x36];
    plVar3 = (long *)param_1[0x37];
    param_1[0x38] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 0x36) {
      plVar4 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar4;
    }
  }
  param_1[0x30] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x30);
  if (param_1[0x2e] != 0) {
    lVar1 = param_1[0x2c];
    plVar3 = (long *)param_1[0x2d];
    param_1[0x2e] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 0x2c) {
      plVar3 = (long *)plVar3[1];
      FUN_00187e4c();
    }
  }
  FUN_002e73b4(param_1 + 2);
  return;
}

