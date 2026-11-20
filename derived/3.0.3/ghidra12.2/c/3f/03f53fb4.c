
void FUN_03f53fb4(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *(byte *)(param_1 + 0x2048) + 1;
  *(char *)(param_1 + 0x2048) = (char)uVar1;
  if (uVar1 >> 8 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + (ulong)*(byte *)(param_1 + 0x2049) * 2 + 0x204a) + 1;
  if ((uVar1 >> 0xf & 1) != 0) {
LAB_03f54074:
    *(undefined2 *)(param_1 + 0x2048) = 0xffff;
LAB_03f5407c:
    *(undefined1 *)(param_1 + 0x2010) = 0;
    *(undefined1 *)(param_1 + 0x2078) = 1;
    return;
  }
  if (0xb7f < (uVar1 & 0xffff)) {
    *(undefined2 *)(param_1 + 0x2048) = 0;
    *(undefined4 *)(param_1 + 0x204a) = 0xffffffff;
    goto LAB_03f5407c;
  }
  if ((uint)*(ushort *)(param_1 + 0x204a) == (uVar1 & 0xffff)) {
    *(undefined2 *)(param_1 + 0x2048) = 0;
    return;
  }
  if ((uint)*(ushort *)(param_1 + 0x204c) == (uVar1 & 0xffff)) {
    *(undefined2 *)(param_1 + 0x2048) = 0x100;
    return;
  }
  bVar2 = *(byte *)(*(long *)(param_1 + 0x2008) + 0x7f4c);
  if (*(byte *)(param_1 + 0x2049) == 0) {
    if ((bVar2 >> 1 & 1) != 0) {
      if ((bVar2 & 1) != 0) goto LAB_03f54074;
      goto LAB_03f54058;
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
LAB_03f54058:
      uVar3 = 0;
      goto LAB_03f5405c;
    }
    if ((bVar2 >> 1 & 1) != 0) goto LAB_03f54074;
  }
  uVar3 = 1;
LAB_03f5405c:
  *(char *)(param_1 + 0x2049) = (char)uVar3;
  *(undefined1 *)(param_1 + 0x2048) = 0;
  *(short *)(param_1 + (ulong)uVar3 * 2 + 0x204a) = (short)uVar1;
  return;
}

