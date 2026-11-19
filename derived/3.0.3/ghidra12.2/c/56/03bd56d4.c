
undefined1  [16] FUN_03bd56d4(long *param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1,0xd);
  puVar3 = PTR_DAT_04bb38c8;
  puVar2 = PTR_DAT_04bb38c0;
  if ((param_3 != 0) && (-1 < (int)uVar4)) {
    uVar7 = (ulong)param_3;
    puVar5 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar7) + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar7) {
      puVar5 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar7);
    }
    if ((*puVar5 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
      uVar4 = (**(code **)(*param_1 + 0x50))(param_1,0xd);
      uVar8 = 0;
      if ((int)uVar4 < 0) goto LAB_03bd5850;
      puVar5 = (uint *)(*(ulong *)puVar3 | uVar7) + 0x40000000;
      if (*(ulong *)puVar2 <= uVar7) {
        puVar5 = (uint *)(*(ulong *)puVar3 | uVar7);
      }
      if ((*puVar5 >> (ulong)(uVar4 & 0x1f) & 1) == 0) goto LAB_03bd5850;
      uVar4 = *puVar5 & 0xffffffffU >> (ulong)(~uVar4 & 0x1f);
      uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      puVar5 = puVar5 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) + 1;
      goto LAB_03bd58a4;
    }
  }
  uVar7 = FUN_03be8d94(param_1,param_2,"getPositionX");
  uVar8 = 0;
  if ((uVar7 & 1) != 0) {
    puVar6 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar6 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar6;
    }
    uVar4 = (uint)*puVar1;
    if ((uVar4 >> 0xd & 1) != 0) {
      uVar4 = (uVar4 & 0x3fff) - (uVar4 >> 1 & 0x1555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      puVar5 = (uint *)((long)puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) * 4 + 8);
LAB_03bd58a4:
      auVar9 = FUN_03be93d4(0,param_1,puVar5,param_4);
      return auVar9;
    }
    if (0xd < *(uint *)(*(long *)(param_1[3] + 8) + 0x534)) {
      uVar8 = (ulong)*(uint *)(*(long *)(*(long *)(param_1[3] + 8) + 0x548) + 0xa4);
    }
  }
LAB_03bd5850:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar8;
  return auVar9;
}

