
uint FUN_023275c8(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_023276a0;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
    plVar5 = *(long **)(lVar6 + 0x1090);
    if (plVar5 != (long *)0x0) goto LAB_02327648;
LAB_02327664:
    uVar1 = 1;
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x1a540);
    if (plVar5 == (long *)0x0) goto LAB_02327664;
LAB_02327648:
    if ((undefined8 *)*plVar5 == (undefined8 *)0x0) goto LAB_02327664;
    uVar1 = (*(code *)**(undefined8 **)*plVar5)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_0277a6a8(*(long *)(lVar6 + 0x1078) + *(long *)(lVar6 + 0x1070),param_2);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x1090) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1090) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
LAB_023276a0:
  return uVar2 & 1;
}

