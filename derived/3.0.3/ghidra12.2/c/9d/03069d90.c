
void FUN_03069d90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_04bb5ce0;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0xfa8) != -1)) {
    FUN_017ee730(lVar1 + 0xda0,*(int *)(lVar1 + 0xfa8),(*(byte *)(lVar1 + 0xedc) & 0x20) == 0,1);
  }
  FUN_030694a0(*(undefined4 *)(param_1 + 0x37c),7,param_1 + 0x1f8);
  return;
}

