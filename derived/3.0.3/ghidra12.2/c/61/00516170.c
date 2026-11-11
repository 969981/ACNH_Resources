
ulong FUN_00516170(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    return 0xffffffff;
  }
  uVar1 = 0;
  while ((lVar2 = *(long *)(*(long *)(param_1 + 0x30) + uVar1 * 8),
         *(int *)(lVar2 + 0x20) != param_3 || (*(int *)(lVar2 + 0x24) != param_2))) {
    uVar1 = uVar1 + 1;
    if ((long)*(int *)(param_1 + 0x38) <= (long)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}

