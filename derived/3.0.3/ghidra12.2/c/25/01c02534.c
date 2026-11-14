
void FUN_01c02534(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(byte *)(param_1 + 0x60) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x80) == 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_01c025ac;
    }
    else {
      FUN_03f45838(param_1 + 0x70);
      if (*(long *)(param_1 + 0x68) == 0) {
        *(undefined4 *)(param_1 + 100) = 0xe;
        goto LAB_01c025ac;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x58);
    }
  }
LAB_01c025ac:
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  **(undefined1 **)(param_1 + 0xa8) = 0;
  **(undefined1 **)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x45c) = 0;
  *(undefined8 *)(param_1 + 0x454) = 0;
  *(undefined8 *)(param_1 + 0x444) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x44c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x434) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x43c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x424) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x42c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x414) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x41c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x404) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3f4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3fc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3e4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3ec) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3d4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3dc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3c4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3cc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3b4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3bc) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3a4) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x3ac) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x394) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x39c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 900) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x374) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x37c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x364) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x36c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x354) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x35c) = 0xffffffffffffffff;
  (**(code **)(*(long *)(param_1 + 0x150) + 0x10))(param_1 + 0x150);
  if (((*(byte *)(param_1 + 0x20) & 1) == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    return;
  }
  FUN_0383bb50();
  return;
}

