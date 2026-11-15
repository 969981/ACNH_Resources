
void FUN_01e4b144(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 800) = **(undefined4 **)(param_1 + 0x348);
  FUN_01e5d648();
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x180))();
  if ((((uVar3 & 1) != 0) && (*(char *)(param_1 + 0x418) == '\0')) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x358) + 0x690), lVar4 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x360);
    *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0x3f | (byte)(uVar2 << 6);
    uVar1 = (ushort)(CONCAT11(*(byte *)(lVar4 + 10),*(undefined1 *)(lVar4 + 9)) >> 4) + 1;
    *(byte *)(lVar4 + 9) = (byte)(uVar2 >> 2) & 0xf | (char)uVar1 * '\x10';
    *(byte *)(lVar4 + 10) = *(byte *)(lVar4 + 10) & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
    *(char *)(param_1 + 0x59c) =
         (char)((CONCAT44(uVar1 >> 4,uVar1 * 0x10000000) & 0xfffffffff) >> 0x1c);
  }
  return;
}

