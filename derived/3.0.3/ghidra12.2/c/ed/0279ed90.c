
void FUN_0279ed90(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  byte local_4c [4];
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  iVar1 = FUN_0277d6c4(param_2);
  if (iVar1 < 0x2182) {
    if (iVar1 == 0x1ff3) {
      uVar7 = 0;
    }
    else if (iVar1 == 0x2155) {
      uVar7 = 2;
    }
    else {
      if (iVar1 != 0x217e) {
        return;
      }
      uVar7 = 5;
    }
  }
  else if (iVar1 == 0x2182) {
    uVar7 = 3;
  }
  else if (iVar1 == 0x2591) {
    uVar7 = 4;
  }
  else {
    if (iVar1 != 0x21d4) {
      return;
    }
    uVar7 = 1;
  }
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x18358);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x18358) == 0) goto LAB_0279eed4;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined **)(lVar2 + 0x18338);
      local_40 = *(char **)(lVar2 + 0x18340);
      uStack_38 = 0x62ac;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_0279eed4:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "CollectGoldTool";
  FUN_0279e300(*(long *)(lVar2 + 0x18340) + *(long *)(lVar2 + 0x18338),param_1,&local_48,uVar7);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

