
undefined4 FUN_0267f6a0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
    plVar5 = *(long **)(lVar6 + 0x1e8);
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x19698);
  }
  if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(code *)**(undefined8 **)*plVar5)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_02806658(*(long *)(lVar6 + 0x1d0) + *(long *)(lVar6 + 0x1c8),param_2);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x1e8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1e8) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return uVar2;
}

