
undefined8 FUN_001f77fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x18);
  if ((ulong)(lVar4 - lVar1) < 2) {
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_0019da3c(param_2);
    return 1;
  }
  uVar2 = *(ushort *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) + lVar1);
  uVar5 = (ulong)uVar2;
  *(long *)(param_1 + 0x18) = lVar1 + 2;
  if ((ulong)(lVar4 - (lVar1 + 2)) < uVar5) {
    *(undefined1 *)(param_1 + 8) = 1;
    return 0;
  }
  FUN_0019da3c(param_2);
  if (uVar2 != 0) {
    lVar3 = FUN_001abe40(param_1);
    FUN_0019da50(param_2,*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28) +
                         *(long *)(param_1 + 0x18),uVar5);
    uVar5 = *(long *)(param_1 + 0x18) + uVar5;
    if (uVar5 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18)) {
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
  }
  return 1;
}

