
bool FUN_0124e0f8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar2 == 5) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
    bVar1 = iVar2 == 5;
  }
  return bVar1;
}

