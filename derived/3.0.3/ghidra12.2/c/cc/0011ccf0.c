
ushort FUN_0011ccf0(undefined8 param_1,long param_2,undefined8 param_3,ushort param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_14 [4];
  
  bVar1 = *(byte *)(param_2 + 0x67) & 0xf0;
  lVar5 = 0x70;
  if (bVar1 != 0x30) {
    lVar5 = 0x72;
  }
  uVar2 = *(ushort *)(param_2 + lVar5) & 0x7f;
  if (param_4 < (ushort)(uVar2 * 2 + 2)) {
    return 0x941c;
  }
  uVar3 = *(uint *)(param_2 + 0x40);
  if (*(byte *)(param_2 + 0x68) - 1 < 2) {
    lVar5 = FUN_00119c10(param_1,*(undefined8 *)(param_2 + 0x10),uVar3 >> 0x10,auStack_14,1);
  }
  else {
    lVar5 = *(long *)(param_2 + 0x10);
    if (*(byte *)(param_2 + 0x68) == 3) {
      uVar4 = *(uint *)(lVar5 + 0x70);
    }
    else {
      uVar4 = (*(uint *)(lVar5 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + 8) & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    }
    if ((bVar1 == 0x10) && (uVar4 == 0x80020000)) {
      uVar6 = 1;
      if (*(char *)(param_2 + 0x66) == ' ') {
        uVar6 = 2;
      }
      lVar5 = FUN_00119c10(param_1,lVar5,uVar3 >> 0x10,auStack_14,uVar6);
    }
    else {
      lVar5 = FUN_00119c10(param_1,lVar5,uVar3 >> 0x10,auStack_14,1);
    }
  }
  if (lVar5 == 0) {
    return 0xa21c;
  }
  FUN_00100350(param_3,lVar5);
  return uVar2;
}

