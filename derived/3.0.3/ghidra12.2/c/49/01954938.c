
undefined1 FUN_01954938(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  *(undefined1 *)(param_1 + 0x628) = 1;
  local_34[0] = *param_2;
  if (7 < local_34[0]) goto LAB_01954a64;
  lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 0x629) = 0;
    goto LAB_01954a64;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "GstQuestStartFlag";
  iVar1 = FUN_0274bce0(param_2,&local_48);
  *(bool *)(param_1 + 0x629) = iVar1 != 0;
  if (iVar1 == 0) goto LAB_01954a64;
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar6 = *(long **)(lVar8 + 0x98);
    if (plVar6 != (long *)0x0) goto LAB_019549fc;
LAB_01954a18:
    uVar2 = 1;
  }
  else {
    plVar6 = *(long **)(lVar4 + 0x19548);
    if (plVar6 == (long *)0x0) goto LAB_01954a18;
LAB_019549fc:
    if ((undefined8 *)*plVar6 == (undefined8 *)0x0) goto LAB_01954a18;
    uVar2 = (*(code *)**(undefined8 **)*plVar6)();
    uVar2 = uVar2 ^ 1;
  }
  uVar3 = FUN_027fa6d0(*(long *)(lVar8 + 0x80) + *(long *)(lVar8 + 0x78),0x89);
  *(undefined4 *)(param_1 + 0x62c) = uVar3;
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x630) = bVar7;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar8 + 0x98) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x98) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_01954a64:
  return *(undefined1 *)(param_1 + 0x629);
}

