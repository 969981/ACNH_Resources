
void FUN_002cbfb0(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_0030a004(param_1 + 8);
  lVar2 = 0;
  *(undefined2 *)(param_1 + 0x378) = 0;
  *(undefined2 *)(param_1 + 0x380) = 0x100;
  *(undefined4 *)(param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x382) = 1;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 3;
    *(undefined2 *)(lVar1 + 0x294) = 0;
    *(undefined1 *)(lVar1 + 0x296) = 0;
  } while (lVar2 != 0x81);
  *(undefined1 *)(param_1 + 0x374) = 0;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x33c) = 0;
  *(undefined8 *)(param_1 + 0x344) = 0;
  *(undefined8 *)(param_1 + 0x34c) = 0;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x36c) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0;
  return;
}

