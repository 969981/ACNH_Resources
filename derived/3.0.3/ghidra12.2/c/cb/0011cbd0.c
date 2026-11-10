
ulong FUN_0011cbd0(undefined8 param_1,long param_2,undefined8 param_3,ushort param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  byte local_14 [4];
  
  bVar1 = *(byte *)(param_2 + 0x67) & 0xf0;
  lVar3 = 0x72;
  if (bVar1 != 0x30) {
    lVar3 = 0x70;
  }
  if (param_4 < (ushort)((*(ushort *)(param_2 + lVar3) & 0x7f) * 2 + 2)) {
    return 0x941d;
  }
  if ((*(ushort *)(param_2 + lVar3) & 0x7f) == 0) {
    return 0x9b1d;
  }
  if (*(byte *)(param_2 + 0x68) - 1 < 2) {
    lVar3 = FUN_00119860(param_1,*(undefined8 *)(param_2 + 0x10),*(uint *)(param_2 + 0x40) >> 0x10,
                         local_14,1);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x10);
    if (*(byte *)(param_2 + 0x68) == 3) {
      uVar2 = *(uint *)(lVar3 + 0x70);
    }
    else {
      uVar2 = (*(uint *)(lVar3 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 8) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    uVar4 = 1;
    if (((bVar1 == 0x10) && (uVar4 = 1, uVar2 == 0x80020000)) &&
       (uVar4 = 1, *(char *)(param_2 + 0x66) == ' ')) {
      uVar4 = 2;
    }
    lVar3 = FUN_00119860(param_1,lVar3,*(uint *)(param_2 + 0x40) >> 0x10,local_14,uVar4);
  }
  if (lVar3 == 0) {
    return 0xa21d;
  }
  FUN_00100350(param_3,lVar3);
  return (ulong)local_14[0];
}

