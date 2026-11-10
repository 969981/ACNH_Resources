
void FUN_00257a08(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x1e8))();
  param_1[0x79] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x90,uVar2);
  if (lVar1 != 0) {
    FUN_0025ca88(lVar1,param_1);
  }
  param_1[0x7a] = lVar1;
  lVar1 = (**(code **)(*param_1 + 0x1f8))(param_1);
  param_1[0x7b] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x70,uVar2);
  if (lVar1 != 0) {
    FUN_0025d2e0(lVar1,param_1);
  }
  param_1[0x7c] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x70,uVar2);
  if (lVar1 != 0) {
    FUN_0025d738(lVar1,param_1);
  }
  param_1[0x7d] = lVar1;
  lVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  param_1[0x7e] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x1c8,uVar2);
  if (lVar1 != 0) {
    FUN_0025db54(lVar1,param_1);
  }
  param_1[0x7f] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0xb8,uVar2);
  if (lVar1 != 0) {
    FUN_0025e370(lVar1,param_1);
  }
  param_1[0x80] = lVar1;
  if (param_1[0x81] == 0) {
    lVar1 = (**(code **)(*param_1 + 0x208))(param_1);
    param_1[0x81] = lVar1;
    lVar1 = param_1[0xa7];
  }
  else {
    lVar1 = param_1[0xa7];
  }
  if (lVar1 == 0) {
    uVar2 = FUN_0021f454();
    lVar1 = FUN_00285d10(0x98,uVar2);
    if (lVar1 != 0) {
      FUN_0025eac0(lVar1,param_1);
    }
    param_1[0xa7] = lVar1;
    lVar1 = param_1[0x82];
  }
  else {
    lVar1 = param_1[0x82];
  }
  if (lVar1 == 0) {
    uVar2 = FUN_0021f454();
    lVar1 = FUN_00285d10(0x88,uVar2);
    if (lVar1 != 0) {
      FUN_0025f270(lVar1,param_1);
    }
    param_1[0x82] = lVar1;
    lVar1 = param_1[0x83];
  }
  else {
    lVar1 = param_1[0x83];
  }
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    param_1[0x83] = lVar1;
    return;
  }
  return;
}

