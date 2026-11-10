
void FUN_0024de28(long param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  *(undefined2 *)(param_1 + 0x28) = param_2;
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = 3;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 2) goto LAB_0024de4c;
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
LAB_0024de4c:
  *(undefined1 *)(param_1 + 0x31) = 1;
  return;
}

