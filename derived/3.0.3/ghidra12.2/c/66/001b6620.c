
void FUN_001b6620(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  *param_1 = (long)(PTR_DAT_04bcc510 + 0x10);
  lVar3 = param_1[1];
  if (param_1[2] != lVar3) {
    uVar1 = 1;
    uVar5 = 0;
    do {
      uVar4 = uVar1;
      plVar2 = *(long **)(lVar3 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = *(long **)(param_1[4] + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar3 = param_1[1];
      uVar1 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar4;
    } while (uVar4 < (ulong)(param_1[2] - lVar3 >> 3));
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  FUN_0018ac30(param_1 + 0x17);
  FUN_0019cd34(param_1 + 0x12);
  FUN_0019cd34(param_1 + 0xd);
  FUN_0019cd34(param_1 + 8);
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    FUN_00187e4c();
  }
  if (param_1[1] == 0) {
    return;
  }
  param_1[2] = param_1[1];
  FUN_00187e4c();
  return;
}

