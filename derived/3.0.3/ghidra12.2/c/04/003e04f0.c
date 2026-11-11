
undefined4 FUN_003e04f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 == 1) {
    uVar2 = 2;
  }
  uVar1 = 3;
  if (param_1 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}

