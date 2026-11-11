
undefined1
FUN_003c0a80(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  uVar4 = 0;
  uVar2 = 1;
  if (1 < param_2) {
    uVar2 = 2;
  }
  lVar3 = param_1;
  do {
    uVar1 = FUN_003c2dac(lVar3,param_3);
    if ((uVar1 & 1) == 0) {
      if (uVar2 != (uint)uVar4) {
        if ((uint)uVar4 == 0) {
          return 0;
        }
        uVar4 = uVar4 & 0xffffffff;
        do {
          FUN_003c2e44(param_1);
          param_1 = param_1 + 0xe0;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        return 0;
      }
      break;
    }
    uVar4 = uVar4 + 1;
    lVar3 = lVar3 + 0xe0;
  } while (uVar2 != uVar4);
  *(undefined4 *)(param_1 + 0x1d9) = 0;
  *(uint *)(param_1 + 0x1c4) = uVar2;
  *(undefined1 **)(param_1 + 0x1ec) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = param_4;
  *(undefined8 *)(param_1 + 0x1d0) = param_5;
  *(undefined8 *)(param_1 + 0x244) = 0;
  *(undefined8 *)(param_1 + 0x24c) = 0;
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN_003c02d0();
  }
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  return 1;
}

