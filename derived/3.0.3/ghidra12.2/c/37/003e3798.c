
uint FUN_003e3798(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_003ce7b8();
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x238) = 1;
    *(undefined8 *)(param_1 + 0x23c) = 0;
    *(undefined8 *)(param_1 + 0x244) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x24c) = 0;
    *(undefined8 *)(param_1 + 0x254) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x25c) = 0;
    *(undefined8 *)(param_1 + 0x264) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    *(undefined8 *)(param_1 + 0x274) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x27c) = 0;
    *(undefined8 *)(param_1 + 0x284) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x28c) = 0;
    *(undefined8 *)(param_1 + 0x294) = 0x13f800000;
    *(undefined8 *)(param_1 + 0x29c) = 0;
    *(undefined8 *)(param_1 + 0x2a4) = 0x13f800000;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    *(undefined8 *)(param_1 + 0x2b4) = 0;
    *(undefined1 *)(param_1 + 0x2b2) = 1;
  }
  return uVar1 & 1;
}

