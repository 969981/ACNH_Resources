
undefined8 FUN_001bda64(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_3 + 0x138);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  lVar3 = *(long *)(param_2 + 0x10);
  *(undefined2 *)(lVar1 + 0x31) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) & 4;
  if (*(short *)(lVar3 + 0x18) != 0x2c) {
    uVar2 = FUN_00193030(lVar1,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) +
                               *(long *)(param_2 + 0x18),*(short *)(lVar3 + 0x18) + -0x2c,
                         0xffffffffffffffff);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

