
void FUN_001b76c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bcc540 + 0x10);
  plVar1 = (long *)param_1[0x3c];
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 8))();
    plVar1 = (long *)param_1[0x3c];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    (**(code **)(*(long *)plVar1[1] + 8))();
    plVar1 = (long *)param_1[0x3c];
  }
  if ((long *)plVar1[2] != (long *)0x0) {
    (**(code **)(*(long *)plVar1[2] + 8))();
    plVar1 = (long *)param_1[0x3c];
  }
  if ((long *)plVar1[3] != (long *)0x0) {
    (**(code **)(*(long *)plVar1[3] + 8))();
  }
  lVar3 = param_1[0x3b];
  if (lVar3 != 0) {
    FUN_001db740(lVar3 + 8,*(undefined8 *)(lVar3 + 0x10));
    FUN_00185ac4(lVar3);
  }
  param_1[0x51] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  FUN_0018b1a0(param_1 + 0x51);
  FUN_001e1868(param_1 + 0x3f);
  if (param_1[0x3c] != 0) {
    param_1[0x3d] = param_1[0x3c];
    FUN_00187e4c();
  }
  FUN_001bb830(param_1 + 0x38);
  FUN_001abf78(param_1 + 0x29);
  if (param_1[0x28] != 0) {
    lVar3 = param_1[0x26];
    plVar1 = (long *)param_1[0x27];
    param_1[0x28] = 0;
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar2;
    while (plVar1 != param_1 + 0x26) {
      plVar1 = (long *)plVar1[1];
      FUN_00187e4c();
    }
  }
  FUN_001bae80(param_1 + 0x1e);
  FUN_0018ac30(param_1 + 10);
  FUN_0018ac30(param_1 + 1);
  return;
}

