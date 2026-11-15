
void FUN_022c87d0(long param_1,undefined1 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  do {
    if ((&DAT_0547b6e5)[(long)((ulong)uVar1 << 0x20) >> 0x1b] == '\0') {
      lVar2 = (long)(int)uVar1;
      (&DAT_0547b6e4)[lVar2 * 0x20] = param_2;
      (&DAT_0547b6d0)[lVar2 * 8] = *(undefined4 *)(param_3 + 8);
      uVar3 = *(undefined8 *)(param_3 + 0xc);
      (&DAT_0547b6e0)[lVar2 * 8] = param_4;
      (&DAT_0547b6e5)[(long)((ulong)uVar1 << 0x20) >> 0x1b] = '\x01';
      (&DAT_0547b6e6)[lVar2 * 0x20] = 0;
      *(undefined8 *)(&DAT_0547b6d4 + lVar2 * 8) = uVar3;
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x20);
  return;
}

