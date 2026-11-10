
int FUN_002a5d30(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_002ba7a0(DAT_04c61168);
  uVar2 = (**(code **)(**(long **)(lVar1 + 0x10) + 0x48))();
  if ((uVar2 & 1) != 0) {
    lVar1 = FUN_002ba7a0(DAT_04c61168);
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x10) + 0x58))();
    if ((uVar2 & 1) != 0) {
      return *(byte *)(DAT_04c61168 + 0x58) - 1;
    }
  }
  return 0;
}

