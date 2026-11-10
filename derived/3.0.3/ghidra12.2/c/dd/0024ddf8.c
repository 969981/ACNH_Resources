
void FUN_0024ddf8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 3) goto LAB_0024de1c;
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
LAB_0024de1c:
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}

