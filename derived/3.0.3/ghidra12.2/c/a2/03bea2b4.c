
ulong FUN_03bea2b4(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar2 = plVar1 + uVar4;
  if (1 < uVar4) {
    plVar2 = plVar1;
  }
  uVar5 = (ulong)((*(uint *)(((long *)*plVar2)[3] +
                            (ulong)(uint)(*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x568)
                                         + param_2) * 4) & 0xffffff) +
                 *(int *)(*(long *)*plVar2 + 0x70));
  uVar6 = *(ulong *)PTR_DAT_04bb38c8 | uVar5;
  uVar3 = uVar6 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar5) {
    uVar3 = uVar6;
  }
  return uVar3;
}

