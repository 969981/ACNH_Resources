
void FUN_003a53c0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = FUN_003a1b00(param_2,param_3);
  lVar2 = (long)param_3;
  do {
    lVar3 = *(long *)(param_1 + 0x58);
    uVar4 = (ulong)(*(uint *)(lVar3 + lVar2 * 4) >> 0xf) & 0x7fff;
    if ((int)uVar4 != 0x7fff) {
      lVar5 = uVar4 * 4;
      *(uint *)(lVar3 + lVar5) = *(uint *)(lVar3 + lVar5) & 0x3fffffff;
      *(uint *)(*(long *)(param_1 + 0x58) + lVar5) =
           *(uint *)(*(long *)(param_1 + 0x58) + lVar5) | param_4 << 0x1e;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 < iVar1);
  return;
}

