
void FUN_03f10f90(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if (((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x138), lVar5 != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x144), uVar1 != 0)) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar3 = param_2 - uVar3 * uVar1;
    uVar4 = uVar3;
    do {
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3));
      if (uVar2 == param_2) {
        lVar5 = (long)*(int *)(lVar5 + (long)(int)uVar4 * 8 + 4);
        if (*(int *)(*(long *)(param_1 + 0x120) + lVar5 * 4) == param_3) {
          return;
        }
        *(int *)(*(long *)(param_1 + 0x120) + lVar5 * 4) = param_3;
        *(undefined1 *)(*(long *)(param_1 + 0x118) + lVar5) = 1;
        return;
      }
      if (uVar2 == 0) {
        return;
      }
      uVar2 = 0;
      if ((int)(uVar4 + 1) < (int)uVar1) {
        uVar2 = uVar4 + 1;
      }
      uVar4 = uVar2;
    } while (uVar2 != uVar3);
  }
  return;
}

