
void FUN_01f0922c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_021d5df0(*(long *)(param_1 + 8) + 0x3e0);
  if (iVar1 != 0) {
    return;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    FUN_016d3828(*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
  }
  FUN_016d2b94(param_2,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
  return;
}

