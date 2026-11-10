
undefined8 FUN_00173c00(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if (((short)uVar1 < 0) || (((uint)(int)(short)uVar1 >> 7 & 1) == 0)) {
    if (((uVar1 ^ 0xffff) & 0xe) != 0 || (uVar1 & 0x11) == 0) {
      return 0xffffffff;
    }
    if (((short)uVar1 < 0) && ((uVar1 & 0x81) != 0x81)) {
      return 0xffffffff;
    }
    if (((uVar1 & 0x2800) == 0x2000) && ((uVar1 & 0x1200) != 0x1200)) {
      return 0xffffffff;
    }
  }
  else {
    if ((uVar1 & 0xb) != 1) {
      return 0xffffffff;
    }
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  if (*(char *)(param_2 + 0xc) == '\x05') {
    *(ushort *)(param_1 + 0xe2) = uVar1 & 0x780;
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  return 0;
}

