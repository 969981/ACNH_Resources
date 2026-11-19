
void FUN_039ea584(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  
  if (*(long *)(param_1 + 0x1b8) != 0) {
    (*DAT_04c62b10)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8),1);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  uVar2 = 0;
  bVar1 = *(byte *)(param_1 + 0x22) | *(byte *)(param_1 + 0x31);
  *(byte *)(param_1 + 0x24d) = *(byte *)(param_1 + 0x24d) & 0xfe | bVar1 >> 2 & 1;
  switch(bVar1 & 3) {
  case 0:
    uVar2 = 1;
    if ((bVar1 & 8) != 0) {
      uVar2 = 2;
    }
    break;
  case 1:
    uVar2 = 1;
    if ((bVar1 & 8) == 0) {
      uVar2 = 2;
    }
    break;
  case 3:
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0x245) = uVar2;
  uVar2 = (undefined1)(0x2000102 >> (ulong)(bVar1 >> 1 & 0x18));
  *(undefined1 *)(param_1 + 0x24b) = uVar2;
  *(undefined1 *)(param_1 + 0x24c) = uVar2;
  if ((*(byte *)(param_1 + 0x37) >> 2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x245) = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    FUN_038e4d90(param_1 + 0x1e0,*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  *(undefined1 *)(param_1 + 0x34) = 0xff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30) = 8;
  *(undefined8 *)(param_1 + 0x188) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x158) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x160) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x180) = 0xffffffffffffffff;
  return;
}

