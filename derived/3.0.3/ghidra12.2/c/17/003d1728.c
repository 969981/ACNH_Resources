
undefined8
FUN_003d1728(long *param_1,undefined4 param_2,undefined4 param_3,long *param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_60 [24];
  char local_48;
  
  uVar1 = FUN_003b8448(param_1[1]);
  lVar3 = (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  if ((lVar3 == 0) && (lVar3 = FUN_003d1888(param_1,param_2,param_4,param_5), lVar3 == 0)) {
    return 0;
  }
  FUN_003c8dd4(auStack_60,lVar3,1);
  if ((local_48 == '\0') || (lVar3 = FUN_003c8fec(auStack_60,param_3), lVar3 == 0)) {
    uVar4 = FUN_003c9054(auStack_60,param_3);
    uVar4 = uVar4 & 0xffffffff;
    lVar3 = (**(code **)(*param_4 + 0x10))(param_4,uVar4 + 0x107f & 0x1fffff000);
    if (lVar3 == 0) {
      return 0;
    }
    puVar6 = (undefined4 *)(lVar3 + 0x3fU & 0xffffffffffffffc0);
    puVar6[1] = uVar1;
    puVar6[2] = param_3;
    puVar7 = puVar6 + 0x10;
    *puVar6 = 0x56574946;
    uVar2 = FUN_003c9078(auStack_60,param_3);
    uVar5 = FUN_003d19f0(param_1,uVar1,puVar7,uVar4,uVar2,param_5);
    if (uVar5 != uVar4) {
      return 0;
    }
    FUN_003c90c8(auStack_60,param_3,puVar7);
    FUN_003b6c7c(puVar7,uVar4);
  }
  return 1;
}

