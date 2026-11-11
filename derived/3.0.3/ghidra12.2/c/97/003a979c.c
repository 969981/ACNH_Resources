
void FUN_003a979c(long param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  uVar2 = (ulong)(*(uint *)(lVar1 + (long)param_2 * 4) >> 0xf) & 0x7fff;
  if ((int)uVar2 != 0x7fff) {
    lVar3 = uVar2 * 4;
    *(uint *)(lVar1 + lVar3) = *(uint *)(lVar1 + lVar3) & 0x3fffffff;
    *(uint *)(*(long *)(param_1 + 0x58) + lVar3) =
         *(uint *)(*(long *)(param_1 + 0x58) + lVar3) | param_3 << 0x1e;
  }
  return;
}

