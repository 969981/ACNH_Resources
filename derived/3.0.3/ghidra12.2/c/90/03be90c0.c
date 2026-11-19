
undefined4 FUN_03be90c0(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong *puVar10;
  long lVar11;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  uVar2 = *(int *)(lVar11 + 0x560) + param_2;
  if (((uVar2 < *(uint *)(lVar11 + 0x534)) &&
      (*(int *)(*(long *)(lVar11 + 0x548) + (ulong)uVar2 * 0xc + 4) == 0)) &&
     (uVar8 = FUN_03be8d94(param_1,param_3,"getCustomParamValueInt(%d)",param_2), (uVar8 & 1) != 0))
  {
    puVar10 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_3 + 0x18));
    puVar3 = puVar10 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_3 + 0x18)) {
      puVar3 = puVar10;
    }
    if ((*puVar3 >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
      if (*(uint *)(lVar11 + 0x534) <= uVar2) goto LAB_03be9234;
      puVar9 = (undefined4 *)(*(long *)(lVar11 + 0x548) + (ulong)uVar2 * 0xc + 8);
    }
    else {
      uVar8 = *puVar3 & 0xffffffffffffffffU >> (~(ulong)uVar2 & 0x3f);
      uVar2 = (int)uVar8 - ((uint)(uVar8 >> 1) & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar6 = (uint)(uVar8 >> 0x20);
      uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar5 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar4 = puVar1 + uVar5;
      if (1 < uVar5) {
        puVar4 = puVar1;
      }
      puVar9 = (undefined4 *)
               (*(long *)(*(long *)*puVar4 + 0x48) +
               ((ulong)*(uint *)((long)puVar3 +
                                (long)(int)((uVar2 + (uVar2 >> 0x10) & 0x3f) +
                                            (uVar6 + (uVar6 >> 0x10) & 0x3f) + -1) * 4 + 8) &
               0xffffff) * 4);
    }
    uVar7 = *puVar9;
  }
  else {
LAB_03be9234:
    uVar7 = 0;
  }
  return uVar7;
}

