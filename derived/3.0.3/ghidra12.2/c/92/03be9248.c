
undefined1  [16] FUN_03be9248(long param_1,int param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  uint uVar7;
  
  uVar7 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  uVar1 = *(int *)(lVar5 + 0x560) + param_2;
  if (((uVar1 < *(uint *)(lVar5 + 0x534)) &&
      (*(int *)(*(long *)(lVar5 + 0x548) + (ulong)uVar1 * 0xc + 4) == 1)) &&
     (uVar3 = FUN_03be8d94(param_1,param_3,"getCustomParamValueFloat(%d)",param_2), (uVar3 & 1) != 0
     )) {
    puVar4 = (ulong *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_3 + 0x18));
    puVar2 = puVar4 + 0x20000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_3 + 0x18)) {
      puVar2 = puVar4;
    }
    if ((*puVar2 >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
      uVar3 = *puVar2 & 0xffffffffffffffffU >> (~(ulong)uVar1 & 0x3f);
      uVar1 = (int)uVar3 - ((uint)(uVar3 >> 1) & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar7 = (uint)(uVar3 >> 0x20);
      uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
      uVar7 = uVar7 + (uVar7 >> 8);
      FUN_03be93d4(param_1,(long)puVar2 +
                           (long)(int)((uVar1 + (uVar1 >> 0x10) & 0x3f) +
                                       (uVar7 + (uVar7 >> 0x10) & 0x3f) + -1) * 4 + 8,param_4);
      auVar6._4_4_ = extraout_var;
      auVar6._0_4_ = extraout_s0;
      auVar6._8_8_ = extraout_var_00;
      return auVar6;
    }
    if (uVar1 < *(uint *)(lVar5 + 0x534)) {
      uVar7 = *(uint *)(*(long *)(lVar5 + 0x548) + (ulong)uVar1 * 0xc + 8);
    }
  }
  return ZEXT416(uVar7);
}

