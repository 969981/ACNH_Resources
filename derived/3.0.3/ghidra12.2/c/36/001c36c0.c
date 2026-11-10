
void FUN_001c36c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_001c3760(param_1,param_1 + 8);
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar4 = *(long *)(param_1 + 0x70);
    do {
      lVar4 = *(long *)(*(long *)(param_1 + 0x50) + lVar4 * 8);
      FUN_001e1868(lVar4 + 8);
      FUN_00187e4c(lVar4);
      lVar2 = *(long *)(param_1 + 0x78);
      uVar1 = *(long *)(param_1 + 0x70) + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x70) * 8) = 0;
      uVar5 = *(ulong *)(param_1 + 0x80);
      lVar2 = lVar2 + -1;
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar1 / uVar5;
      }
      lVar4 = uVar1 - uVar3 * uVar5;
      *(long *)(param_1 + 0x70) = lVar4;
      *(long *)(param_1 + 0x78) = lVar2;
    } while (lVar2 != 0);
  }
  FUN_0018ac30(param_1 + 0x90);
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    FUN_00187e4c();
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
  FUN_00187e4c();
  return;
}

