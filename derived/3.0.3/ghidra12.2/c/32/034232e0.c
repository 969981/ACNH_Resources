
uint FUN_034232e0(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  byte local_34 [4];
  
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_34,1);
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_034233c4;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
    plVar5 = *(long **)(lVar6 + 0x1100);
    if (plVar5 != (long *)0x0) goto LAB_03423368;
LAB_03423384:
    uVar1 = 1;
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x1a5b0);
    if (plVar5 == (long *)0x0) goto LAB_03423384;
LAB_03423368:
    if ((undefined8 *)*plVar5 == (undefined8 *)0x0) goto LAB_03423384;
    uVar1 = (*(code *)**(undefined8 **)*plVar5)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_034233e0(param_1,param_2,*(long *)(lVar6 + 0x10e8) + *(long *)(lVar6 + 0x10e0));
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x1100) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1100) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
LAB_034233c4:
  return uVar2 & 1;
}

