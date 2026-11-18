
void FUN_032ac168(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(byte *)(*(long *)PTR_DAT_04bc8fe0 + 0xd4) = *(byte *)(*(long *)PTR_DAT_04bc8fe0 + 0xd4) | 4;
  *(undefined1 *)(*(long *)(lVar1 + 0x50) + 0x116) = 1;
  return;
}

