
undefined1  [16] FUN_03bd4c00(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar2 = FUN_03be8d94(param_1,param_2,"getRotationY");
  uVar6 = 0;
  if ((uVar2 & 1) != 0) {
    puVar5 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar5 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar5;
    }
    uVar4 = (uint)*puVar1;
    if ((uVar4 >> 0x11 & 1) != 0) {
      uVar4 = (uVar4 & 0x3ffff) - (uVar4 >> 1 & 0x15555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      auVar7 = FUN_03be93d4(0,param_1,
                            (long)puVar1 + (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) * 4 + 8
                            ,param_3);
      return auVar7;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if (0x11 < *(uint *)(lVar3 + 0x534)) {
      uVar6 = (ulong)*(uint *)(*(long *)(lVar3 + 0x548) + 0xd4);
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar6;
  return auVar7;
}

