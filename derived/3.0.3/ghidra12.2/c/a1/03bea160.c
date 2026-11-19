
bool FUN_03bea160(long param_1,uint param_2,long param_3,uint param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_4;
  uVar4 = FUN_03be8d94(param_1,param_3,&DAT_0407ebb1);
  if ((uVar4 & 1) != 0) {
    puVar7 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_3 + 0x18));
    puVar1 = puVar7 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_3 + 0x18)) {
      puVar1 = puVar7;
    }
    if ((*puVar1 >> (uVar8 & 0x3f) & 1) != 0) {
      uVar4 = *puVar1 & 0xffffffffffffffffU >> (~uVar8 & 0x3f);
      uVar5 = (int)uVar4 - ((uint)(uVar4 >> 1) & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar3 = (uint)(uVar4 >> 0x20);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar5 = (uint)*(byte *)((long)puVar1 +
                             (long)(int)((uVar5 + (uVar5 >> 0x10) & 0x3f) +
                                         (uVar3 + (uVar3 >> 0x10) & 0x3f) + -1) * 4 + 0xb);
      goto LAB_03bea29c;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if (param_4 < *(uint *)(lVar6 + 0x534)) {
      iVar2 = *(int *)(*(long *)(lVar6 + 0x548) + uVar8 * 0xc + 4);
      uVar5 = (uint)(iVar2 == 5) << 2;
      if (iVar2 == 4) {
        uVar5 = 1;
      }
      goto LAB_03bea29c;
    }
  }
  uVar5 = 0;
LAB_03bea29c:
  return uVar5 == param_2;
}

