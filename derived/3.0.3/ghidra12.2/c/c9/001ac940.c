
void FUN_001ac940(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = (long)(PTR_DAT_04bcc448 + 0x10);
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
  if (param_1[0x35] != 0) {
    lVar1 = param_1[0x33];
    plVar3 = (long *)param_1[0x34];
    param_1[0x35] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 0x33) {
      plVar3 = (long *)plVar3[1];
      FUN_00187e4c();
    }
  }
  param_1[0x2d] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x2d);
  FUN_001db6dc(param_1 + 0x2a,param_1[0x2b]);
  FUN_001976b0(param_1 + 0x14);
  FUN_001bb8f0(param_1 + 0xe);
  FUN_001bb8f0(param_1 + 10);
  if (param_1[9] != 0) {
    lVar1 = param_1[7];
    plVar3 = (long *)param_1[8];
    param_1[9] = 0;
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    while (plVar3 != param_1 + 7) {
      plVar4 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar4;
    }
  }
  return;
}

