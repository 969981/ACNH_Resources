
bool FUN_03bea040(long param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  uVar1 = *(int *)(lVar5 + 0x560) + param_2;
  if ((uVar1 < *(uint *)(lVar5 + 0x534)) &&
     (uVar4 = FUN_03be8d94(param_1,param_3,&DAT_0407ebb1), (uVar4 & 1) != 0)) {
    puVar6 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_3 + 0x18));
    puVar2 = puVar6 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_3 + 0x18)) {
      puVar2 = puVar6;
    }
    if ((*puVar2 >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
      uVar4 = *puVar2 & 0xffffffffffffffffU >> (~(ulong)uVar1 & 0x3f);
      uVar1 = (int)uVar4 - ((uint)(uVar4 >> 1) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar3 = (uint)(uVar4 >> 0x20);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      return *(char *)((long)puVar2 +
                      (long)(int)((uVar1 + (uVar1 >> 0x10) & 0x3f) +
                                  (uVar3 + (uVar3 >> 0x10) & 0x3f) + -1) * 4 + 0xb) == '\x02';
    }
  }
  return false;
}

