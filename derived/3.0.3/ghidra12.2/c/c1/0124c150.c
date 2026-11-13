
void FUN_0124c150(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  
  lVar1 = param_1 + 8;
  iVar3 = FUN_0277d6c4(lVar1);
  if ((((iVar3 != 0xeb7e) && (iVar3 = FUN_0277d6c4(lVar1), iVar3 != 0xeb7c)) &&
      (iVar3 = FUN_0277d6c4(lVar1), iVar3 != 0xeb7d)) &&
     (iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0x2b)) {
    iVar3 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    if (iVar3 - 0x23U < 9) {
      FUN_0277d6c4(lVar1);
      uVar2 = FUN_01241050();
      *(undefined1 *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}

