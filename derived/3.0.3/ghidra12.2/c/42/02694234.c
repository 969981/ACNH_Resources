
undefined4 FUN_02694234(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(long **)(lVar3 + 0x17bb0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17bb0), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_026b318c(param_1,*(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90) + 0x1c);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x17bb0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17bb0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2;
}

