
void FUN_011ec494(long param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(*(long *)(param_1 + 8) + 0x24f7c);
  uVar3 = *puVar1;
  uVar4 = (ulong)uVar3;
  if (uVar3 != 0x1c && *param_2 != 0) {
    lVar2 = *(long *)(param_1 + 8) + 0x1dab8;
    if (0x1b < uVar3) {
      uVar4 = 0;
    }
    *(int *)(lVar2 + uVar4 * 4) = *param_2;
    uVar4 = (ulong)*puVar1;
    if (0x1b < *puVar1) {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar2 + uVar4 + 0x70) = 0xff;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

