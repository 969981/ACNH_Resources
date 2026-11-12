
uint FUN_00ad42e8(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  byte local_44 [4];
  
  puVar1 = PTR_DAT_04bb47e0;
  if (*(long *)PTR_DAT_04bb47e0 != 0 && param_2[0x1e] == 0) {
    local_44[0] = *param_2;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    lVar3 = FUN_025830c0(DAT_055021a0,local_44,1);
    uVar2 = 0;
    if (lVar3 == 0) goto LAB_00ad4400;
    lVar7 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar7 = *(long *)(DAT_05574040 + 0x20);
      plVar6 = *(long **)(lVar7 + 0x1090);
      if (plVar6 != (long *)0x0) goto LAB_00ad4388;
LAB_00ad43a4:
      uVar2 = 1;
    }
    else {
      plVar6 = *(long **)(lVar3 + 0x1a540);
      if (plVar6 == (long *)0x0) goto LAB_00ad43a4;
LAB_00ad4388:
      if ((undefined8 *)*plVar6 == (undefined8 *)0x0) goto LAB_00ad43a4;
      uVar2 = (*(code *)**(undefined8 **)*plVar6)();
      uVar2 = uVar2 ^ 1;
    }
    uVar4 = FUN_0277a1f4(*(long *)(lVar7 + 0x1078) + *(long *)(lVar7 + 0x1070),param_3);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x1090) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x1090) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_019556fc(*(undefined8 *)puVar1,param_2,param_3,param_2 + 0xe);
      goto LAB_00ad4400;
    }
  }
  uVar2 = 0;
LAB_00ad4400:
  return uVar2 & 1;
}

