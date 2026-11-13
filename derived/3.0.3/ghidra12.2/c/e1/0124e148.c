
bool FUN_0124e148(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 8;
  uVar4 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
  if (((uint)uVar4 < 0x21 && (1L << (uVar4 & 0x3f) & 0x1000006aaU) != 0) &&
     (iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar3 != 5)) {
    iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    bVar2 = iVar3 != 5;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

