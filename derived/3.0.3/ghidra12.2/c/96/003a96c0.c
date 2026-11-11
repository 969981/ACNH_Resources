
void FUN_003a96c0(long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(ushort *)((long)param_1 + 0xc);
  if (*(ushort *)((long)param_1 + 0xc) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(param_2 + uVar4 * 2);
      if (uVar1 < 0x7fff) {
        lVar6 = uVar4 * 4;
        *(uint *)(*param_1 + lVar6) = *(uint *)(*param_1 + lVar6) & 0x3fff8000;
        lVar2 = (ulong)uVar1 * 4;
        *(uint *)(*param_1 + lVar6) = *(uint *)(*param_1 + lVar6) | (uint)uVar1;
        *(uint *)(*param_1 + lVar2) = *(uint *)(*param_1 + lVar2) & 0xc0007fff;
        *(uint *)(*param_1 + lVar2) = *(uint *)(*param_1 + lVar2) | uVar3 & 0x3fff8000;
        uVar5 = (ulong)*(ushort *)((long)param_1 + 0xc);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x8000;
    } while (uVar4 < uVar5);
  }
  return;
}

