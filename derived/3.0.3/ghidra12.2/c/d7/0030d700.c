
void FUN_0030d700(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00213d84();
  lVar2 = FUN_00185a6c(0x130);
  if (lVar2 != 0) {
    FUN_0030e318(lVar2);
  }
  FUN_00210960(uVar1,3,lVar2);
  uVar1 = FUN_00213d84(param_1);
  lVar2 = FUN_00185a6c(0x90);
  if (lVar2 != 0) {
    FUN_0030e400(lVar2,3);
  }
  FUN_00210960(uVar1,3,lVar2);
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  param_1[5] = lVar2;
  FUN_001fab4c(lVar2,8);
  *(long **)(param_1[5] + 0x88) = param_1;
  return;
}

