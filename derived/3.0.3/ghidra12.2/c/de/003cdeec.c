
void FUN_003cdeec(long param_1,long param_2)

{
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_1 + 0x10) = param_1 + 0x10;
  *(long *)(param_1 + 0x18) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(long *)(param_1 + 0x20) = param_1 + 0x20;
  *(long *)(param_1 + 0x28) = param_1 + 0x20;
  *(long *)(param_1 + 0x30) = param_1 + 0x30;
  *(long *)(param_1 + 0x38) = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x40) = 0x7fffffff00000001;
  *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x58) = 0x100000000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  if (param_2 == 0) {
    return;
  }
  FUN_003c02d0(param_2);
  return;
}

