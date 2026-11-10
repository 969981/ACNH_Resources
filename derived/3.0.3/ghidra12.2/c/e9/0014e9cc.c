
undefined8 FUN_0014e9cc(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(param_1[0xd0] + 8);
  }
  else {
    FUN_0014b7c4(*param_1,5,2);
    uVar1 = *(undefined8 *)(param_1[0xd0] + 8);
    if (*(long *)(*param_1 + 0xe8) != 0) {
      FUN_0014b80c(*param_1,5);
    }
  }
  return uVar1;
}

