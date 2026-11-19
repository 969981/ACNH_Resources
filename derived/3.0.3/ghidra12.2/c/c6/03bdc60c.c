
undefined8 * FUN_03bdc60c(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar3 = FUN_03be8d94(param_1,param_2,"getBoneName");
  if ((uVar3 & 1) == 0) {
    puVar4 = &DAT_0407ebb1;
  }
  else {
    uVar3 = *(ulong *)PTR_DAT_04bb38c0;
    uVar5 = *(ulong *)PTR_DAT_04bb38c8;
    puVar9 = (undefined8 *)(uVar5 | *(uint *)(param_2 + 0x18));
    puVar4 = puVar9 + 0x20000000;
    if (uVar3 <= *(uint *)(param_2 + 0x18)) {
      puVar4 = puVar9;
    }
    uVar8 = (uint)*puVar4;
    if ((uVar8 >> 0xf & 1) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 8);
      if (*(uint *)(lVar6 + 0x534) < 0x10) {
        puVar4 = &DAT_0407ebb1;
      }
      else {
        uVar7 = (ulong)*(uint *)(*(long *)(lVar6 + 0x548) + 0xbc);
        puVar9 = (undefined8 *)(uVar5 | uVar7);
        puVar4 = puVar9 + 0x20000000;
        if (uVar3 <= uVar7) {
          puVar4 = puVar9;
        }
      }
    }
    else {
      uVar8 = (uVar8 & 0xffff) - (uVar8 >> 1 & 0x5555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar1 = puVar9 + uVar2;
      if (1 < uVar2) {
        puVar1 = puVar9;
      }
      uVar7 = (ulong)((*(uint *)((long)puVar4 +
                                (long)(int)((uVar8 + (uVar8 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                      0xffffff) + *(int *)(*(long *)*puVar1 + 0x70));
      puVar9 = (undefined8 *)(uVar5 | uVar7);
      puVar4 = puVar9 + 0x20000000;
      if (uVar3 <= uVar7) {
        puVar4 = puVar9;
      }
    }
  }
  return puVar4;
}

