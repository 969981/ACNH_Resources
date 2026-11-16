
void FUN_02640070(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,byte param_5)

{
  undefined8 extraout_x1;
  undefined8 uVar1;
  undefined8 extraout_x1_00;
  long lVar2;
  
  param_1[1] = param_3;
  *(byte *)(param_1 + 6) = param_5;
  (**(code **)(*param_1 + 0x10))();
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar1 = extraout_x1;
    do {
      FUN_02640070(lVar2,uVar1,param_3,param_4,param_5 & 1);
      lVar2 = *(long *)(lVar2 + 0x20);
      uVar1 = extraout_x1_00;
    } while (lVar2 != 0);
  }
  return;
}

