
undefined8
FUN_001d37c4(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x60) | 0x80;
  *(ushort *)(param_2 + 0x60) = uVar1;
  if (*(char *)(param_2 + 0xcd) == '\0') {
    *(ushort *)(param_2 + 0xb6) = uVar1;
    *(undefined1 *)(param_2 + 0xcd) = 1;
    *(byte *)(param_2 + 0xb4) = *(byte *)(param_2 + 0x43) & 0xf | *(char *)(param_2 + 0x42) << 4;
    *(byte *)(param_2 + 0xb5) = *(byte *)(param_2 + 0x45) & 0xf | *(char *)(param_2 + 0x44) << 4;
    *(undefined2 *)(param_2 + 0xba) = *(undefined2 *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_2 + 0xa1);
    *(undefined1 *)(param_2 + 0xb9) = *(undefined1 *)(param_2 + 0xa4);
    uVar2 = FUN_001d3fe4(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  FUN_001d3170(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  return 1;
}

