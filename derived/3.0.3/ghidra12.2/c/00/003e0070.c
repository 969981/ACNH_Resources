
bool FUN_003e0070(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  
  uVar3 = FUN_003b838c(param_2);
  lVar7 = (param_3 + (uVar3 & 0xffffffff) * 8 + 0xb & 0xfffffffffffffff8) - (param_3 + param_4);
  if (0 < lVar7) {
    return lVar7 < 1;
  }
  *(long *)(param_1 + 0x230) = param_3;
  uVar2 = FUN_003b838c(param_2);
  **(undefined4 **)(param_1 + 0x230) = uVar2;
  puVar6 = *(uint **)(param_1 + 0x230);
  if (*puVar6 != 0) {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      (puVar6 + uVar3 * 2 + 2)[0] = 0;
      (puVar6 + uVar3 * 2 + 2)[1] = 0;
      puVar6 = *(uint **)(param_1 + 0x230);
      uVar3 = uVar1;
    } while (uVar1 < *puVar6);
  }
  FUN_003d0c14(param_1 + 0x18,param_2);
  uVar4 = FUN_003c5b84();
  lVar5 = FUN_003cbb70(uVar4,0x20,1);
  *(long *)(lVar5 + 0x18) = param_1;
  *(undefined4 *)(lVar5 + 8) = 0x43;
  FUN_003cc15c(uVar4,lVar5);
  return lVar7 < 1;
}

