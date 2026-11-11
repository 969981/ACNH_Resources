
void FUN_003acd80(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *(ushort *)(param_1 + 0x32);
  if ((ulong)uVar3 != 0) {
    uVar6 = 0;
    do {
      lVar5 = (uVar6 >> 5 & 0x7ffffff) * 4;
      uVar4 = 1 << (ulong)((uint)uVar6 & 0x1f);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + uVar6 * 0x80) + 4);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + lVar5);
      *(uint *)(*(long *)(param_1 + 0x10) + lVar5) =
           uVar2 & (uVar4 ^ 0xffffffff) | (uVar1 & 1) << (ulong)((uint)uVar6 & 0x1f);
      if ((*(code **)(param_1 + 0x80) != (code *)0x0) && (((uVar1 ^ (uVar2 & uVar4) != 0) & 1) != 0)
         ) {
        (**(code **)(param_1 + 0x80))(param_1,uVar6 & 0xffffffff);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar3);
  }
  return;
}

