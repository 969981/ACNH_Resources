
undefined8 FUN_030319e0(byte *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar7 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar3 = *(long *)(lVar7 + 0x2ae60);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar7 + 0x2ae60) == 0) goto LAB_03031ac4;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x2ae60) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar7 + 0x2ae40);
      local_40 = *(undefined8 *)(lVar7 + 0x2ae48);
      uStack_38 = 0x6270;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_03031ac4:
  lVar3 = 0;
  plVar5 = (long *)(*(long *)(lVar7 + 0x2ae48) + *(long *)(lVar7 + 0x2ae40));
  while( true ) {
    uVar2 = *(uint *)((long)plVar5 + lVar3 + 0x60e0);
    plVar1 = plVar5 + (ulong)uVar2 * 0x1f;
    if (99 < uVar2) {
      plVar1 = plVar5;
    }
    if ((((*plVar1 != 0 && plVar1[1] != 0) && ((int)plVar1[2] != 0 && plVar1[6] != 0)) &&
        (*(int *)((long)plVar1 + 0x54) != 0 && (int)plVar1[7] != 0)) &&
       ((short)plVar1[0xe] != 0 && plVar1[6] == *param_2)) break;
    lVar3 = lVar3 + 4;
    if (lVar3 == 400) {
      uVar8 = 0;
joined_r0x03031b4c:
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2ae60) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2ae60) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
      return uVar8;
    }
  }
  uVar8 = 1;
  goto joined_r0x03031b4c;
}

