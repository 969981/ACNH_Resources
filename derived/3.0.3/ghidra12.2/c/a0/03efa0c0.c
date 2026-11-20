
void FUN_03efa0c0(long param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 + 1;
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 8);
  if (*(uint *)(param_1 + 0x30) <= param_2) {
    param_2 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)param_2) =
       *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)param_2) | 4;
  if ((int)uVar5 < (int)uVar1) {
    uVar4 = uVar5;
    do {
      uVar3 = uVar4;
      if (*(uint *)(*(long *)(param_1 + 8) + 0x18) <= uVar4) {
        uVar3 = 0;
      }
      sVar2 = *(short *)(*(long *)(*(long *)(param_1 + 8) + 0x20) + (long)(int)uVar3 * 2);
      if ((int)sVar2 != 0xffffffff) {
        uVar3 = (uint)sVar2;
        if (*(uint *)(param_1 + 0x30) < (uint)(int)sVar2 || *(uint *)(param_1 + 0x30) == uVar3) {
          uVar3 = 0;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3) >> 2 & 1) != 0) {
          FUN_03ef9b40(param_1,uVar4);
          uVar3 = uVar4;
          if (*(uint *)(param_1 + 0x30) <= uVar4) {
            uVar3 = 0;
          }
          *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3) =
               *(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3) | 4;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    do {
      uVar4 = uVar5;
      if (*(uint *)(param_1 + 0x30) <= uVar5) {
        uVar4 = 0;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar4) >> 2 & 1) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar4) = 2;
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}

