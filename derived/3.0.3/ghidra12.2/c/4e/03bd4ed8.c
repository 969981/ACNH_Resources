
undefined1  [16] FUN_03bd4ed8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  uVar2 = FUN_03be8d94(param_1,param_2,"getEmissionInterval");
  if ((uVar2 & 1) == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    puVar5 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
    puVar1 = puVar5 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
      puVar1 = puVar5;
    }
    uVar4 = (uint)*puVar1;
    if ((uVar4 >> 0x19 & 1) != 0) {
      uVar4 = (uVar4 & 0x3ffffff) - (uVar4 >> 1 & 0x1555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      auVar6 = FUN_03be93d4(param_1,(long)puVar1 +
                                    (long)(int)((uVar4 + (uVar4 >> 0x10) & 0x3f) - 1) * 4 + 8,
                            param_3);
      return auVar6;
    }
    uVar2 = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if (0x19 < *(uint *)(lVar3 + 0x534)) {
      uVar2 = (ulong)*(uint *)(*(long *)(lVar3 + 0x548) + 0x134);
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

