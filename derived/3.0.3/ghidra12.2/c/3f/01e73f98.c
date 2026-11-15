
void FUN_01e73f98(long param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xb01c) == 1) && (*(int *)(param_1 + 0xafc4) == 9)) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 300;
  }
  *(undefined4 *)(param_1 + 0xae70) = uVar1;
  return;
}

