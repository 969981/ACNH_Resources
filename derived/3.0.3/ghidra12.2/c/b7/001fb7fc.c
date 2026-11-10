
undefined4 FUN_001fb7fc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 0;
  }
  uVar3 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 4;
  return uVar3;
}

