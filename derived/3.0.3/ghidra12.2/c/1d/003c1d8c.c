
void FUN_003c1d8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_003c0440(param_2);
  uVar2 = FUN_003c036c(param_2);
  uVar3 = FUN_003c03d8(param_2);
  if ((uVar1 & 1) == 0) {
    uVar4 = FUN_003c0458(param_2);
    FUN_003c19b0(param_1,uVar2,uVar3,0,uVar4);
    return;
  }
  uVar4 = FUN_003c03f4(param_2);
  uVar5 = FUN_003c0458(param_2);
  FUN_003c19b0(param_1,uVar2,uVar3,uVar4,uVar5);
  return;
}

