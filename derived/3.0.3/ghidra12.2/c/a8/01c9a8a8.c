
void FUN_01c9a8a8(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x38 + 0x18) = param_2;
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    uVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x38 + 0x28) = param_3;
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) = 0;
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2d) = 0;
  uVar1 = param_4;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    uVar1 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar1 * 0x38) = 0x18;
  if (*(uint *)(param_1 + 0x20) <= param_4) {
    param_4 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x28) + (long)(int)param_4 * 0x38 + 0x2f) = 0;
  return;
}

