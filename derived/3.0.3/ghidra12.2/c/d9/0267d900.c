
uint FUN_0267d900(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar2 == 0) {
    uVar1 = 0;
    goto LAB_0267da34;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
    lVar2 = *(long *)(lVar6 + 0x178);
    if (lVar2 == 0) goto LAB_0267d9b4;
LAB_0267d968:
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar6 + 0x178) == 0) goto LAB_0267d9ec;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x178) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar6 + 0x158);
      uStack_50 = *(undefined8 *)(lVar6 + 0x160);
      local_48 = 0x11944;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x19628);
    if (lVar2 != 0) goto LAB_0267d968;
LAB_0267d9b4:
    uVar3 = 0;
  }
LAB_0267d9ec:
  uVar1 = FUN_028027c0(*(long *)(lVar6 + 0x160) + *(long *)(lVar6 + 0x158),param_2);
  if ((uVar1 & 1) != 0) {
    FUN_02648c90(param_1,param_2,0);
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x178) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_0267da34:
  return uVar1 & 1;
}

