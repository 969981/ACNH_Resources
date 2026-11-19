
char FUN_03bea37c(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  
  uVar6 = FUN_03be8d94(param_1,param_2,&DAT_0407ebb1);
  if ((uVar6 & 1) != 0) {
    puVar8 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar8 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar8;
    }
    if ((*puVar1 >> (param_3 & 0x3f) & 1) != 0) {
      uVar6 = *puVar1 & 0xffffffffffffffffU >> (~(param_3 & 0xffffffff) & 0x3f);
      uVar4 = (int)uVar6 - ((uint)(uVar6 >> 1) & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      return *(char *)((long)puVar1 +
                      (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) +
                                  (uVar5 + (uVar5 >> 0x10) & 0x3f) + -1) * 4 + 0xb);
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if ((uint)param_3 < *(uint *)(lVar7 + 0x534)) {
      iVar3 = *(int *)(*(long *)(lVar7 + 0x548) + (param_3 & 0xffffffff) * 0xc + 4);
      cVar2 = (iVar3 == 5) << 2;
      if (iVar3 == 4) {
        cVar2 = '\x01';
      }
      return cVar2;
    }
  }
  return '\0';
}

