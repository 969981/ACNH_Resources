
undefined8 FUN_0077dab4(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x100))();
  if ((int)uVar1 != 1) {
    if ((*(long *)(param_1[9] + 0x60) == 0) || (*(int *)(*(long *)(param_1[9] + 0x60) + 0x50) != 2))
    {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

