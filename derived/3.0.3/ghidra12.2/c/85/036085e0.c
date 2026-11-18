
void FUN_036085e0(long param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  
  if (*(char *)(param_1 + -0x25a5) != '\0') {
    param_2 = param_2 & 0xffffff81;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    lVar3 = *(long *)(param_1 + 0x1a38);
    piVar1 = (int *)(param_1 + 0x1970 + lVar3 * 8);
    *piVar1 = *(int *)(param_1 + -0x2530) - *(int *)(param_1 + -0x2520);
    *(undefined1 *)((long)piVar1 + 7) = 0;
    *(undefined1 *)(piVar1 + 1) = 3;
    *(ushort *)((long)piVar1 + 5) = (ushort)param_2 & 0xff;
    *(undefined4 *)(param_1 + 0x1970 + lVar3 * 4 + 0x80) = 1;
    *(ulong *)(param_1 + 0x1a38) = (ulong)((int)lVar3 + 1) & 0xf;
  }
  *(byte *)(param_1 + 9) = (byte)param_2 & 0x83;
  if ((param_2 >> 7 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + -0x2538);
    bVar2 = *(byte *)(param_1 + -0x177d);
    if (((((bVar2 >> 2 & 1) == 0) && ((param_2 >> 1 & 1) != 0)) &&
        (*(char *)(param_1 + 0xd) != '\0')) && ((*(ushort *)(param_1 + -0x3c) >> 2 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
    }
    FUN_036081dc(param_1);
    *(undefined1 *)(param_1 + 0xd) = 0;
    if (((param_2 >> 1 & 1) != 0) && ((bVar2 >> 2 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  return;
}

