
long FUN_003b79a8(long *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_1[2];
  if (iVar1 < (int)param_1[4]) {
    *(int *)(param_1 + 2) = iVar1 + 1;
    lVar2 = *(long *)(param_1[1] + (long)iVar1 * 8);
    *(int *)(param_1[3] + ((ulong)(lVar2 - *param_1) >> 6 & 0x3fffffffffffffc)) = iVar1;
    *(undefined4 *)(lVar2 + 0xa4) = 0;
    *(undefined4 *)(lVar2 + 0xe8) = 0;
    *(undefined1 *)(lVar2 + 0x28) = 1;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xac) = 0x100007d00;
    return lVar2;
  }
  return 0;
}

