
undefined8 * FUN_03bdbcf0(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  uVar4 = FUN_03be8d94(param_1,param_2,"getAssetName");
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_0407ebb1;
  }
  else {
    uVar4 = *(ulong *)PTR_DAT_04bb38c0;
    uVar6 = *(ulong *)PTR_DAT_04bb38c8;
    puVar9 = (undefined8 *)(uVar6 | *(uint *)(param_2 + 0x18));
    puVar5 = puVar9 + 0x20000000;
    if (uVar4 <= *(uint *)(param_2 + 0x18)) {
      puVar5 = puVar9;
    }
    if (((uint)*puVar5 >> 1 & 1) == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 8);
      if (*(uint *)(lVar7 + 0x534) < 2) {
        puVar5 = &DAT_0407ebb1;
      }
      else {
        uVar8 = (ulong)*(uint *)(*(long *)(lVar7 + 0x548) + 0x14);
        puVar9 = (undefined8 *)(uVar6 | uVar8);
        puVar5 = puVar9 + 0x20000000;
        if (uVar4 <= uVar8) {
          puVar5 = puVar9;
        }
      }
    }
    else {
      uVar1 = (uint)*puVar5 & 3;
      uVar1 = uVar1 - (uVar1 >> 1);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar2 = puVar9 + uVar3;
      if (1 < uVar3) {
        puVar2 = puVar9;
      }
      uVar8 = (ulong)((*(uint *)((long)puVar5 +
                                (long)(int)((uVar1 + (uVar1 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                      0xffffff) + *(int *)(*(long *)*puVar2 + 0x70));
      puVar9 = (undefined8 *)(uVar6 | uVar8);
      puVar5 = puVar9 + 0x20000000;
      if (uVar4 <= uVar8) {
        puVar5 = puVar9;
      }
    }
  }
  return puVar5;
}

