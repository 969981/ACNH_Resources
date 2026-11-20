
void FUN_03effce0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    if ((param_2 & 1) == 0) {
      do {
        uVar1 = uVar3;
        if (*(uint *)(param_1 + 0x10) <= uVar3) {
          uVar1 = 0;
        }
        uVar3 = uVar3 + 1;
        lVar4 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48;
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & 0xfffffffe;
      } while (uVar2 != uVar3);
    }
    else {
      do {
        uVar1 = uVar3;
        if (*(uint *)(param_1 + 0x10) <= uVar3) {
          uVar1 = 0;
        }
        puVar5 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48 + 0x18);
        uVar1 = *puVar5;
        if ((uVar1 >> 3 & 1) == 0) {
          *puVar5 = uVar1 | 1;
          uVar1 = uVar3;
          if (*(uint *)(param_1 + 0x10) <= uVar3) {
            uVar1 = 0;
          }
          lVar4 = *(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x48;
          *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) | 2;
        }
        else {
          *puVar5 = uVar1 & 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return;
}

