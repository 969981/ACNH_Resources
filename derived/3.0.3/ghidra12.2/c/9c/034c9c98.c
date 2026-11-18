
void FUN_034c9c98(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x230);
  if (*(int *)(lVar4 + 0xe68) == 2) {
    lVar3 = 0;
  }
  else if (*(int *)(lVar4 + 0xe90) == 2) {
    lVar3 = 1;
  }
  else {
    if (*(int *)(lVar4 + 0xeb8) != 2) {
      return;
    }
    lVar3 = 2;
  }
  if (((*(int *)(lVar4 + 0x1b0) == 5) &&
      (plVar1 = *(long **)(lVar4 + lVar3 * 0x28 + 0xe60), plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x38))(), (uVar2 & 1) != 0)) {
    if (*(int *)(lVar4 + 0x1f0 + (ulong)*(byte *)(lVar4 + 0x200) * 4) == -1) {
      *(undefined4 *)(lVar4 + 0x1f0 + (ulong)*(byte *)(lVar4 + 0x200) * 4) = 6;
    }
  }
  return;
}

