
void FUN_02188378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
LAB_021883e8:
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_021883e8;
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar5 + 0x1a3d68);
  lVar2 = *(long *)(lVar5 + 0x1a3d88);
  if (lVar2 == 0) {
    FUN_028b3e80(*(long *)(lVar5 + 0x1a3d70) + *plVar1,param_3);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar5 + 0x1a3d88) == 0) goto LAB_02188448;
    plVar4 = *(long **)(*(long *)(lVar5 + 0x1a3d88) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar5 + 0x1a3d70);
    uStack_38 = 0x1828;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_02188448:
  FUN_028b3e80(*(long *)(lVar5 + 0x1a3d70) + *plVar1,param_3);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x1a3d88) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1a3d88) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

