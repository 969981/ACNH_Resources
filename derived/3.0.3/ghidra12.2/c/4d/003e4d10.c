
undefined8 FUN_003e4d10(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  plVar1 = param_1 + 0x54;
  iVar2 = FUN_003b8ee0(plVar1);
  uVar3 = FUN_003b8e74(plVar1);
  uVar3 = uVar3 & 0xffffffff;
  if (uVar3 <= param_3) {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_003dd424(param_1 + 0x5d,(long)iVar2,0);
    uVar4 = FUN_003dd33c(param_1 + 0x5d,param_2,uVar3,0);
    if (uVar4 == uVar3) {
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_003b9a14(plVar1,param_2);
      return 1;
    }
  }
  return 0;
}

