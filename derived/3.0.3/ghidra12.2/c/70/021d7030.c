
undefined4 FUN_021d7030(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  byte local_24 [4];
  
  lVar6 = FUN_0265c2a0();
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar7 = FUN_025830c0(DAT_055021a0,local_24,1);
  uVar5 = 0xffffffff;
  if ((lVar6 != 0) && (lVar7 != 0)) {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar8 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar8)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar6 + 8);
    lVar2 = *(long *)(lVar6 + 0x10);
    if ((*(long **)(lVar7 + 0x17bb0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17bb0), puVar8 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar8)();
      uVar4 = uVar4 ^ 1;
    }
    uVar5 = FUN_026b318c(lVar2 + lVar1,
                         *(long *)(lVar7 + 0x17b98) + *(long *)(lVar7 + 0x17b90) + 0x1c);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x17bb0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17bb0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return uVar5;
}

