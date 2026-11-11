
undefined8 FUN_003d2320(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_78 [28];
  undefined4 local_5c [2];
  char local_54;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_003c91bc(auStack_78);
  puVar5 = (uint *)FUN_003c94ac(auStack_78);
  uVar7 = 0;
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      uVar8 = 0;
      puVar3 = puVar5;
      do {
        uVar1 = puVar3[1];
        uVar2 = puVar3[2];
        local_5c[0] = 0xffffffff;
        local_54 = '\0';
        uVar6 = FUN_003b8858(*(undefined8 *)(param_1 + 8),uVar1,local_5c);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        if (local_54 == '\0') {
          uVar4 = FUN_003b8448(*(undefined8 *)(param_1 + 8),uVar1);
          uVar6 = FUN_003d1610(param_1,uVar4,param_3,0,1);
        }
        else {
          uVar6 = FUN_003d1728(param_1,uVar1,uVar2,param_3,0);
          uVar6 = uVar6 & 1;
        }
        if (uVar6 == 0) {
          return 0;
        }
        uVar8 = uVar8 + 1;
        puVar3 = puVar3 + 2;
      } while (uVar8 < *puVar5);
    }
    uVar7 = 1;
  }
  return uVar7;
}

