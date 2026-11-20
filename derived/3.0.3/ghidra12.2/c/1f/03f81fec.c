
void FUN_03f81fec(long param_1)

{
  undefined2 uVar1;
  
  *(code **)(param_1 + 0x3cbce8) = FUN_03f820d4;
  *(undefined8 *)(param_1 + 0x3cbcf0) = 0;
  FUN_03f6f17c();
  uVar1 = FUN_03f5914c(param_1,*(undefined2 *)(param_1 + 0x36e180));
  *(undefined2 *)(param_1 + 0x34e0b6) = 0;
  *(undefined4 *)(param_1 + 0x34e0f0) = 0x600;
  *(undefined8 *)(param_1 + 0x34e0e8) = 0x1ff;
  *(undefined2 *)(param_1 + 0x34e0b4) = uVar1;
  *(undefined1 *)(param_1 + 0x34e0d0) = 1;
  *(undefined2 *)(param_1 + 0x34e0e4) = 0;
  *(undefined2 *)(param_1 + 0x34e0ce) = 0x100;
  *(undefined1 *)(param_1 + 0x34e0e6) = 0;
  *(undefined4 *)(param_1 + 0x34e0ca) = 0x1010000;
  *(undefined4 *)(param_1 + 0x34e0e0) = 0;
  *(undefined2 *)(param_1 + 0x34e0d1) = 0x3400;
  *(undefined2 *)(param_1 + 0x34e0c8) = 0;
  if (*(char *)(*(long *)(param_1 + 0x34e0d8) + 0x34710) != '\0') {
    *(undefined1 *)(param_1 + 0x34e0d5) = 2;
    *(undefined2 *)(param_1 + 0x34e0d3) = 2;
  }
  *(undefined4 *)(param_1 + 0x34e0bc) = 0;
  *(undefined1 *)(param_1 + 0x34e0b8) = 0;
  (&LAB_0038a448)[param_1] = 0;
  (&LAB_0038a44c)[param_1] = 0;
  *(undefined8 *)(&LAB_0038a450 + param_1) = 0;
  (&LAB_0038a458)[param_1] = 0;
  return;
}

