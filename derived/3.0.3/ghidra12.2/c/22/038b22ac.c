
bool FUN_038b22ac(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = nn::fs::FlushFile(*(undefined8 *)(param_2 + 0x18));
  *(int *)(param_1 + 0x7c) = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 0x29) = 1;
  }
  return iVar1 == 0;
}

