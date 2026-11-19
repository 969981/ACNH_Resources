
bool FUN_0384c2dc(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return false;
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 3 + *(uint *)(plVar5 + 2);
    if (1 < *(uint *)(plVar5 + 2)) {
      plVar1 = plVar5 + 3;
    }
    if (((long *)*plVar1 != (long *)0x0) && (lVar8 = *(long *)*plVar1, lVar8 != 0)) {
      (**(code **)(*plVar5 + 0x10))();
      puVar6 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
      puVar2 = puVar6 + 0x20000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
        puVar2 = puVar6;
      }
      if (((*puVar2 >> ((ulong)param_3 & 0x3f) & 1) != 0) &&
         (lVar8 = *(long *)(lVar8 + 0x58), lVar8 != 0)) {
        uVar7 = *puVar2 & 0xffffffffffffffffU >> (~(ulong)param_3 & 0x3f);
        uVar3 = (int)uVar7 - ((uint)(uVar7 >> 1) & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar4 = (uint)(uVar7 >> 0x20);
        uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
        uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
        uVar4 = uVar4 + (uVar4 >> 8);
        return *(char *)(lVar8 + (ulong)(*(uint *)((long)puVar2 +
                                                  (long)(int)((uVar3 + (uVar3 >> 0x10) & 0x3f) +
                                                              (uVar4 + (uVar4 >> 0x10) & 0x3f) + -1)
                                                  * 4 + 8) & 0xffffff) * 0x14 + 0x12) != '\0';
      }
    }
  }
  return false;
}

