
void FUN_0279ef38(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  iVar1 = FUN_0277d6c4(param_2);
  if (iVar1 < 0x2182) {
    if (iVar1 == 0x1ff3) {
      uVar6 = 0;
    }
    else if (iVar1 == 0x2155) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 0x217e) {
        return;
      }
      uVar6 = 5;
    }
  }
  else if (iVar1 == 0x2182) {
    uVar6 = 3;
  }
  else if (iVar1 == 0x2591) {
    uVar6 = 4;
  }
  else {
    if (iVar1 != 0x21d4) {
      return;
    }
    uVar6 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18358);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(param_1 + 0x18358) == 0) goto LAB_0279f060;
      plVar3 = *(long **)(*(long *)(param_1 + 0x18358) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined **)(param_1 + 0x18338);
      pcStack_40 = *(char **)(param_1 + 0x18340);
      local_38 = 0x62ac;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_0279f060:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "CollectGoldTool";
  FUN_0279e300(*(long *)(param_1 + 0x18340) + *(long *)(param_1 + 0x18338),PTR_DAT_04bb32e0,
               &local_48,uVar6);
  if ((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18358) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x18358) + 0x18), puVar4 != (undefined8 *)0x0))
  {
    (**(code **)*puVar4)();
  }
  return;
}

