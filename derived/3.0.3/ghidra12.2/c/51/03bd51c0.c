
undefined8 * FUN_03bd51c0(long *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint *puVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1,0xb);
  puVar4 = &DAT_0407ebb1;
  if ((param_2 != 0) && (-1 < (int)uVar3)) {
    puVar7 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)param_2);
    puVar1 = puVar7 + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)param_2) {
      puVar1 = puVar7;
    }
    if ((*puVar1 >> (ulong)(uVar3 & 0x1f) & 1) == 0) {
      puVar4 = &DAT_0407ebb1;
    }
    else {
      uVar3 = *puVar1 & 0xffffffffU >> (ulong)(~uVar3 & 0x1f);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      puVar4 = (undefined8 *)(param_1[2] + 0x18);
      uVar2 = *(uint *)(param_1[2] + 0x10);
      puVar5 = puVar4 + uVar2;
      if (1 < uVar2) {
        puVar5 = puVar4;
      }
      uVar6 = (ulong)((puVar1[(long)(int)((uVar3 + (uVar3 >> 0x10) & 0x3f) - 1) + 1] & 0xffffff) +
                     *(int *)(*(long *)*puVar5 + 0x70));
      puVar5 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | uVar6);
      puVar4 = puVar5 + 0x20000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar6) {
        puVar4 = puVar5;
      }
    }
  }
  return puVar4;
}

