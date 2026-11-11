
bool FUN_003c2dac(undefined4 *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = FUN_03b38a74();
  lVar1 = FUN_003b79a8(lVar1 + 0x530);
  if (lVar1 != 0) {
    FUN_003b6d5c(lVar1,param_2);
    *(undefined4 **)(lVar1 + 0xe0) = param_1;
    *(long *)(param_1 + 0x36) = lVar1;
    *param_1 = param_2;
    param_1[1] = 1;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined1 **)(param_1 + 2) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 4) = &DAT_3f8000003f800000;
    *(undefined8 *)(param_1 + 0x20) = 0x7d0000000001;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x77) = 0;
  }
  return lVar1 != 0;
}

