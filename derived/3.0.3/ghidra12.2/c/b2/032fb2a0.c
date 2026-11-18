
void FUN_032fb2a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xbdc);
  if (0 < (int)*(uint *)(param_1 + 0xbdc)) {
    uVar2 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x468) + uVar2 * 2) == 10) {
        iVar1 = (int)uVar2;
        if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x470))) &&
           (*(undefined2 *)(*(long *)(param_1 + 0x468) + uVar2 * 2) = 0,
           iVar1 < *(int *)(param_1 + 0x474))) {
          *(int *)(param_1 + 0x474) = iVar1;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0xbdc);
        if ((long)uVar2 < (long)uVar3) {
          uVar3 = uVar2 & 0xffffffff;
          *(int *)(param_1 + 0xbdc) = iVar1;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)uVar3);
  }
  return;
}

