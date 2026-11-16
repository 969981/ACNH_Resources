
void FUN_0285632c(long param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_02855af0(param_2);
  if (uVar1 != 0xffffffff) {
    *(undefined8 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 0x155) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined2 *)(param_1 + 0x152) = 0x101;
    *(undefined1 **)(param_1 + 0x158) = &LAB_01010000;
    *(undefined8 *)(param_1 + 0x134) = 0;
    *(undefined8 *)(param_1 + 0x13c) = 0;
    *(undefined1 *)(param_1 + 0x161) = 5;
    *(undefined2 *)(param_1 + 0x168) = 0;
    *(undefined1 *)(param_1 + 0x16a) = 0;
    *(undefined1 *)(param_1 + 0x164) = 2;
    *(char *)(param_1 + 0x160) = (char)uVar1;
    *(undefined1 *)(param_1 + 0x162) = 0;
    *(undefined1 *)(param_1 + 0x163) = 1;
    *param_2 = *param_2 & (1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

